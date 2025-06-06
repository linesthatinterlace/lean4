import Std.Data.HashMap
import Init.Grind

set_option grind.warning false

open Std

structure Clause where
  clause : List (Unit × Bool)
  nodup : List.Nodup clause

namespace Clause

def folder (acc : Option (Std.HashMap Unit Bool)) (l : Unit) :
      Option (Std.HashMap Unit Bool) := sorry

example (ls : Array Unit) : Option Clause :=
  ls.foldl folder (some ∅) |>.map fun map =>
    have mapnodup := map.distinct_keys
    ⟨map.toList, by grind⟩

example (ls : Array Unit) : Option Clause :=
  ls.foldl folder (some ∅) |>.map fun map =>
    -- The following example is still failing, but
    -- we don't get the unknown metavar bug anymore
    ⟨map.toList, by grind⟩
