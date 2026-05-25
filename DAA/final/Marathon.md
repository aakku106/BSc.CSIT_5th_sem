# Design and Analysis of Algorithms (DAA) — 1‑Day Marathon Plan (Target 30+)

This plan is based on repetition across **2076, 2078–2081 + Model** (6 sets total). Frequency is interpreted as “topic appears in x out of 6 sets”.

## Assumptions

- You are starting from zero (no prior knowledge).
- You have only one day to prepare.
- Goal: **30+ marks** (pass-first, then safer buffer).

## What to optimize for (exam reality)

- **Group A (long):** attempt any **2 out of 3** (≈10 marks each)
- **Group B (short):** attempt any **8 out of 12** (≈5 marks each)

A practical “30+” approach:

- Lock **2 reliable long answers** (≈20 marks), and
- Have at least **10 short answers ready**, so you can choose the best 8.

---

## 1) Highest‑yield units (do in this order)

Ranked using repetition + how often the unit appears as a **Group A option**:

1. **Unit 5 — Dynamic Programming** (overall 6/6; long 5/6)
2. **Unit 3 — Divide & Conquer (Quick sort / selection / heap)** (overall 4/6; long 4/6)
3. **Unit 6 — Backtracking** (overall 6/6; long 3/6)
4. **Unit 1 — Recurrences + asymptotic analysis** (overall 6/6)
5. **Unit 8 — NP Completeness + approximation** (overall 6/6)
6. **Unit 4 — Greedy algorithms** (overall 6/6)
7. **Unit 2 — Iterative algorithms (basic sorts, GCD/Fibo)** (support)
8. **Unit 7 — Number theory (Euclid/CRT/Miller–Rabin)** (support)

---

## 2) The “must cover” topics (based on repeats)

### P1 Core (non‑negotiable in 1 day)

- **Recurrences + solving methods** (overall **6/6**; short **5/6**)
  - Master theorem cases + substitution proof format + recursion tree idea
- **Dynamic Programming fundamentals** (overall **6/6**; long **5/6**)
  - DP elements, DP vs greedy vs memoization, and at least 1 full DP problem
- **Backtracking fundamentals** (overall **6/6**; short **5/6**)
  - recursion vs backtracking, pruning, subset sum template
- **Greedy strategy basics** (overall **6/6**; short **5/6**)
  - greedy-choice property + optimal substructure + one worked greedy application
- **NP completeness basics** (overall **6/6**; short **5/6**)
  - P/NP/NP-hard/NP-complete relationships + examples

### P2 High (do after P1)

- **Randomized quick sort + tracing + complexity** (overall **4/6**; long **4/6**)
- **Heap/heapify/heap sort** (overall **3/6**; long **2/6**)
- **MST (Kruskal/Prim)** (short **3/6**)
- **Vertex cover + 2‑approx algorithm** (short **3/6**)
- **Reductions/Cook/SAT proof-style** (short **3/6**)

### P3 Support (only if time remains)

- **Huffman coding** (2/6)
- **Job sequencing with deadlines** (2/6)
- **Euclid/CRT** (2/6)

---

## 3) Most likely questions you should practice (from repeats)

### Group A — long questions you should be ready for

Prepare at least **3** long-question patterns so you can confidently pick **2**:

1. **Dynamic Programming long** (5/6)
   - Refs: 2078-A3, 2079-A2, 2080-A2, 2081-A1, Model-A1
   - Prepare: DP elements + how to build DP table + complexity
   - Must be able to solve at least one: **Matrix chain** or **LCS** or **Edit distance**

2. **Divide & Conquer / Randomized Quick sort long** (4/6)
   - Refs: 2076-A2, 2078-A2, 2079-A1, 2081-A2
   - Prepare: randomized quicksort + partition + best/avg/worst complexity

3. **Backtracking long** (3/6)
   - Refs: 2076-A3, 2079-A3, Model-A3
   - Prepare: backtracking template + state-space tree + complexity

Backup long options (if you need a 4th):

- **Heap / heapify / heap sort**: 2080-A3, Model-A2
- **Asymptotic/RAM basics**: 2076-A1, 2078-A1

### Group B — short questions you can plan to attempt first

A reliable “first pick” set of 8 short areas:

1. **Recurrence solving** (5/6)
   - Refs: 2076-B5, 2078-B4, 2079-B9, 2081-B5, Model-B8
2. **DP short: elements / memoization / one DP problem idea** (5/6)
   - Refs: 2076-B8, 2078-B9, 2079-B7, 2081-B7, Model-B11
3. **P/NP/NP-complete/NP-hard** (5/6)
   - Refs: 2076-B11, 2078-B11/B12, 2080-B11, 2081-B12, Model-B10
4. **Backtracking short: concept + subset sum** (5/6)
   - Refs: 2076-B12, 2078-B10, 2080-B9, 2081-B4/B8, Model-B12
