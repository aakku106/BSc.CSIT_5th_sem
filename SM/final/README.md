# Simulation and Modeling (SM) — Trend Analysis (2076, 2078–2081 + Model)

Goal: secure pass mark (24) with a safer buffer above 30.

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

- **P1 (Core):** very frequent and reliable for scoring
- **P2 (High):** frequent and scoring
- **P3 (Support):** lower frequency, but still in syllabus

---

## 1) Overall most repeated topics (across all sets)

| Rank | Topic cluster (what repeats)                                                                                                        | Unit(s) | Frequency | Appears in (paper-question refs)                                              |
| ---: | ----------------------------------------------------------------------------------------------------------------------------------- | ------- | --------: | ----------------------------------------------------------------------------- |
|    1 | Random numbers: properties + tests (uniformity/independence) + generation methods (congruential, inverse, poker)                    | 5       |       6/6 | 2076-A2/B8/B10, 2078-A2/B8, 2079-A3/B6, 2080-A3/B6/B12, 2081-A3/B12, Model-A2 |
|    2 | Verification, validation, calibration (and accreditation / three-step approach)                                                     | 6       |       6/6 | 2076-B7, 2078-B7, 2079-B7, 2080-B8, 2081-B7/B8, Model-B10                     |
|    3 | GPSS / simulation language questions (facility/storage/transaction, block diagrams, code)                                           | 8       |       6/6 | 2076-B11, 2078-B11, 2079-A1, 2080-A2, 2081-A2, Model-B7                       |
|    4 | Queueing theory (definitions + Kendall notation + measures + traffic intensity/utilization/discipline)                              | 3       |       6/6 | 2076-A1, 2078-A1, 2079-B10, 2080-B10, 2081-B9/B12, Model-A1                   |
|    5 | Simulation output analysis (estimation methods, confidence interval, hypothesis testing, replication, initial bias, run statistics) | 7       |       6/6 | 2076-B9/B12, 2078-B9/B10, 2079-B4/B12, 2080-B7, 2081-A1, Model-B8/B11         |
|    6 | System modeling basics (why model is built, system modeling steps, static vs dynamic, deterministic vs stochastic, physical models) | 1       |       6/6 | 2076-A3/B12, 2078-A3/B4, 2079-B8/B11, 2080-A1/B5, 2081-B4/B5, Model-A3        |
|    7 | Discrete event concepts + arrival processes (Poisson, non-stationary Poisson, stationary Poisson)                                   | 2       |       5/6 | 2076-B6, 2078-B5, 2079-B12, 2080-B12, Model-B12                               |
|    8 | Markov chains (definition + example + applications)                                                                                 | 4       |       5/6 | 2076-B5, 2079-B9, 2080-B4, 2081-B6, Model-B6                                  |
|    9 | Monte Carlo simulation                                                                                                              | 2       |       4/6 | 2078-B6, 2079-B5, 2080-B11, Model-B9                                          |
|   10 | Analog computer / analog vs digital / digital-analog simulator                                                                      | 2       |       4/6 | 2079-A2, 2078-B12, 2081-B11, Model-B5                                         |

---

## 2) Group-wise repeated topics and questions

### Group/Section A — Long questions trend (attempt 2 out of 3)

| Rank | Topic asked in Group A                                                         | Unit(s) | Frequency | Where it appears                                      | What to prepare (exam deliverable)                                                                         | Priority |
| ---: | ------------------------------------------------------------------------------ | ------- | --------: | ----------------------------------------------------- | ---------------------------------------------------------------------------------------------------------- | -------- |
|    1 | Random numbers (properties + tests such as KS / poker / autocorrelation)       | 5       |       6/6 | 2076-A2, 2078-A2, 2079-A3, 2080-A3, 2081-A3, Model-A2 | Definitions (uniformity, independence) + one full test format (KS / poker / correlation) + conclusion line | P1       |
|    2 | Static vs dynamic models / system modeling (incl. deterministic vs stochastic) | 1       |       4/6 | 2076-A3, 2078-A3, 2080-A1, Model-A3                   | Compare table + 1 example; include why models are built and typical steps                                  | P1       |
|    3 | Queueing system (definition, Kendall notation, measures, stability)            | 3       |       3/6 | 2076-A1, 2078-A1, Model-A1                            | Kendall notation + measures + stability condition (traffic intensity/utilization)                          | P1       |
|    4 | GPSS model/block diagram + code (facility/storage/transaction)                 | 8       |       3/6 | 2079-A1, 2080-A2, 2081-A2                             | Standard GPSS block diagram template + explanation of blocks + assumptions                                 | P1       |
|    5 | Output analysis as a long (estimation methods)                                 | 7       |       1/6 | 2081-A1                                               | Estimation methods list + small explanation + why output analysis is required                              | P2       |
|    6 | Analog computer / analog vs digital (long)                                     | 2       |       1/6 | 2079-A2                                               | Definition + reasons for lower accuracy + analog vs digital comparison                                     | P3       |

