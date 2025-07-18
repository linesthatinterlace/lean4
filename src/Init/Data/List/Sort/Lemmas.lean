/-
Copyright (c) 2024 Lean FRO. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.
Authors: Kim Morrison, Eric Wieser, François G. Dorais
-/
module

prelude
import Init.Data.List.Perm
import all Init.Data.List.Sort.Basic
import Init.Data.List.Nat.Range
import Init.Data.Bool

/-!
# Basic properties of `mergeSort`.

* `sorted_mergeSort`: `mergeSort` produces a sorted list.
* `mergeSort_perm`: `mergeSort` is a permutation of the input list.
* `mergeSort_of_sorted`: `mergeSort` does not change a sorted list.
* `mergeSort_cons`: proves `mergeSort le (x :: xs) = l₁ ++ x :: l₂` for some `l₁, l₂`
  so that `mergeSort le xs = l₁ ++ l₂`, and no `a ∈ l₁` satisfies `le a x`.
* `sublist_mergeSort`: if `c` is a sorted sublist of `l`, then `c` is still a sublist of `mergeSort le l`.

-/

set_option linter.listVariables true -- Enforce naming conventions for `List`/`Array`/`Vector` variables.
set_option linter.indexVariables true -- Enforce naming conventions for index variables.

namespace List

/-! ### splitInTwo -/

namespace MergeSort.Internal

