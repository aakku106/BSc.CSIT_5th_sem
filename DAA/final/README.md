# Design and Analysis of Algorithms (DAA) — Trend Analysis (2076, 2078–2081 + Model)

Goal: secure pass mark (24) and stay safer above 30.

---

## Scope and method

**Question sets analyzed (6):** 2076, 2078, 2079, 2080, 2081, and the Model question set.

- **Note:** 2077 is not present in the workspace folder, so it is not included.

**Syllabus coverage:** Units 1–8 (full syllabus).

**How “frequency” is counted:**

- `x/6` means the topic appears in `x` out of the 6 analyzed sets (at least once in that set).

**Exam pattern inferred from sets:**

- **Group/Section A:** Attempt any 2 out of 3 (long questions)
- **Group/Section B:** Attempt any 8 out of 12 (short questions)
- Typical weight observed: **A ≈ 10 marks each**, **B ≈ 5 marks each**

Priority tags used below:

- **P1 (Core):** very frequent + high scoring reliability
- **P2 (High):** frequent and scoring
- **P3 (Support):** lower frequency but still in syllabus

---

## 1) Overall most repeated topics (across all sets)

| Rank | Topic cluster (what repeats)                                                            | Unit(s) | Frequency | Appears in (paper-question refs)                                              |
| ---: | --------------------------------------------------------------------------------------- | ------- | --------: | ----------------------------------------------------------------------------- |
|    1 | Recurrences + solving methods (Master, substitution, recursion tree, simple recurrence) | 1.3     |       6/6 | 2076-B5, 2078-B4, 2079-B9, 2080-A1, 2081-B5, Model-B8                         |
|    2 | Dynamic programming (elements/strategy; DP vs greedy/memoization; standard DP problems) | 5.1–5.3 |       6/6 | 2076-B8, 2078-A3/B9, 2079-A2/B7, 2080-A2, 2081-A1/B7, Model-A1/B11            |
|    3 | Backtracking (concept; recursion vs backtracking; subset sum / knapsack / N-queen)      | 6.1–6.2 |       6/6 | 2076-A3/B12, 2078-B10, 2079-A3, 2080-B9, 2081-B4/B8, Model-A3/B12             |
|    4 | Greedy strategy (optimality idea + core problems)                                       | 4.1–4.2 |       6/6 | 2076-B6/B10, 2078-B7/B8, 2079-B8/B11, 2080-A2/B7, 2081-A3, Model-B9           |
|    5 | NP-completeness (P/NP/NP-hard/NP-complete, reductions, Cook/SAT, vertex cover)          | 8.1–8.4 |       6/6 | 2076-B9/B11/B12, 2078-B11/B12, 2079-B6, 2080-B11, 2081-B10/B11/B12, Model-B10 |
|    6 | Divide and conquer + Quick sort (randomized / tracing / complexity) + selection ideas   | 3.2–3.3 |       4/6 | 2076-A2, 2078-A2, 2079-A1/B12, 2081-A2                                        |
|    7 | Heap / heapify / heap sort                                                              | 3.2     |       3/6 | 2076-B7, 2080-A3, Model-A2                                                    |
|    8 | Matrix chain multiplication (optimal parenthesization)                                  | 5.2     |       3/6 | 2079-A2, 2080-A2, Model-B11                                                   |
|    9 | Order statistics / selection problems (expected/worst-case selection; order statistics) | 3.3     |       3/6 | 2079-A1, 2080-B12, 2081-B7                                                    |
|   10 | Subset-sum (asked explicitly as a backtracking problem)                                 | 6.2     |       3/6 | 2080-B9, 2081-B4, Model-A3                                                    |

---

## 2) Group-wise repeated topics and questions

### Group/Section A — Long questions trend (attempt 2 out of 3)

