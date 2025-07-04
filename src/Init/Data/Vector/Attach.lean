/-
Copyright (c) 2025 Lean FRO, LLC. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison
-/
module

prelude
import Init.Data.Vector.Lemmas
import all Init.Data.Array.Attach

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.

namespace Vector

/--
`O(n)`. Partial map. If `f : Π a, P a → β` is a partial function defined on
`a : α` satisfying `P`, then `pmap f l h` is essentially the same as `map f l`
but is defined only when all members of `l` satisfy `P`, using the proof
to apply `f`.

We replace this at runtime with a more efficient version via the `csimp` lemma `pmap_eq_pmapImpl`.
-/
@[expose]
def pmap {P : α → Prop} (f : ∀ a, P a → β) (xs : Vector α n) (H : ∀ a ∈ xs, P a) : Vector β n :=
  Vector.mk (xs.toArray.pmap f (fun a m => H a (by simpa using m))) (by simp)

/--
Unsafe implementation of `attachWith`, taking advantage of the fact that the representation of
`Vector {x // P x} n` is the same as the input `Vector α n`.
-/
@[inline] private unsafe def attachWithImpl
    (xs : Vector α n) (P : α → Prop) (_ : ∀ x ∈ xs, P x) : Vector {x // P x} n := unsafeCast xs

/-- `O(1)`. "Attach" a proof `P x` that holds for all the elements of `xs` to produce a new array
  with the same elements but in the type `{x // P x}`. -/
@[implemented_by attachWithImpl, expose] def attachWith
    (xs : Vector α n) (P : α → Prop) (H : ∀ x ∈ xs, P x) : Vector {x // P x} n :=
  Vector.mk (xs.toArray.attachWith P fun x h => H x (by simpa using h)) (by simp)

/-- `O(1)`. "Attach" the proof that the elements of `xs` are in `xs` to produce a new vector
  with the same elements but in the type `{x // x ∈ xs}`. -/
@[inline, expose] def attach (xs : Vector α n) : Vector {x // x ∈ xs} n := xs.attachWith _ fun _ => id

@[simp, grind =] theorem attachWith_mk {xs : Array α} {h : xs.size = n} {P : α → Prop} {H : ∀ x ∈ mk xs h, P x} :
    (mk xs h).attachWith P H = mk (xs.attachWith P (by simpa using H)) (by simpa using h) := by
  simp [attachWith]

@[simp, grind =] theorem attach_mk {xs : Array α} {h : xs.size = n} :
    (mk xs h).attach = mk (xs.attachWith (· ∈ mk xs h) (by simp)) (by simpa using h):= by
  simp [attach]

@[simp, grind =] theorem pmap_mk {xs : Array α} {h : xs.size = n} {P : α → Prop} {f : ∀ a, P a → β}
    {H : ∀ a ∈ mk xs h, P a} :
    (mk xs h).pmap f H = mk (xs.pmap f (by simpa using H)) (by simpa using h) := by
  simp [pmap]

@[simp, grind =] theorem toArray_attachWith {xs : Vector α n} {P : α → Prop} {H : ∀ x ∈ xs, P x} :
   (xs.attachWith P H).toArray = xs.toArray.attachWith P (by simpa using H) := by
  simp [attachWith]

@[simp, grind =] theorem toArray_attach {xs : Vector α n} :
    xs.attach.toArray = xs.toArray.attachWith (· ∈ xs) (by simp) := by
  simp [attach]

@[simp, grind =] theorem toArray_pmap {xs : Vector α n} {P : α → Prop} {f : ∀ a, P a → β} {H : ∀ a ∈ xs, P a} :
    (xs.pmap f H).toArray = xs.toArray.pmap f (fun a m => H a (by simpa using m)) := by
  simp [pmap]

@[simp, grind =] theorem toList_attachWith {xs : Vector α n} {P : α → Prop} {H : ∀ x ∈ xs, P x} :
   (xs.attachWith P H).toList = xs.toList.attachWith P (by simpa using H) := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp, grind =] theorem toList_attach {xs : Vector α n} :
    xs.attach.toList = xs.toList.attachWith (· ∈ xs) (by simp) := by
  simp [attach]

@[simp, grind =] theorem toList_pmap {xs : Vector α n} {P : α → Prop} {f : ∀ a, P a → β} {H : ∀ a ∈ xs, P a} :
    (xs.pmap f H).toList = xs.toList.pmap f (fun a m => H a (by simpa using m)) := by
  rcases xs with ⟨xs, rfl⟩
  simp

/-- Implementation of `pmap` using the zero-copy version of `attach`. -/
@[inline] private def pmapImpl {P : α → Prop} (f : ∀ a, P a → β) (xs : Vector α n) (H : ∀ a ∈ xs, P a) :
    Vector β n := (xs.attachWith _ H).map fun ⟨x, h'⟩ => f x h'

@[csimp] private theorem pmap_eq_pmapImpl : @pmap = @pmapImpl := by
  funext α β n p f xs h'
  rcases xs with ⟨xs, rfl⟩
  simp only [pmap, pmapImpl, attachWith_mk, map_mk, Array.map_attachWith_eq_pmap, eq_mk]
  apply Array.pmap_congr_left
  intro a m h₁ h₂
  congr

@[simp, grind =] theorem pmap_empty {P : α → Prop} {f : ∀ a, P a → β} : pmap f #v[] (by simp) = #v[] := rfl

@[simp, grind =] theorem pmap_push {P : α → Prop} {f : ∀ a, P a → β} {a : α} {xs : Vector α n} {h : ∀ b ∈ xs.push a, P b} :
    pmap f (xs.push a) h =
      (pmap f xs (fun a m => by simp at h; exact h a (.inl m))).push (f a (h a (by simp))) := by
  simp [pmap]

@[simp, grind =] theorem attach_empty : (#v[] : Vector α 0).attach = #v[] := rfl

@[simp, grind =] theorem attachWith_empty {P : α → Prop} (H : ∀ x ∈ #v[], P x) : (#v[] : Vector α 0).attachWith P H = #v[] := rfl

@[simp]
theorem pmap_eq_map {p : α → Prop} {f : α → β} {xs : Vector α n} (H) :
    @pmap _ _ _ p (fun a _ => f a) xs H = map f xs := by
  cases xs; simp

theorem pmap_congr_left {p q : α → Prop} {f : ∀ a, p a → β} {g : ∀ a, q a → β} (xs : Vector α n) {H₁ H₂}
    (h : ∀ a ∈ xs, ∀ (h₁ h₂), f a h₁ = g a h₂) : pmap f xs H₁ = pmap g xs H₂ := by
  rcases xs with ⟨xs, rfl⟩
  simp only [pmap_mk, eq_mk]
  apply Array.pmap_congr_left
  simpa using h

@[grind =]
theorem map_pmap {p : α → Prop} {g : β → γ} {f : ∀ a, p a → β} {xs : Vector α n} (H) :
    map g (pmap f xs H) = pmap (fun a h => g (f a h)) xs H := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.map_pmap]

@[grind =]
theorem pmap_map {p : β → Prop} {g : ∀ b, p b → γ} {f : α → β} {xs : Vector α n} (H) :
    pmap g (map f xs) H = pmap (fun a h => g (f a) h) xs fun _ h => H _ (mem_map_of_mem h) := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.pmap_map]

theorem attach_congr {xs ys : Vector α n} (h : xs = ys) :
    xs.attach = ys.attach.map (fun x => ⟨x.1, h ▸ x.2⟩) := by
  subst h
  simp

theorem attachWith_congr {xs ys : Vector α n} (w : xs = ys) {P : α → Prop} {H : ∀ x ∈ xs, P x} :
    xs.attachWith P H = ys.attachWith P fun _ h => H _ (w ▸ h) := by
  subst w
  simp

@[simp, grind =] theorem attach_push {a : α} {xs : Vector α n} :
    (xs.push a).attach =
      (xs.attach.map (fun ⟨x, h⟩ => ⟨x, mem_push_of_mem a h⟩)).push ⟨a, by simp⟩ := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.map_attach_eq_pmap]

@[simp, grind =] theorem attachWith_push {a : α} {xs : Vector α n} {P : α → Prop} {H : ∀ x ∈ xs.push a, P x} :
    (xs.push a).attachWith P H =
      (xs.attachWith P (fun x h => by simp at H; exact H x (.inl h))).push ⟨a, H a (by simp)⟩ := by
  rcases xs with ⟨xs, rfl⟩
  simp

theorem pmap_eq_map_attach {p : α → Prop} {f : ∀ a, p a → β} {xs : Vector α n} (H) :
    pmap f xs H = xs.attach.map fun x => f x.1 (H _ x.2) := by
  rcases xs with ⟨xs, rfl⟩
  simp only [pmap_mk, Array.pmap_eq_map_attach, attach_mk, map_mk, eq_mk]
  rw [Array.map_attach_eq_pmap, Array.map_attachWith]
  ext i hi₁ hi₂ <;> simp

@[simp]
theorem pmap_eq_attachWith {p q : α → Prop} {f : ∀ a, p a → q a} {xs : Vector α n} (H) :
    pmap (fun a h => ⟨a, f a h⟩) xs H = xs.attachWith q (fun x h => f x (H x h)) := by
  rcases xs with ⟨xs, rfl⟩
  simp

theorem attach_map_val (xs : Vector α n) (f : α → β) :
    (xs.attach.map fun (i : {i // i ∈ xs}) => f i) = xs.map f := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[deprecated attach_map_val (since := "2025-02-17")]
abbrev attach_map_coe := @attach_map_val

-- The argument `xs : Vector α n` is explicit to allow rewriting from right to left.
theorem attach_map_subtype_val (xs : Vector α n) : xs.attach.map Subtype.val = xs := by
  rcases xs with ⟨xs, rfl⟩
  simp

theorem attachWith_map_val {p : α → Prop} {f : α → β} {xs : Vector α n} (H : ∀ a ∈ xs, p a) :
    ((xs.attachWith p H).map fun (i : { i // p i}) => f i) = xs.map f := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[deprecated attachWith_map_val (since := "2025-02-17")]
abbrev attachWith_map_coe := @attachWith_map_val

theorem attachWith_map_subtype_val {p : α → Prop} {xs : Vector α n} (H : ∀ a ∈ xs, p a) :
    (xs.attachWith p H).map Subtype.val = xs := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp, grind]
theorem mem_attach (xs : Vector α n) : ∀ x, x ∈ xs.attach
  | ⟨a, h⟩ => by
    have := mem_map.1 (by rw [attach_map_subtype_val] <;> exact h)
    rcases this with ⟨⟨_, _⟩, m, rfl⟩
    exact m

@[simp, grind]
theorem mem_attachWith {xs : Vector α n} {q : α → Prop} (H) (x : {x // q x}) :
    x ∈ xs.attachWith q H ↔ x.1 ∈ xs := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp, grind =]
theorem mem_pmap {p : α → Prop} {f : ∀ a, p a → β} {xs : Vector α n} {H b} :
    b ∈ pmap f xs H ↔ ∃ (a : _) (h : a ∈ xs), f a (H a h) = b := by
  simp only [pmap_eq_map_attach, mem_map, mem_attach, true_and, Subtype.exists, eq_comm]

@[grind]
theorem mem_pmap_of_mem {p : α → Prop} {f : ∀ a, p a → β} {xs : Vector α n} {H} {a} (h : a ∈ xs) :
    f a (H a h) ∈ pmap f xs H := by
  rw [mem_pmap]
  exact ⟨a, h, rfl⟩

theorem pmap_eq_self {xs : Vector α n} {p : α → Prop} {hp : ∀ (a : α), a ∈ xs → p a}
    {f : (a : α) → p a → α} : xs.pmap f hp = xs ↔ ∀ a (h : a ∈ xs), f a (hp a h) = a := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.pmap_eq_self]

@[simp, grind =]
theorem getElem?_pmap {p : α → Prop} {f : ∀ a, p a → β} {xs : Vector α n} (h : ∀ a ∈ xs, p a) (i : Nat) :
    (pmap f xs h)[i]? = Option.pmap f xs[i]? fun x H => h x (mem_of_getElem? H) := by
  rcases xs with ⟨xs, rfl⟩
  simp

-- The argument `f` is explicit to allow rewriting from right to left.
@[simp, grind =]
theorem getElem_pmap {p : α → Prop} (f : ∀ a, p a → β) {xs : Vector α n} (h : ∀ a ∈ xs, p a) {i : Nat}
    (hn : i < n) :
    (pmap f xs h)[i] = f (xs[i]) (h _ (by simp)) := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp, grind =]
theorem getElem?_attachWith {xs : Vector α n} {i : Nat} {P : α → Prop} {H : ∀ a ∈ xs, P a} :
    (xs.attachWith P H)[i]? = xs[i]?.pmap Subtype.mk (fun _ a => H _ (mem_of_getElem? a)) :=
  getElem?_pmap ..

@[simp, grind =]
theorem getElem?_attach {xs : Vector α n} {i : Nat} :
    xs.attach[i]? = xs[i]?.pmap Subtype.mk (fun _ a => mem_of_getElem? a) :=
  getElem?_attachWith

@[simp, grind =]
theorem getElem_attachWith {xs : Vector α n} {P : α → Prop} {H : ∀ a ∈ xs, P a}
    {i : Nat} (h : i < n) :
    (xs.attachWith P H)[i] = ⟨xs[i]'(by simpa using h), H _ (getElem_mem (by simpa using h))⟩ :=
  getElem_pmap _ _ h

@[simp, grind =]
theorem getElem_attach {xs : Vector α n} {i : Nat} (h : i < n) :
    xs.attach[i] = ⟨xs[i]'(by simpa using h), getElem_mem (by simpa using h)⟩ :=
  getElem_attachWith h

@[simp, grind =] theorem pmap_attach {xs : Vector α n} {p : {x // x ∈ xs} → Prop} {f : ∀ a, p a → β} (H) :
    pmap f xs.attach H =
      xs.pmap (P := fun a => ∃ h : a ∈ xs, p ⟨a, h⟩)
        (fun a h => f ⟨a, h.1⟩ h.2) (fun a h => ⟨h, H ⟨a, h⟩ (by simp)⟩) := by
  rcases xs with ⟨xs, rfl⟩
  ext <;> simp

@[simp, grind =] theorem pmap_attachWith {xs : Vector α n} {p : {x // q x} → Prop} {f : ∀ a, p a → β} (H₁ H₂) :
    pmap f (xs.attachWith q H₁) H₂ =
      xs.pmap (P := fun a => ∃ h : q a, p ⟨a, h⟩)
        (fun a h => f ⟨a, h.1⟩ h.2) (fun a h => ⟨H₁ _ h, H₂ ⟨a, H₁ _ h⟩ (by simpa)⟩) := by
  ext <;> simp

@[grind =]
theorem foldl_pmap {xs : Vector α n} {P : α → Prop} {f : (a : α) → P a → β}
    (H : ∀ (a : α), a ∈ xs → P a) (g : γ → β → γ) (x : γ) :
    (xs.pmap f H).foldl g x = xs.attach.foldl (fun acc a => g acc (f a.1 (H _ a.2))) x := by
  rw [pmap_eq_map_attach, foldl_map]

@[grind =]
theorem foldr_pmap {xs : Vector α n} {P : α → Prop} {f : (a : α) → P a → β}
    (H : ∀ (a : α), a ∈ xs → P a) (g : β → γ → γ) (x : γ) :
    (xs.pmap f H).foldr g x = xs.attach.foldr (fun a acc => g (f a.1 (H _ a.2)) acc) x := by
  rw [pmap_eq_map_attach, foldr_map]

/--
If we fold over `l.attach` with a function that ignores the membership predicate,
we get the same results as folding over `l` directly.

This is useful when we need to use `attach` to show termination.

Unfortunately this can't be applied by `simp` because of the higher order unification problem,
and even when rewriting we need to specify the function explicitly.
See however `foldl_subtype` below.
-/
theorem foldl_attach {xs : Vector α n} {f : β → α → β} {b : β} :
    xs.attach.foldl (fun acc t => f acc t.1) b = xs.foldl f b := by
  rcases xs with ⟨xs, rfl⟩
  simp

/--
If we fold over `l.attach` with a function that ignores the membership predicate,
we get the same results as folding over `l` directly.

This is useful when we need to use `attach` to show termination.

Unfortunately this can't be applied by `simp` because of the higher order unification problem,
and even when rewriting we need to specify the function explicitly.
See however `foldr_subtype` below.
-/
theorem foldr_attach {xs : Vector α n} {f : α → β → β} {b : β} :
    xs.attach.foldr (fun t acc => f t.1 acc) b = xs.foldr f b := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[grind =]
theorem attach_map {xs : Vector α n} {f : α → β} :
    (xs.map f).attach = xs.attach.map (fun ⟨x, h⟩ => ⟨f x, mem_map_of_mem h⟩) := by
  cases xs
  ext <;> simp

@[grind =]
theorem attachWith_map {xs : Vector α n} {f : α → β} {P : β → Prop} (H : ∀ (b : β), b ∈ xs.map f → P b) :
    (xs.map f).attachWith P H = (xs.attachWith (P ∘ f) (fun _ h => H _ (mem_map_of_mem h))).map
      fun ⟨x, h⟩ => ⟨f x, h⟩ := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.attachWith_map]

@[simp, grind =] theorem map_attachWith {xs : Vector α n} {P : α → Prop} {H : ∀ (a : α), a ∈ xs → P a}
    {f : { x // P x } → β} :
    (xs.attachWith P H).map f = xs.attach.map fun ⟨x, h⟩ => f ⟨x, H _ h⟩ := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.map_attachWith]

theorem map_attachWith_eq_pmap {xs : Vector α n} {P : α → Prop} {H : ∀ (a : α), a ∈ xs → P a}
    {f : { x // P x } → β} :
    (xs.attachWith P H).map f =
      xs.pmap (fun a (h : a ∈ xs ∧ P a) => f ⟨a, H _ h.1⟩) (fun a h => ⟨h, H a h⟩) := by
  rcases xs with ⟨xs, rfl⟩
  ext <;> simp

/-- See also `pmap_eq_map_attach` for writing `pmap` in terms of `map` and `attach`. -/
theorem map_attach_eq_pmap {xs : Vector α n} {f : { x // x ∈ xs } → β} :
    xs.attach.map f = xs.pmap (fun a h => f ⟨a, h⟩) (fun _ => id) := by
  rcases xs with ⟨xs, rfl⟩
  ext <;> simp

@[deprecated map_attach_eq_pmap (since := "2025-02-09")]
abbrev map_attach := @map_attach_eq_pmap

@[grind =]
theorem pmap_pmap {p : α → Prop} {q : β → Prop} {g : ∀ a, p a → β} {f : ∀ b, q b → γ} {xs : Vector α n} (H₁ H₂) :
    pmap f (pmap g xs H₁) H₂ =
      pmap (α := { x // x ∈ xs }) (fun a h => f (g a h) (H₂ (g a h) (mem_pmap_of_mem a.2))) xs.attach
        (fun a _ => H₁ a a.2) := by
  rcases xs with ⟨xs, rfl⟩
  ext <;> simp

@[simp, grind =] theorem pmap_append {p : ι → Prop} {f : ∀ a : ι, p a → α} {xs : Vector ι n} {ys : Vector ι m}
    (h : ∀ a ∈ xs ++ ys, p a) :
    (xs ++ ys).pmap f h =
      (xs.pmap f fun a ha => h a (mem_append_left ys ha)) ++
        ys.pmap f fun a ha => h a (mem_append_right xs ha) := by
  cases xs
  cases ys
  simp

theorem pmap_append' {p : α → Prop} {f : ∀ a : α, p a → β} {xs : Vector α n} {ys : Vector α m}
    (h₁ : ∀ a ∈ xs, p a) (h₂ : ∀ a ∈ ys, p a) :
    ((xs ++ ys).pmap f fun a ha => (mem_append.1 ha).elim (h₁ a) (h₂ a)) =
      xs.pmap f h₁ ++ ys.pmap f h₂ :=
  pmap_append _

@[simp, grind =] theorem attach_append {xs : Vector α n} {ys : Vector α m} :
    (xs ++ ys).attach = xs.attach.map (fun ⟨x, h⟩ => (⟨x, mem_append_left ys h⟩ : { x // x ∈ xs ++ ys })) ++
      ys.attach.map (fun ⟨y, h⟩ => (⟨y, mem_append_right xs h⟩ : { y // y ∈ xs ++ ys })) := by
  rcases xs with ⟨xs, rfl⟩
  rcases ys with ⟨ys, rfl⟩
  simp [Array.map_attach_eq_pmap]

@[simp, grind =] theorem attachWith_append {P : α → Prop} {xs : Vector α n} {ys : Vector α m}
    {H : ∀ (a : α), a ∈ xs ++ ys → P a} :
    (xs ++ ys).attachWith P H = xs.attachWith P (fun a h => H a (mem_append_left ys h)) ++
      ys.attachWith P (fun a h => H a (mem_append_right xs h)) := by
  simp [attachWith]

@[simp, grind =] theorem pmap_reverse {P : α → Prop} {f : (a : α) → P a → β} {xs : Vector α n}
    (H : ∀ (a : α), a ∈ xs.reverse → P a) :
    xs.reverse.pmap f H = (xs.pmap f (fun a h => H a (by simpa using h))).reverse := by
  induction xs <;> simp_all

@[grind =]
theorem reverse_pmap {P : α → Prop} {f : (a : α) → P a → β} {xs : Vector α n}
    (H : ∀ (a : α), a ∈ xs → P a) :
    (xs.pmap f H).reverse = xs.reverse.pmap f (fun a h => H a (by simpa using h)) := by
  rw [pmap_reverse]

@[simp, grind =] theorem attachWith_reverse {P : α → Prop} {xs : Vector α n}
    {H : ∀ (a : α), a ∈ xs.reverse → P a} :
    xs.reverse.attachWith P H =
      (xs.attachWith P (fun a h => H a (by simpa using h))).reverse := by
  cases xs
  simp

@[grind =]
theorem reverse_attachWith {P : α → Prop} {xs : Vector α n}
    {H : ∀ (a : α), a ∈ xs → P a} :
    (xs.attachWith P H).reverse = (xs.reverse.attachWith P (fun a h => H a (by simpa using h))) := by
  cases xs
  simp

@[simp, grind =] theorem attach_reverse {xs : Vector α n} :
    xs.reverse.attach = xs.attach.reverse.map fun ⟨x, h⟩ => ⟨x, by simpa using h⟩ := by
  cases xs
  rw [attach_congr (reverse_mk ..)]
  simp [Array.map_attachWith]

@[grind =]
theorem reverse_attach {xs : Vector α n} :
    xs.attach.reverse = xs.reverse.attach.map fun ⟨x, h⟩ => ⟨x, by simpa using h⟩ := by
  cases xs
  simp [Array.map_attach_eq_pmap]

@[simp, grind =] theorem back?_pmap {P : α → Prop} {f : (a : α) → P a → β} {xs : Vector α n}
    (H : ∀ (a : α), a ∈ xs → P a) :
    (xs.pmap f H).back? = xs.attach.back?.map fun ⟨a, m⟩ => f a (H a m) := by
  cases xs
  simp

@[simp, grind =] theorem back?_attachWith {P : α → Prop} {xs : Vector α n}
    {H : ∀ (a : α), a ∈ xs → P a} :
    (xs.attachWith P H).back? = xs.back?.pbind (fun a h => some ⟨a, H _ (mem_of_back? h)⟩) := by
  cases xs
  simp

@[simp, grind =]
theorem back?_attach {xs : Vector α n} :
    xs.attach.back? = xs.back?.pbind fun a h => some ⟨a, mem_of_back? h⟩ := by
  cases xs
  simp

@[simp]
theorem countP_attach {xs : Vector α n} {p : α → Bool} :
    xs.attach.countP (fun a : {x // x ∈ xs} => p a) = xs.countP p := by
  cases xs
  simp

@[simp]
theorem countP_attachWith {p : α → Prop} {q : α → Bool} {xs : Vector α n} {H : ∀ a ∈ xs, p a} :
    (xs.attachWith p H).countP (fun a : {x // p x} => q a) = xs.countP q := by
  cases xs
  simp

@[simp, grind =]
theorem count_attach [BEq α] {xs : Vector α n} {a : {x // x ∈ xs}} :
    xs.attach.count a = xs.count ↑a := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp, grind =]
theorem count_attachWith [BEq α] {p : α → Prop} {xs : Vector α n} (H : ∀ a ∈ xs, p a) {a : {x // p x}} :
    (xs.attachWith p H).count a = xs.count ↑a := by
  cases xs
  simp

@[simp] theorem countP_pmap {p : α → Prop} {g : ∀ a, p a → β} {f : β → Bool} {xs : Vector α n} (H₁) :
    (xs.pmap g H₁).countP f =
      xs.attach.countP (fun ⟨a, m⟩ => f (g a (H₁ a m))) := by
  rcases xs with ⟨xs, rfl⟩
  simp only [pmap_mk, countP_mk, Array.countP_pmap]
  simp [Array.countP_eq_size_filter]

/-! ## unattach

`Vector.unattach` is the (one-sided) inverse of `Vector.attach`. It is a synonym for `Vector.map Subtype.val`.

We use it by providing a simp lemma `xs.attach.unattach = xs`, and simp lemmas which recognize higher order
functions applied to `xs : Vector { x // p x }` which only depend on the value, not the predicate, and rewrite these
in terms of a simpler function applied to `xs.unattach`.

Further, we provide simp lemmas that push `unattach` inwards.
-/

/--
A synonym for `xs.map (·.val)`. Mostly this should not be needed by users.
It is introduced as in intermediate step by lemmas such as `map_subtype`,
and is ideally subsequently simplified away by `unattach_attach`.

If not, usually the right approach is `simp [Vector.unattach, -Vector.map_subtype]` to unfold.
-/
def unattach {α : Type _} {p : α → Prop} (xs : Vector { x // p x } n) : Vector α n := xs.map (·.val)

theorem unattach_empty {p : α → Prop} : (#v[] : Vector { x // p x } 0).unattach = #v[] := by simp

@[deprecated unattach_empty (since := "2025-05-26")]
abbrev unattach_nil := @unattach_empty

@[simp] theorem unattach_push {p : α → Prop} {a : { x // p x }} {xs : Vector { x // p x } n} :
    (xs.push a).unattach = xs.unattach.push a.1 := by
  simp only [unattach, Vector.map_push]

@[simp] theorem mem_unattach {p : α → Prop} {xs : Vector { x // p x } n} {a} :
    a ∈ xs.unattach ↔ ∃ h : p a, ⟨a, h⟩ ∈ xs := by
  simp only [unattach, mem_map, Subtype.exists, exists_and_right, exists_eq_right]

@[simp] theorem unattach_mk {p : α → Prop} {xs : Array { x // p x }} {h : xs.size = n} :
    (mk xs h).unattach = mk xs.unattach (by simpa using h) := by
  simp [unattach]

@[simp] theorem toArray_unattach {p : α → Prop} {xs : Vector { x // p x } n} :
    xs.unattach.toArray = xs.toArray.unattach := by
  simp [unattach]

@[simp] theorem toList_unattach {p : α → Prop} {xs : Vector { x // p x } n} :
    xs.unattach.toList = xs.toList.unattach := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp] theorem unattach_attach {xs : Vector α n} : xs.attach.unattach = xs := by
  rcases xs with ⟨xs, rfl⟩
  simp

@[simp] theorem unattach_attachWith {p : α → Prop} {xs : Vector α n}
    {H : ∀ a ∈ xs, p a} :
    (xs.attachWith p H).unattach = xs := by
  cases xs
  simp

@[simp] theorem getElem?_unattach {p : α → Prop} {xs : Vector { x // p x } n} (i : Nat) :
    xs.unattach[i]? = xs[i]?.map Subtype.val := by
  simp [unattach]

@[simp] theorem getElem_unattach
    {p : α → Prop} {xs : Vector { x // p x } n} (i : Nat) (h : i < n) :
    xs.unattach[i] = (xs[i]'(by simpa using h)).1 := by
  simp [unattach]

/-! ### Recognizing higher order functions using a function that only depends on the value. -/

/--
This lemma identifies folds over arrays of subtypes, where the function only depends on the value, not the proposition,
and simplifies these to the function directly taking the value.
-/
@[simp] theorem foldl_subtype {p : α → Prop} {xs : Vector { x // p x } n}
    {f : β → { x // p x } → β} {g : β → α → β} {x : β}
    (hf : ∀ b x h, f b ⟨x, h⟩ = g b x) :
    xs.foldl f x = xs.unattach.foldl g x := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.foldl_subtype hf]

/--
This lemma identifies folds over arrays of subtypes, where the function only depends on the value, not the proposition,
and simplifies these to the function directly taking the value.
-/
@[simp] theorem foldr_subtype {p : α → Prop} {xs : Vector { x // p x } n}
    {f : { x // p x } → β → β} {g : α → β → β} {x : β}
    (hf : ∀ x h b, f ⟨x, h⟩ b = g x b) :
    xs.foldr f x = xs.unattach.foldr g x := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.foldr_subtype hf]

/--
This lemma identifies maps over arrays of subtypes, where the function only depends on the value, not the proposition,
and simplifies these to the function directly taking the value.
-/
@[simp] theorem map_subtype {p : α → Prop} {xs : Vector { x // p x } n}
    {f : { x // p x } → β} {g : α → β} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.map f = xs.unattach.map g := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.map_subtype hf]

@[simp] theorem findSome?_subtype {p : α → Prop} {xs : Vector { x // p x } n}
    {f : { x // p x } → Option β} {g : α → Option β} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.findSome? f = xs.unattach.findSome? g := by
  rcases xs with ⟨xs, rfl⟩
  simp
  rw [Array.findSome?_subtype hf]

@[simp] theorem find?_subtype {p : α → Prop} {xs : Array { x // p x }}
    {f : { x // p x } → Bool} {g : α → Bool} (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    (xs.find? f).map Subtype.val = xs.unattach.find? g := by
  rcases xs with ⟨l, rfl⟩
  simp
  rw [Array.find?_subtype hf]

@[simp] theorem all_subtype {p : α → Prop} {xs : Vector { x // p x } n} {f : { x // p x } → Bool} {g : α → Bool}
    (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.all f = xs.unattach.all g := by
  rcases xs with ⟨xs, rfl⟩
  simp [hf]

@[simp] theorem any_subtype {p : α → Prop} {xs : Vector { x // p x } n} {f : { x // p x } → Bool} {g : α → Bool}
    (hf : ∀ x h, f ⟨x, h⟩ = g x) :
    xs.any f = xs.unattach.any g := by
  rcases xs with ⟨xs, rfl⟩
  simp [hf]

/-! ### Simp lemmas pushing `unattach` inwards. -/

@[simp] theorem unattach_reverse {p : α → Prop} {xs : Vector { x // p x } n} :
    xs.reverse.unattach = xs.unattach.reverse := by
  rcases xs with ⟨xs, rfl⟩
  simp [Array.unattach_reverse]


@[simp] theorem unattach_append {p : α → Prop} {xs ys : Vector { x // p x } n} :
    (xs ++ ys).unattach = xs.unattach ++ ys.unattach := by
  rcases xs
  rcases ys
  simp

@[simp] theorem unattach_flatten {p : α → Prop} {xss : Vector (Vector { x // p x } n) n} :
    xss.flatten.unattach = (xss.map unattach).flatten := by
  unfold unattach
  cases xss using vector₂_induction
  simp only [flatten_mk, Array.map_map, Function.comp_apply, Array.map_subtype,
    Array.unattach_attach, Array.map_id_fun', id_eq, map_mk, Array.map_flatten, map_subtype,
    map_id_fun', unattach_mk, eq_mk]
  unfold Array.unattach
  rfl

@[simp] theorem unattach_replicate {p : α → Prop} {n : Nat} {x : { x // p x }} :
    (replicate n x).unattach = replicate n x.1 := by
  simp [unattach]

@[deprecated unattach_replicate (since := "2025-03-18")]
abbrev unattach_mkVector := @unattach_replicate

end Vector
