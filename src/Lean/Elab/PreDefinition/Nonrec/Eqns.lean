/-
Copyright (c) 2022 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Leonardo de Moura, Joachim Breitner
-/
prelude
import Lean.Meta.Tactic.Rewrite
import Lean.Meta.Tactic.Split
import Lean.Elab.PreDefinition.Basic
import Lean.Elab.PreDefinition.Eqns
import Lean.Meta.ArgsPacker.Basic
import Init.Data.Array.Basic

namespace Lean.Elab.Nonrec
open Meta
open Eqns

/--
Simple, coarse-grained equation theorem for nonrecursive definitions.
-/
private def mkSimpleEqThm (declName : Name) : MetaM (Option Name) := do
  if let some (.defnInfo info) := (← getEnv).find? declName then
    let name := mkEqLikeNameFor (← getEnv) declName eqn1ThmSuffix
    trace[Elab.definition.eqns] "mkSimpleEqnThm: {name}"
    realizeConst declName name (doRealize name info)
    return some name
  else
    return none
where
  doRealize name info :=
    lambdaTelescope (cleanupAnnotations := true) info.value fun xs body => do
      let lhs := mkAppN (mkConst info.name <| info.levelParams.map mkLevelParam) xs
      let type  ← mkForallFVars xs (← mkEq lhs body)
      let value ← mkLambdaFVars xs (← mkEqRefl lhs)
      addDecl <| .thmDecl {
        name, type, value
        levelParams := info.levelParams
      }

def getEqnsFor? (declName : Name) : MetaM (Option (Array Name)) := do
  if (← isRecursiveDefinition declName) then
    return none
  if (← getEnv).contains declName then
    if backward.eqns.nonrecursive.get (← getOptions) then
      mkEqns declName #[]
    else
      let o ← mkSimpleEqThm declName
      return o.map (#[·])
  else
    return none

builtin_initialize
  registerGetEqnsFn getEqnsFor?

end Lean.Elab.Nonrec