| Rank | Topic asked in Group A                                                              | Unit(s) | Frequency | Where it appears                             | What to prepare (exam deliverable)                                                                                        | Priority |
| ---: | ----------------------------------------------------------------------------------- | ------- | --------: | -------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------- | -------- |
|    1 | Dynamic programming (DP vs greedy/memoization; DP algorithm problems)               | 5       |       5/6 | 2078-A3, 2079-A2, 2080-A2, 2081-A1, Model-A1 | DP elements + table formulation + complexity; be able to solve 1 standard DP (matrix chain / edit distance / Floyd / LCS) | P1       |
|    2 | Divide and conquer / randomized quick sort / selection                              | 3       |       4/6 | 2076-A2, 2078-A2, 2079-A1, 2081-A2           | Quick sort (randomized) algorithm + best/avg/worst; or selection algorithm idea + complexity                              | P1       |
|    3 | Backtracking (concept + full algorithm problem)                                     | 6       |       3/6 | 2076-A3, 2079-A3, Model-A3                   | Backtracking template + state-space tree idea; solve subset sum / 0-1 knapsack / N-queen type                             | P1       |
|    4 | Heap / heapify / heap sort                                                          | 3.2     |       2/6 | 2080-A3, Model-A2                            | Heap property + heapify steps + complexity; be able to trace heap sort                                                    | P2       |
|    5 | Algorithm analysis basics (algorithm properties / RAM model / asymptotic notations) | 1.1–1.2 |       2/6 | 2076-A1, 2078-A1                             | Definitions + examples; clean graph/geometry interpretation if asked                                                      | P2       |
|    6 | Recurrence relation (as a long, substitution proof)                                 | 1.3     |       1/6 | 2080-A1                                      | Substitution method proof format + final $O(\cdot)$ result                                                                | P3       |
|    7 | Greedy (fractional knapsack as a long numerical)                                    | 4.2     |       1/6 | 2081-A3                                      | Greedy ratio logic + table + final loot value + complexity                                                                | P3       |

### Group/Section B — Short questions trend (attempt 8 out of 12)

| Rank | Topic asked in Group B                                                                     | Unit(s) | Frequency | Where it appears                                      | What to prepare (5-mark style)                                       | Priority |
| ---: | ------------------------------------------------------------------------------------------ | ------- | --------: | ----------------------------------------------------- | -------------------------------------------------------------------- | -------- |
|    1 | Recurrences (Master / recursion tree / simple recurrence)                                  | 1.3     |       5/6 | 2076-B5, 2078-B4, 2079-B9, 2081-B5, Model-B8          | Solve one recurrence fully; show cases and final bound clearly       | P1       |
|    2 | Dynamic programming in short form (elements / memoization / string editing / matrix chain) | 5       |       5/6 | 2076-B8, 2078-B9, 2079-B7, 2081-B7, Model-B11         | DP definition + table meaning + final answer + complexity line       | P1       |
|    3 | NP-completeness core (P/NP/NP-complete/NP-hard)                                            | 8.2     |       5/6 | 2076-B11, 2078-B11/B12, 2080-B11, 2081-B12, Model-B10 | Definitions + relationships + 1–2 examples each                      | P1       |
|    4 | Backtracking in short form (concept + subset sum)                                          | 6       |       5/6 | 2076-B12, 2078-B10, 2080-B9, 2081-B4/B8, Model-B12    | Algorithm outline + pruning idea + complexity statement              | P1       |
|    5 | Greedy strategy (concept/optimality) and one greedy application                            | 4       |       5/6 | 2076-B6, 2078-B7/B8, 2079-B8, 2080-B7, Model-B9       | Greedy choice property + optimal substructure + when it works        | P1       |
|    6 | Basic sorting algorithms (selection/bubble/insertion) and analysis                         | 2.3     |       4/6 | 2076-B4, 2078-B6, 2080-B5, Model-B4                   | Algorithm + best/worst time + space + stability (if asked)           | P1       |
|    7 | MST via Kruskal/Prim                                                                       | 4.2     |       3/6 | 2076-B10, 2079-B11, Model-B9                          | Steps + complexity; MST selection rule (cut property / edge sorting) | P2       |
|    8 | Vertex cover (problem + approximation)                                                     | 8.4     |       3/6 | 2076-B9, 2079-B6, 2081-B10                            | Definition + 2-approx outline + small example                        | P2       |
|    9 | Reductions / Cook’s theorem / SAT NP-complete proof-style question                         | 8.3     |       3/6 | 2078-B12, 2080-B11, 2081-B11                          | Meaning of reduction + high-level proof structure                    | P2       |
|   10 | Huffman coding (codes / bits / prefix code)                                                | 4.3     |       2/6 | 2079-B5, 2080-B8                                      | Construct Huffman tree + codes + total bits                          | P2       |
|   11 | Job sequencing with deadlines (greedy)                                                     | 4.2     |       2/6 | 2078-B8, 2080-B7                                      | Steps + sorting criterion + schedule + complexity                    | P2       |
|   12 | Number theory (Euclid/extended Euclid, CRT)                                                | 7       |       2/6 | 2079-B10, 2080-B10                                    | One algorithm + steps + short complexity line                        | P2       |