### Group/Section B — Short questions trend (attempt 8 out of 12)

| Rank | Topic asked in Group B                                                                                           | Unit(s) | Frequency | Where it appears                                             | What to prepare (5-mark style)                                                                         | Priority |
| ---: | ---------------------------------------------------------------------------------------------------------------- | ------- | --------: | ------------------------------------------------------------ | ------------------------------------------------------------------------------------------------------ | -------- |
|    1 | Verification / validation / calibration (and accreditation / three-step approach)                                | 6       |       6/6 | 2076-B7, 2078-B7, 2079-B7, 2080-B8, 2081-B7/B8, Model-B10    | Clear definitions + short process steps + difference table (verification vs validation vs calibration) | P1       |
|    2 | Simulation output analysis (confidence intervals / estimation / hypothesis testing / replication / initial bias) | 7       |       5/6 | 2076-B9/B12, 2078-B9/B10, 2079-B4/B12, 2080-B7, Model-B8/B11 | CI steps (mean, $t$, $s$, $n$) + 3–5 key points on bias/replication/statistics                         | P1       |
|    3 | Markov chain (example + applications)                                                                            | 4       |       5/6 | 2076-B5, 2079-B9, 2080-B4, 2081-B6, Model-B6                 | Definition + state-transition idea + one small example + applications                                  | P1       |
|    4 | Arrival processes / Poisson (stationary + non-stationary)                                                        | 2       |       5/6 | 2076-B6, 2078-B5, 2079-B12, 2080-B12, Model-B12              | Definition + characteristics + where used in discrete-event models                                     | P1       |
|    5 | Random number generation (congruential methods)                                                                  | 5       |       4/6 | 2076-B8, 2078-B8, 2079-B6, 2080-B6                           | One full worked LCG/MCG example + parameter meaning ($m,a,c,X_0$)                                      | P1       |
|    6 | Monte Carlo simulation                                                                                           | 2       |       4/6 | 2078-B6, 2079-B5, 2080-B11, Model-B9                         | Steps + when to use + one simple example outline                                                       | P2       |
|    7 | Queueing system short concepts (characteristics, calling population, traffic intensity/utilization, discipline)  | 3       |       3/6 | 2079-B10, 2080-B10, 2081-B9/B12                              | Definitions + Kendall notation + stability condition + 1–2 measures                                    | P2       |
|    8 | GPSS as short/theory (transaction-flow language, tools)                                                          | 8       |       3/6 | 2076-B11, 2078-B11, Model-B7                                 | GPSS basics + block roles (GENERATE/QUEUE/SEIZE/DEPART/RELEASE/TERMINATE)                              | P2       |
|    9 | Phases/steps of simulation study                                                                                 | 1       |       3/6 | 2078-B4, 2080-B5, 2081-B5                                    | Phases list + small flowchart explanation (problem → model → data → validate → run → analyze)          | P2       |
|   10 | Analog/digital and continuous-system tools (analog computer, digital-analog simulator)                           | 2       |       3/6 | 2078-B12, 2081-B11, Model-B5                                 | Compare table + one example use-case                                                                   | P3       |

---

## 3) Unit-wise importance (ranked for a 24 → 30+ plan)

This ranking uses: repetition, how often the unit shows up in **Group A choices**, and how quickly answers can be structured.

| Unit rank | Unit                                               | High-yield topics to cover first (set-frequency)                                                                                    | Typical question forms seen                              | Practical target marks (30+ plan) |
| --------: | -------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------- | --------------------------------: |
|         1 | **Unit 5 — Random Numbers**                        | properties + KS/poker/independence (6/6 in Group A), congruential generation (4/6), inverse method / random variate (2/6)           | Long numerical/tests + short generation questions        |                             10–15 |
|         2 | **Unit 1 — Introduction to Simulation**            | static vs dynamic models (4/6 in Group A), system modeling steps (1/6), model types (6/6 overall), phases of simulation study (3/6) | Long compare + short theory lists                        |                              8–12 |
|         3 | **Unit 8 — Simulation of Computer Systems (GPSS)** | GPSS block diagram / code (5/6 overall), facility/storage/transaction concepts                                                      | Long modeling question + short GPSS theory               |                              8–12 |
|         4 | **Unit 3 — Queueing System**                       | definition + elements/measures (6/6 overall), Kendall notation + stability (3/6 Group A), traffic intensity/utilization (1–2/6)     | Long theory + short definitions                          |                              6–10 |
|         5 | **Unit 6 — Verification and Validation**           | verification/validation/calibration/accreditation (6/6)                                                                             | Short definitions + process questions                    |                              6–10 |
|         6 | **Unit 7 — Output Analysis**                       | CI + estimation methods + bias + replication (6/6 overall)                                                                          | Short theory + sometimes long estimation-method question |                              6–10 |
|         7 | **Unit 2 — Continuous & Discrete Simulation**      | Poisson/non-stationary Poisson (5/6), Monte Carlo (4/6), analog/digital (4/6), feedback system (2/6)                                | Short procedure/theory questions                         |                              6–10 |
|         8 | **Unit 4 — Markov Chains**                         | Markov chain definition/examples/applications (5/6)                                                                                 | Short theory question                                    |                               4–8 |