5. **Greedy short: concept + when greedy works** (5/6)
   - Refs: 2076-B6, 2078-B7/B8, 2079-B8, 2080-B7, Model-B9
6. **Basic sorting algorithm + analysis** (4/6)
   - Refs: 2076-B4, 2078-B6, 2080-B5, Model-B4
7. **MST (Kruskal or Prim)** (3/6)
   - Refs: 2076-B10, 2079-B11, Model-B9
8. **Vertex cover + approximation** (3/6)
   - Refs: 2076-B9, 2079-B6, 2081-B10

Backup short picks (if one is missing):

- Reductions/Cook/SAT: 2078-B12, 2080-B11, 2081-B11
- Huffman: 2079-B5, 2080-B8
- Job sequencing: 2078-B8, 2080-B7
- Euclid/CRT: 2079-B10, 2080-B10

---

## 4) One‑day schedule (hour‑by‑hour)

Use “Hour 0” as your start time. Keep a notebook and write full answers (not just reading).

### Hour 0: Setup (30–45 min)

- Copy this checklist onto one page (your “exam sheet”):
  - Master theorem template
  - DP elements + DP table meaning
  - Quick sort partition + complexities
  - Backtracking template (choose/explore/unchoose + pruning)
  - Greedy properties + one example outline
  - P vs NP vs NP-complete vs NP-hard
  - MST steps (Kruskal/Prim)
  - Vertex cover 2‑approx

Deliverable: 1 page of headings + space for formulas.

### Hours 1–2.5: Unit 1 — Recurrences (P1)

Target outcome: solve any one recurrence fast and correctly.

- Master theorem: identify a, b, f(n), compare with n^(log_b a)
- Substitution method: write proof outline (assume, substitute, show inequality)
- Do 2 full practice problems:
  - 2076-B5 and 2081-B5 (or Model-B8)

### Hours 2.5–5: Unit 5 — Dynamic Programming (P1)

Target outcome: one full long DP answer + one short DP answer.

- Learn DP fundamentals:
  - optimal substructure + overlapping subproblems
  - DP vs greedy vs memoization (difference in 4–6 bullets)
- Practice ONE major DP numerical fully (pick one):
  - Matrix chain multiplication: 2079-A2 / Model-B11
  - LCS: Model-A1
  - Edit distance: 2079-B7 / 2081-B7

### Hours 5–6.5: Unit 3 — Quick sort / Divide & Conquer (P1)

Target outcome: second strong long answer option.

- Randomized quick sort algorithm + partition explanation
- Best/avg/worst complexity + why randomization helps
- Practice tracing quick sort:
  - 2079-B12 (trace) and 2081-A2 (worst-case discussion)

### Hours 6.5–8: Unit 6 — Backtracking (P1)

Target outcome: be able to write the backtracking algorithm and solve subset sum.

- Recursion vs backtracking (clear difference)
- State-space tree + bounding/pruning idea
- Practice:
  - Subset sum: Model-A3 or 2081-B4
  - Optional: N-queen long idea: 2076-A3

### Hours 8–9: Unit 8 — NP Completeness (P1)

Target outcome: guaranteed theory short answers.

- Definitions:
  - P, NP, NP-hard, NP-complete
  - reducibility (polynomial-time reduction meaning)
- Write 1 small “relationship diagram” on your sheet.
- Practice:
  - 2076-B11 or Model-B10

### Hours 9–10.25: Unit 4 + Unit 8 — Greedy + Vertex cover approx (P1/P2)

Target outcome: lock 2–3 short answers.

- Greedy choice property + optimal substructure + when greedy is optimal
- Vertex cover:
  - definition + 2-approx algorithm outline
- Practice:
  - Greedy short: 2076-B6 or 2079-B8
  - Vertex cover: 2076-B9 or 2081-B10

### Hours 10.25–11: Graph/MST (P2)

Target outcome: one more reliable short answer.

- Kruskal steps (sort edges, pick non-cycle) + complexity
- Prim steps (grow from a node) + complexity
- Practice:
  - 2076-B10 or Model-B9

### Hours 11–12: Mock attempt + final revision

- Pick one paper (Model or 2081) and simulate:
  - Choose 2 long questions and write full answers
  - Choose 8 short questions and write short answers
- Fix weak spots:
  - rewrite your recurrence solution template once
  - rewrite your DP recurrence/table once

Deliverable: a final 1–2 page “ready set” of templates.

---

## 5) Final 30–45 minutes before exam (checklist)

- Master theorem cases + one solved sample
- DP elements + one DP table example (matrix chain / LCS / edit distance)
- Randomized quick sort steps + best/avg/worst
- Backtracking subset sum template + pruning sentence
- P/NP/NP-hard/NP-complete definitions + 2 examples
- Greedy properties + one example outline
- Vertex cover 2‑approx steps
- Kruskal or Prim steps + complexity