---

## 3) Unit-wise importance (ranked for a 24 → 30+ plan)

This ranking uses: (1) how often topics from the unit appear, and (2) how often the unit shows up as a **long-question choice**.

| Unit rank | Unit                                | High-yield topics inside the unit (set-frequency)                                                                                    | Typical question forms seen                      | Practical target marks (30+ plan) |
| --------: | ----------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------ | --------------------------------: |
|         1 | **Unit 5 — Dynamic Programming**    | DP elements/strategy (6/6), DP vs greedy/memoization (3/6), matrix chain (3/6), edit distance (2/6), Floyd Warshall (1/6), LCS (1/6) | Very frequent long question + DP numericals      |                             10–15 |
|         2 | **Unit 3 — Divide & Conquer**       | quick sort/randomized/tracing (4/6), heap/heapify (3/6), order statistics/selection (3/6)                                            | Frequent long question + tracing                 |                              8–12 |
|         3 | **Unit 6 — Backtracking**           | recursion vs backtracking (6/6), subset sum (3/6), N-queen (1/6), 0-1 knapsack (1/6)                                                 | Long or short algorithm writing + tracing        |                              8–12 |
|         4 | **Unit 1 — Analysis & Recurrences** | recurrences (6/6), asymptotic notations (3/6), RAM/aggregate analysis (2/6)                                                          | Short recurrence solves; sometimes long analysis |                              6–10 |
|         5 | **Unit 4 — Greedy Algorithms**      | greedy strategy (6/6), MST (3/6), job sequencing (2/6), Huffman (2/6), fractional knapsack (2/6)                                     | Common short questions + occasional long         |                              6–10 |
|         6 | **Unit 8 — NP Completeness**        | P/NP/NP-complete (5/6), reductions/Cook/SAT (3/6), vertex cover (3/6), tractable/intractable (2/6)                                   | Very frequent theory short questions             |                              6–10 |
|         7 | **Unit 2 — Iterative Algorithms**   | basic sorts (4/6), GCD/Fibonacci (2/6)                                                                                               | Compact short questions                          |                               4–8 |
|         8 | **Unit 7 — Number Theory**          | Euclid/extended Euclid (2/6), CRT (2/6), Miller–Rabin (1/6)                                                                          | Procedure-based short questions                  |                               4–8 |

---

## 4) Must-practice list (very important questions)

Finish **P1** first; it is designed to reliably cross 24 and push toward 30+.