@[simp] theorem splitInTwo_fst (l : { l : List α // l.length = n }) :
    (splitInTwo l).1 = ⟨l.1.take ((n+1)/2), by simp [l.2]; omega⟩ := by
  simp [splitInTwo, splitAt_eq]

@[simp] theorem splitInTwo_snd (l : { l : List α // l.length = n }) :
    (splitInTwo l).2 = ⟨l.1.drop ((n+1)/2), by simp [l.2]; omega⟩ := by
  simp [splitInTwo, splitAt_eq]

theorem splitInTwo_fst_append_splitInTwo_snd (l : { l : List α // l.length = n }) : (splitInTwo l).1.1 ++ (splitInTwo l).2.1 = l.1 := by
  simp

theorem splitInTwo_cons_cons_zipIdx_fst (i : Nat) (l : List α) :
    (splitInTwo ⟨(a, i) :: (b, i+1) :: l.zipIdx (i+2), rfl⟩).1.1 =
      (splitInTwo ⟨a :: b :: l, rfl⟩).1.1.zipIdx i := by
  simp only [length_cons, splitInTwo_fst, length_zipIdx]
  ext1 j
  rw [getElem?_take, getElem?_zipIdx, getElem?_take]
  split
  · rw [getElem?_cons, getElem?_cons, getElem?_cons, getElem?_cons]
    split
    · simp; omega
    · split
      · simp; omega
      · simp only [getElem?_zipIdx]
        congr
        ext <;> simp; omega
  · simp

theorem splitInTwo_cons_cons_zipIdx_snd (i : Nat) (l : List α) :
    (splitInTwo ⟨(a, i) :: (b, i+1) :: l.zipIdx (i+2), rfl⟩).2.1 =
      (splitInTwo ⟨a :: b :: l, rfl⟩).2.1.zipIdx (i+(l.length+3)/2) := by
  simp only [length_cons, splitInTwo_snd, length_zipIdx]
  ext1 j
  rw [getElem?_drop, getElem?_zipIdx, getElem?_drop]
  rw [getElem?_cons, getElem?_cons, getElem?_cons, getElem?_cons]
  split
  · simp; omega
  · split
    · simp; omega
    · simp only [getElem?_zipIdx]
      congr
      ext <;> simp; omega

theorem splitInTwo_fst_sorted (l : { l : List α // l.length = n }) (h : Pairwise le l.1) : Pairwise le (splitInTwo l).1.1 := by
  rw [splitInTwo_fst]
  exact h.take

theorem splitInTwo_snd_sorted (l : { l : List α // l.length = n }) (h : Pairwise le l.1) : Pairwise le (splitInTwo l).2.1 := by
  rw [splitInTwo_snd]
  exact h.drop

theorem splitInTwo_fst_le_splitInTwo_snd {l : { l : List α // l.length = n }} (h : Pairwise le l.1) :
    ∀ a b, a ∈ (splitInTwo l).1.1 → b ∈ (splitInTwo l).2.1 → le a b := by
  rw [splitInTwo_fst, splitInTwo_snd]
  intro a b ma mb
  exact h.rel_of_mem_take_of_mem_drop ma mb

end MergeSort.Internal

open MergeSort.Internal

/-! ### zipIdxLE -/

variable {le : α → α → Bool}

theorem zipIdxLE_trans (trans : ∀ a b c, le a b → le b c → le a c)
    (a b c : α × Nat) : zipIdxLE le a b → zipIdxLE le b c → zipIdxLE le a c := by
  simp only [zipIdxLE]
  split <;> split <;> split <;> rename_i ab₂ ba₂ bc₂
  · simp_all
    intro ab₁
    intro h
    refine ⟨trans _ _ _ ab₂ bc₂, ?_⟩
    rcases h with (cd₂ | bc₁)
    · exact Or.inl (Decidable.byContradiction
        (fun ca₂ => by simp_all [trans _ _ _ (by simpa using ca₂) ab₂]))
    · exact Or.inr (Nat.le_trans ab₁ bc₁)
  · simp_all
  · simp_all
    intro h
    refine ⟨trans _ _ _ ab₂ bc₂, ?_⟩
    left
    rcases h with (cb₂ | _)
    · exact (Decidable.byContradiction
        (fun ca₂ => by simp_all [trans _ _ _ (by simpa using ca₂) ab₂]))
    · exact (Decidable.byContradiction
        (fun ca₂ => by simp_all [trans _ _ _ bc₂ (by simpa using ca₂)]))
  · simp_all
  · simp_all
  · simp_all
  · simp_all
  · simp_all

theorem zipIdxLE_total (total : ∀ a b, le a b || le b a)
    (a b : α × Nat) : zipIdxLE le a b || zipIdxLE le b a := by
  simp only [zipIdxLE]
  split <;> split
  · simpa using Nat.le_total a.2 b.2
  · simp
  · simp
  · have := total a.1 b.1
    simp_all

/-! ### merge -/

theorem cons_merge_cons (s : α → α → Bool) (a b l r) :
    merge (a::l) (b::r) s = if s a b then a :: merge l (b::r) s else b :: merge (a::l) r s := by
  simp only [merge]

@[simp] theorem cons_merge_cons_pos (s : α → α → Bool) (l r) (h : s a b) :
    merge (a::l) (b::r) s = a :: merge l (b::r) s := by
  rw [cons_merge_cons, if_pos h]

@[simp] theorem cons_merge_cons_neg (s : α → α → Bool) (l r) (h : ¬ s a b) :
    merge (a::l) (b::r) s = b :: merge (a::l) r s := by
  rw [cons_merge_cons, if_neg h]

@[simp] theorem length_merge (s : α → α → Bool) (l r) :
    (merge l r s).length = l.length + r.length := by
  match l, r with
  | [], r => simp
  | l, [] => simp
  | a::l, b::r =>
    rw [cons_merge_cons]
    split
    · simp +arith [length_merge s l (b::r)]
    · simp +arith [length_merge s (a::l) r]

/--
The elements of `merge le xs ys` are exactly the elements of `xs` and `ys`.
-/
-- We subsequently prove that `mergeSort_perm : merge le xs ys ~ xs ++ ys`.
theorem mem_merge {a : α} {xs ys : List α} : a ∈ merge xs ys le ↔ a ∈ xs ∨ a ∈ ys := by
  induction xs generalizing ys with
  | nil => simp
  | cons x xs ih =>
    induction ys with
    | nil => simp
    | cons y ys ih =>
      simp only [merge]
      split <;> rename_i h
      · simp_all [or_assoc]
      · simp only [mem_cons, ih, ← or_assoc]
        apply or_congr_left
        simp only [or_comm (a := a = y), or_assoc]

theorem mem_merge_left (s : α → α → Bool) (h : x ∈ l) : x ∈ merge l r s :=
  mem_merge.2 <| .inl h

theorem mem_merge_right (s : α → α → Bool) (h : x ∈ r) : x ∈ merge l r s :=
  mem_merge.2 <| .inr h

theorem merge_stable : ∀ (xs ys) (_ : ∀ x y, x ∈ xs → y ∈ ys → x.2 ≤ y.2),
    (merge xs ys (zipIdxLE le)).map (·.1) = merge (xs.map (·.1)) (ys.map (·.1)) le
  | [], ys, _ => by simp
  | xs, [], _ => by simp
  | (i, x) :: xs, (j, y) :: ys, h => by
    simp only [merge, zipIdxLE, map_cons]
    split <;> rename_i w
    · rw [if_pos (by simp [h _ _ (mem_cons_self ..) (mem_cons_self ..)])]
      simp only [map_cons, cons.injEq, true_and]
      rw [merge_stable, map_cons]
      exact fun x' y' mx my => h x' y' (mem_cons_of_mem (i, x) mx) my
    · simp only [↓reduceIte, map_cons, cons.injEq, true_and, reduceCtorEq]
      rw [merge_stable, map_cons]
      exact fun x' y' mx my => h x' y' mx (mem_cons_of_mem (j, y) my)

-- We enable this instance locally so we can write `Pairwise le` instead of `Pairwise (le · ·)` everywhere.
attribute [local instance] boolRelToRel

/--
If the ordering relation `le` is transitive and total (i.e. `le a b || le b a` for all `a, b`)
then the `merge` of two sorted lists is sorted.
-/
theorem sorted_merge
    (trans : ∀ (a b c : α), le a b → le b c → le a c)
    (total : ∀ (a b : α), le a b || le b a)
    (l₁ l₂ : List α) (h₁ : l₁.Pairwise le) (h₂ : l₂.Pairwise le) : (merge l₁ l₂ le).Pairwise le := by
  induction l₁ generalizing l₂ with
  | nil => simpa only [merge]
  | cons x l₁ ih₁ =>
    induction l₂ with
    | nil => simpa only [merge]
    | cons y l₂ ih₂ =>
      simp only [merge]
      split <;> rename_i h
      · apply Pairwise.cons
        · intro z m
          rw [mem_merge, mem_cons] at m
          rcases m with (m|rfl|m)
          · exact rel_of_pairwise_cons h₁ m
          · exact h
          · exact trans _ _ _ h (rel_of_pairwise_cons h₂ m)
        · exact ih₁ _ h₁.tail h₂
      · apply Pairwise.cons
        · intro z m
          rw [mem_merge, mem_cons] at m
          simp only [Bool.not_eq_true] at h
          rcases m with (⟨rfl|m⟩|m)
          · simpa [h] using total y z
          · exact trans _ _ _ (by simpa [h] using total x y) (rel_of_pairwise_cons h₁ m)
          · exact rel_of_pairwise_cons h₂ m
        · exact ih₂ h₂.tail

theorem merge_of_le : ∀ {xs ys : List α} (_ : ∀ a b, a ∈ xs → b ∈ ys → le a b),
    merge xs ys le = xs ++ ys
  | [], ys, _
  | xs, [], _ => by simp
  | x :: xs, y :: ys, h => by
    simp only [merge, cons_append]
    rw [if_pos, merge_of_le]
    · intro a b ma mb
      exact h a b (mem_cons_of_mem _ ma) mb
    · exact h x y mem_cons_self mem_cons_self

variable (le) in
theorem merge_perm_append : ∀ {xs ys : List α}, merge xs ys le ~ xs ++ ys
  | [], ys => by simp
  | xs, [] => by simp
  | x :: xs, y :: ys => by
    simp only [merge]
    split
    · exact merge_perm_append.cons x
    · exact (merge_perm_append.cons y).trans
        ((Perm.swap x y _).trans (perm_middle.symm.cons x))

theorem Perm.merge (s₁ s₂ : α → α → Bool) (hl : l₁ ~ l₂) (hr : r₁ ~ r₂) :
    merge l₁ r₁ s₁ ~ merge l₂ r₂ s₂ :=
  Perm.trans (merge_perm_append ..) <| Perm.trans (Perm.append hl hr) <| Perm.symm (merge_perm_append ..)

/-! ### mergeSort -/

@[simp] theorem mergeSort_nil : [].mergeSort r = [] := by rw [List.mergeSort]

@[simp] theorem mergeSort_singleton (a : α) : [a].mergeSort r = [a] := by rw [List.mergeSort]

theorem mergeSort_perm : ∀ (l : List α) (le), mergeSort l le ~ l
  | [], _ => by simp
  | [a], _ => by simp
  | a :: b :: xs, le => by
    simp only [mergeSort]
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).1.1.length < xs.length + 1 + 1 := by simp [splitInTwo_fst]; omega
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).2.1.length < xs.length + 1 + 1 := by simp [splitInTwo_snd]; omega
    exact (merge_perm_append le).trans
      (((mergeSort_perm _ _).append (mergeSort_perm _ _)).trans
        (Perm.of_eq (splitInTwo_fst_append_splitInTwo_snd _)))
termination_by l => l.length

@[simp] theorem length_mergeSort (l : List α) : (mergeSort l le).length = l.length :=
  (mergeSort_perm l le).length_eq

@[simp] theorem mem_mergeSort {a : α} {l : List α} : a ∈ mergeSort l le ↔ a ∈ l :=
  (mergeSort_perm l le).mem_iff

/--
The result of `mergeSort` is sorted,
as long as the comparison function is transitive (`le a b → le b c → le a c`)
and total in the sense that `le a b || le b a`.

The comparison function need not be irreflexive, i.e. `le a b` and `le b a` is allowed even when `a ≠ b`.
-/
theorem sorted_mergeSort
    (trans : ∀ (a b c : α), le a b → le b c → le a c)
    (total : ∀ (a b : α), le a b || le b a) :
    (l : List α) → (mergeSort l le).Pairwise le
  | [] => by simp
  | [a] => by simp
  | a :: b :: xs => by
    rw [mergeSort]
    apply sorted_merge @trans @total
    apply sorted_mergeSort trans total
    apply sorted_mergeSort trans total
termination_by l => l.length

/--
If the input list is already sorted, then `mergeSort` does not change the list.
-/
theorem mergeSort_of_sorted : ∀ {l : List α} (_ : Pairwise le l), mergeSort l le = l
  | [], _ => by simp
  | [a], _ => by simp
  | a :: b :: xs, h => by
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).1.1.length < xs.length + 1 + 1 := by simp [splitInTwo_fst]; omega
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).2.1.length < xs.length + 1 + 1 := by simp [splitInTwo_snd]; omega
    rw [mergeSort]
    rw [mergeSort_of_sorted (splitInTwo_fst_sorted ⟨a :: b :: xs, rfl⟩ h)]
    rw [mergeSort_of_sorted (splitInTwo_snd_sorted ⟨a :: b :: xs, rfl⟩ h)]
    rw [merge_of_le (splitInTwo_fst_le_splitInTwo_snd h)]
    rw [splitInTwo_fst_append_splitInTwo_snd]
termination_by l => l.length

/--
This merge sort algorithm is stable,
in the sense that breaking ties in the ordering function using the position in the list
has no effect on the output.

That is, elements which are equal with respect to the ordering function will remain
in the same order in the output list as they were in the input list.

See also:
* `sublist_mergeSort`: if `c <+ l` and `c.Pairwise le`, then `c <+ mergeSort le l`.
* `pair_sublist_mergeSort`: if `[a, b] <+ l` and `le a b`, then `[a, b] <+ mergeSort le l`)
-/
theorem mergeSort_zipIdx {l : List α} :
    (mergeSort (l.zipIdx) (zipIdxLE le)).map (·.1) = mergeSort l le :=
  go 0 l
where go : ∀ (i : Nat) (l : List α),
    (mergeSort (l.zipIdx i) (zipIdxLE le)).map (·.1) = mergeSort l le
  | _, []
  | _, [a] => by simp
  | _, a :: b :: xs => by
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).1.1.length < xs.length + 1 + 1 := by simp [splitInTwo_fst]; omega
    have : (splitInTwo ⟨a :: b :: xs, rfl⟩).2.1.length < xs.length + 1 + 1 := by simp [splitInTwo_snd]; omega
    simp only [mergeSort, zipIdx]
    rw [splitInTwo_cons_cons_zipIdx_fst]
    rw [splitInTwo_cons_cons_zipIdx_snd]
    rw [merge_stable]
    · rw [go, go]
    · simp only [mem_mergeSort, Prod.forall]
      intros j x k y mx my
      have := mem_zipIdx mx
      have := mem_zipIdx my
      simp_all
      omega
termination_by _ l => l.length

@[deprecated mergeSort_zipIdx (since := "2025-01-21")] abbrev mergeSort_enum := @mergeSort_zipIdx

theorem mergeSort_cons {le : α → α → Bool}
    (trans : ∀ (a b c : α), le a b → le b c → le a c)
    (total : ∀ (a b : α), le a b || le b a)
    (a : α) (l : List α) :
    ∃ l₁ l₂, mergeSort (a :: l) le = l₁ ++ a :: l₂ ∧ mergeSort l le = l₁ ++ l₂ ∧
      ∀ b, b ∈ l₁ → !le a b := by
  rw [← mergeSort_zipIdx]
  rw [zipIdx_cons]
  have nd : Nodup ((a :: l).zipIdx.map (·.2)) := by rw [zipIdx_map_snd]; exact nodup_range' _
  have m₁ : (a, 0) ∈ mergeSort ((a :: l).zipIdx) (zipIdxLE le) :=
    mem_mergeSort.mpr mem_cons_self
  obtain ⟨l₁, l₂, h⟩ := append_of_mem m₁
  have s := sorted_mergeSort (zipIdxLE_trans trans) (zipIdxLE_total total) ((a :: l).zipIdx)
  rw [h] at s
  have p := mergeSort_perm ((a :: l).zipIdx) (zipIdxLE le)
  rw [h] at p
  refine ⟨l₁.map (·.1), l₂.map (·.1), ?_, ?_, ?_⟩
  · simpa using congrArg (·.map (·.1)) h
  · rw [← mergeSort_zipIdx.go 1, ← map_append]
    congr 1
    have q : mergeSort (l.zipIdx 1) (zipIdxLE le) ~ l₁ ++ l₂ :=
      (mergeSort_perm (l.zipIdx 1) (zipIdxLE le)).trans
        (p.symm.trans perm_middle).cons_inv
    apply Perm.eq_of_sorted (le := zipIdxLE le)
    · rintro ⟨a, i⟩ ⟨b, j⟩  ha hb
      simp only [mem_mergeSort] at ha
      simp only [← q.mem_iff, mem_mergeSort] at hb
      simp only [zipIdxLE]
      simp only [Bool.if_false_right, Bool.and_eq_true, Prod.mk.injEq, and_imp]
      intro ab h ba h'
      simp only [Bool.decide_eq_true] at ba
      replace h : i ≤ j := by simpa [ab, ba] using h
      replace h' : j ≤ i := by simpa [ab, ba] using h'
      cases Nat.le_antisymm h h'
      constructor
      · have := mem_zipIdx ha
        have := mem_zipIdx hb
        simp_all
      · rfl
    · exact sorted_mergeSort (zipIdxLE_trans trans) (zipIdxLE_total total) ..
    · exact s.sublist ((sublist_cons_self (a, 0) l₂).append_left l₁)
    · exact q
  · intro b m
    simp only [mem_map, Prod.exists] at m
    obtain ⟨j, _, m, rfl⟩ := m
    replace p := p.map (·.2)
    have nd' := nd.perm p.symm
    rw [map_append] at nd'
    have j0 := nd'.rel_of_mem_append
      (mem_map_of_mem m) (mem_map_of_mem mem_cons_self)
    simp only [ne_eq] at j0
    have r := s.rel_of_mem_append m mem_cons_self
    simp_all [zipIdxLE]

/--
Another statement of stability of merge sort.
If `c` is a sorted sublist of `l`,
then `c` is still a sublist of `mergeSort le l`.
-/
theorem sublist_mergeSort
    (trans : ∀ (a b c : α), le a b → le b c → le a c)
    (total : ∀ (a b : α), le a b || le b a) :
    ∀ {ys : List α} (_ : ys.Pairwise le) (_ : ys <+ xs),
    ys <+ mergeSort xs le
  | _, _, .slnil => nil_sublist _
  | ys, hc, @Sublist.cons _ _ l a h => by
    obtain ⟨l₁, l₂, h₁, h₂, -⟩ := mergeSort_cons trans total a l
    rw [h₁]
    have h' := sublist_mergeSort trans total hc h
    rw [h₂] at h'
    exact h'.middle a
  | _, _, @Sublist.cons₂ _ l₁ l₂ a h => by
    rename_i hc
    obtain ⟨l₃, l₄, h₁, h₂, h₃⟩ := mergeSort_cons trans total a l₂
    rw [h₁]
    have h' := sublist_mergeSort trans total hc.tail h
    rw [h₂] at h'
    simp only [Bool.not_eq_true', tail_cons] at h₃ h'
    exact
      sublist_append_of_sublist_right (Sublist.cons₂ a
        ((fun w => Sublist.of_sublist_append_right w h') fun b m₁ m₃ =>
          (Bool.eq_not_self true).mp ((rel_of_pairwise_cons hc m₁).symm.trans (h₃ b m₃))))

/--
Another statement of stability of merge sort.
If a pair `[a, b]` is a sublist of `l` and `le a b`,
then `[a, b]` is still a sublist of `mergeSort le l`.
-/
theorem pair_sublist_mergeSort
    (trans : ∀ (a b c : α), le a b → le b c → le a c)
    (total : ∀ (a b : α), le a b || le b a)
    (hab : le a b) (h : [a, b] <+ l) : [a, b] <+ mergeSort l le :=
  sublist_mergeSort trans total (pairwise_pair.mpr hab) h

theorem map_merge {f : α → β} {r : α → α → Bool} {s : β → β → Bool} {l l' : List α}
    (hl : ∀ a ∈ l, ∀ b ∈ l', r a b = s (f a) (f b)) :
    (l.merge l' r).map f = (l.map f).merge (l'.map f) s := by
  match l, l' with
  | [], _ => simp
  | _, [] => simp
  | _ :: _, _ :: _ =>
    simp only [List.forall_mem_cons] at hl
    simp only [forall_and] at hl
    simp only [List.map, List.cons_merge_cons]
    rw [← hl.1.1]
    split
    · rw [List.map, map_merge, List.map]
      simp only [List.forall_mem_cons, forall_and]
      exact ⟨hl.2.1, hl.2.2⟩
    · rw [List.map, map_merge, List.map]
      simp only [List.forall_mem_cons]
      exact ⟨hl.1.2, hl.2.2⟩

theorem map_mergeSort {r : α → α → Bool} {s : β → β → Bool} {f : α → β} {l : List α}
    (hl : ∀ a ∈ l, ∀ b ∈ l, r a b = s (f a) (f b)) :
    (l.mergeSort r).map f = (l.map f).mergeSort s :=
  match l with
  | [] => by simp
  | [x] => by simp
  | a :: b :: l => by
    simp only [mergeSort, splitInTwo_fst, splitInTwo_snd, map_cons]
    rw [map_merge (fun a am b bm => hl a (mem_of_mem_take (by simpa using am))
      b (mem_of_mem_drop (by simpa using bm)))]
    rw [map_mergeSort (s := s) (fun a am b bm => hl a (mem_of_mem_take (by simpa using am))
      b (mem_of_mem_take (by simpa using bm)))]
    rw [map_mergeSort (s := s) (fun a am b bm => hl a (mem_of_mem_drop (by simpa using am))
      b (mem_of_mem_drop (by simpa using bm)))]
    rw [map_take, map_drop]
    simp
  termination_by length l