---

## 4) Must-practice list (very important questions)

Finish **P1** first; it is designed to reliably cross 24 and push toward 30+.

| Priority | Questions to practice                         | Topic                                                                 | Why it is prioritized                                          |
| -------- | --------------------------------------------- | --------------------------------------------------------------------- | -------------------------------------------------------------- |
| P1       | 2076-A2, 2078-A2, Model-A2, 2081-A3           | KS test format + random-number properties                             | The random-number test is the most consistent Group A pattern  |
| P1       | 2079-A3, 2080-A3                              | Poker test / autocorrelation-style independence check                 | Expands your Group A choice options beyond KS                  |
| P1       | 2076-A3, 2078-A3, 2080-A1, Model-A3           | Static vs dynamic model + system modeling steps                       | Frequent long question; quick marks with a clean compare table |
| P1       | 2076-A1, 2078-A1, Model-A1 + 2081-B9          | Queueing system + Kendall notation + measures + stability             | Repeats across papers; often appears as either long or short   |
| P1       | 2076-B7, 2078-B7, 2080-B8, 2081-B8, Model-B10 | Verification vs validation vs calibration (incl. three-step approach) | Appears in every set; reliable 5-mark answers                  |
| P1       | 2079-B4, Model-B8/B11, 2078-B10, 2076-B9      | Confidence interval, initial bias, replication/run statistics         | Output analysis is present in every set; standard structure    |
| P1       | 2076-B11, 2078-B11, 2079-A1, 2080-A2, 2081-A2 | GPSS block diagram + typical blocks + short code sketch               | High repetition; can secure a full long answer                 |
| P1       | 2076-B6, 2078-B5, 2080-B12, Model-B12         | Poisson/non-stationary Poisson arrival patterns                       | Very frequent short topic                                      |
| P2       | 2076-B5, 2080-B4, 2081-B6, Model-B6           | Markov chain with example + applications                              | Frequent short question; easy to prepare                       |
| P2       | 2078-B6, 2079-B5, 2080-B11, Model-B9          | Monte Carlo simulation                                                | Repeats; procedure-based marks                                 |
| P2       | 2076-B8, 2078-B8, 2079-B6, 2080-B6            | Congruential random number generation                                 | Standard numerical steps                                       |
| P3       | 2080-B9, Model-B12                            | Feedback system                                                       | Lower frequency but in syllabus                                |
| P3       | 2079-A2, 2081-B11, Model-B5                   | Analog computer / analog vs digital                                   | Lower frequency but can be a safe short question               |

---

## 5) Attempt strategy (pass-first, then 30+)

### A. Group/Section A (choose 2 long answers)

- **Primary safe pair (based on repetition):**
  - Random numbers test (KS / poker / independence), and
  - One of: static vs dynamic models OR queueing system OR GPSS modeling.

### B. Group/Section B (choose the first 8 you can answer cleanly)

A high-probability set of 8 short-answer areas (based on repetition):

1. Verification / validation / calibration (+ accreditation)
2. Confidence interval OR estimation methods
3. Markov chain
4. Poisson / non-stationary Poisson
5. Congruential random number generation
6. Monte Carlo
7. Queueing basics (Kendall notation + measures)
8. GPSS basics (blocks/terminology) OR phases of simulation study

### C. Practical mark safety

- 2 long answers done well ≈ **20 marks**.
- Add 3 short answers done well ≈ **15 marks**.
- This gives a practical target around **35**, leaving room for minor mistakes.

---

## 6) Minimal revision checklist (what to memorize)

- **Random numbers:** uniformity vs independence; KS test steps; poker test idea; LCG/MCG formula.
- **Queueing:** Kendall notation; traffic intensity/utilization; stability condition; key measures (L, Lq, W, Wq).
- **GPSS:** purpose; common blocks and their meaning; facility vs storage; how to draw a clean block diagram.
- **V&V:** verification vs validation vs calibration; three-step validation approach.
- **Output analysis:** confidence interval steps; replication and initial bias.
- **Poisson arrivals:** stationary vs non-stationary meaning; where used in discrete-event simulation.
- **Markov chain:** state, transition probabilities, applications.