| Priority | Questions to practice                             | Topic coverage                                                       | Why it is prioritized                                            |
| -------- | ------------------------------------------------- | -------------------------------------------------------------------- | ---------------------------------------------------------------- |
| P1       | 2078-A3, 2079-A2, 2080-A2, 2081-A1, Model-A1      | DP fundamentals + standard DP problems                               | DP is the most repeated long-question area (5/6)                 |
| P1       | 2076-A2, 2078-A2, 2081-A2, 2079-B12               | Randomized quick sort + tracing + complexity                         | Repeats across sets and gives a strong second long-answer option |
| P1       | 2076-A3, 2079-A3, Model-A3                        | Backtracking algorithm writing (N-queen / 0-1 knapsack / subset sum) | Repeated as long questions and supports many short questions     |
| P1       | 2076-B5, 2078-B4, 2079-B9, 2081-B5, Model-B8      | Recurrence solving (all main methods)                                | Highest frequency topic; common short-question marks             |
| P1       | 2076-B11, 2078-B11, 2080-B11, 2081-B12, Model-B10 | P/NP/NP-complete/NP-hard                                             | Very common theory short question                                |
| P1       | 2080-A3, 2076-B7, Model-A2                        | Heapify + heap sort tracing                                          | Repeated and usually scoring with clean steps                    |
| P2       | 2079-B5, 2080-B8                                  | Huffman coding                                                       | Appears in multiple papers; procedure-based marks                |
| P2       | 2078-B8, 2080-B7                                  | Job sequencing with deadlines                                        | Common greedy application                                        |
| P2       | 2076-B10, 2079-B11, Model-B9                      | MST (Prim/Kruskal)                                                   | Frequent graph-algorithm application                             |
| P2       | 2079-B10, 2081-B9                                 | Chinese Remainder Theorem                                            | Repeats; algorithmic steps are standard                          |
| P2       | 2080-B10, Model-B7                                | Euclid / extended Euclid                                             | Standard short question pattern                                  |
| P2       | 2076-B9, 2081-B10, 2079-B6                        | Vertex cover (problem + approximation)                               | Appears in Unit 8 repeatedly                                     |

---

## 5) Attempt strategy (pass-first, then 30+)

### A. Group A (pick 2 long questions)

- **Primary reliable pair:** one DP long question + one divide-and-conquer/quick sort (or backtracking if quick sort is absent).
- **Backup long-area:** heapify/heap sort.

### B. Group B (pick the first 8 you can write cleanly)

A high-probability set of 8 short-answer areas (based on repetition):

1. Recurrences (Master / recursion tree / substitution)
2. P/NP/NP-complete (definitions + examples)
3. Greedy strategy basics + one greedy application (job sequencing / MST / fractional knapsack)
4. Backtracking basics + subset sum style
5. One basic sorting algorithm with analysis (insertion/bubble/selection)
6. Huffman coding OR MST (Kruskal/Prim)
7. One number-theory algorithm (Euclid or CRT)
8. One DP short problem (edit distance / matrix-chain idea)

### C. Practical mark safety

- 2 long answers done well ≈ **20 marks**.
- To cross the **30–35** safety range, **3 strong short answers** contribute ≈ **15 marks**.
- So **20 + 15 ≈ 35 marks** as a scoring target.
- **Important:** this does **not** change the exam pattern above; in the actual exam, Group B still requires attempting **8 short questions**, even if only about 3 need to be especially strong to push the total safely above 30.

---

## 6) Minimal revision checklist (what to memorize)

- **Recurrences:** Master theorem cases + one substitution proof format.
- **Quick sort:** partition idea + randomized quick sort + best/avg/worst complexity.
- **Heap:** heap property, heapify, build-heap, heap sort trace.
- **DP:** define optimal substructure/overlapping subproblems; write a DP table meaning; complexity.
- **Backtracking:** state-space tree concept; bounding/pruning; subset sum template.
- **Greedy:** greedy-choice property and when greedy is optimal; one full worked example.
- **NP:** P vs NP vs NP-complete vs NP-hard; reduction meaning; 2 examples.
- **Number theory:** Euclid/extended Euclid steps; CRT steps; one small example.
