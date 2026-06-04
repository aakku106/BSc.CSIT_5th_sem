# Simulation and Modeling (SM) — 1‑Day Marathon Plan (Target 30+)

This plan is based on repetition across **2076, 2078–2081 + Model** (6 sets total). Frequency means “topic appears in x out of 6 sets”.

## Assumptions

- You are starting from zero (no prior knowledge).
- You have only one day to prepare.
- Goal: **30+ marks** (pass-first, then safer buffer).

## What to optimize for (exam reality)

- **Group/Section A (long):** attempt any **2 out of 3** (≈10 marks each)
- **Group/Section B (short):** attempt any **8 out of 12** (≈5 marks each)

A practical “30+” approach:

- Lock **2 reliable long answers** (≈20 marks), and
- Have at least **10 short answers ready**, so you can choose the best 8.

---

## 1) Highest‑yield units (do in this order)

Ranked using repetition + how often the unit appears as a Group A choice:

1. **Unit 5 — Random Numbers** (6/6 overall; 6/6 in Group A)
2. **Unit 1 — Intro + System modeling** (6/6 overall; 4/6 in Group A)
3. **Unit 8 — GPSS / Simulation language** (6/6 overall; 3/6 in Group A)
4. **Unit 3 — Queueing system** (6/6 overall; 3/6 in Group A)
5. **Unit 6 — Verification/Validation/Calibration** (6/6 overall)
6. **Unit 7 — Output analysis** (6/6 overall)
7. **Unit 2 — Discrete event + Poisson + Monte Carlo + analog/digital** (high repeats)
8. **Unit 4 — Markov chain** (5/6 as short)

---

## 2) The “must cover” topics (based on repeats)

### P1 Core (non‑negotiable in 1 day)

- **Random numbers** (6/6)
  - Uniformity vs independence, true vs pseudo random
  - KS test steps (uniformity) + conclusion line
  - One independence test idea (poker or autocorrelation)
  - Congruential generation numerical (mixed / multiplicative)
- **System modeling basics** (6/6)
  - Why model is built + steps in system modeling
  - Static vs dynamic; deterministic vs stochastic; discrete vs continuous
  - Phases of simulation study (flowchart list)
- **GPSS** (6/6)
  - Transaction, facility vs storage
  - Common blocks and flow: `GENERATE → QUEUE → SEIZE → DEPART → ADVANCE → RELEASE → TERMINATE`
  - Draw block diagram + write a short code sketch + explain block roles
- **Queueing theory** (6/6)
  - Elements of queueing system + disciplines
  - Kendall notation + performance measures + stability (traffic intensity/utilization)
- **Verification/Validation/Calibration** (6/6)
  - Verification vs validation vs calibration vs accreditation
  - Three-step approach for validation
- **Output analysis** (6/6)
  - Why output analysis is needed
  - Confidence interval (CI) steps + replication + initial bias
  - Estimation methods + hypothesis testing (short structured points)
- **Poisson arrivals / non-stationary Poisson** (5/6)

### P2 High (do after P1)

- **Markov chain** (5/6): definition + one small example + applications
- **Monte Carlo** (4/6): steps + where used + one simple example outline
- **Analog vs digital / digital-analog simulator** (3–4/6): short compare table
- **Inverse method (non-uniform random variate)** (2/6): idea + steps (no deep derivation)

### P3 Support (only if time remains)

- Merits/demerits of simulation; application areas; simulation tools

---

## 3) Most likely questions you should practice (from repeats)

### Group A — long questions you should be ready for

Prepare at least **3** long-question patterns so you can confidently pick **2**:

1. **Random numbers + tests (KS / poker / autocorrelation)** — **6/6**
   - Seen in: 2076-A2, 2078-A2, 2079-A3, 2080-A3, 2081-A3, Model-A2
   - Deliverable: write test steps + compute + compare with critical value + conclusion

2. **Static vs dynamic models / deterministic vs stochastic + system modeling** — **4/6**
   - Seen in: 2076-A3, 2078-A3, 2080-A1, Model-A3
   - Deliverable: one clean compare table + one example + 6–8 modeling steps

3. Backup long options (pick one to prepare):
   - **Queueing system long** — **3/6** (2076-A1, 2078-A1, Model-A1)
   - **GPSS block diagram + code** — **3/6** (2079-A1, 2080-A2, 2081-A2)

### Group B — short questions you can plan to attempt first

Aim to be ready for **10** and choose the best **8**.

A reliable first-pick set:

1. V&V: verification vs validation vs calibration (+ three-step approach) (6/6)
2. Output analysis: CI or estimation methods + replication/initial bias (5–6/6)
3. Markov chain (5/6)
4. Poisson / non-stationary Poisson (5/6)
5. Congruential random number generation (4/6)
6. Monte Carlo (4/6)
7. Queueing basics (Kendall + measures + stability idea) (3–6/6)
8. GPSS basics (blocks + facility/storage + “transaction flow” idea) (3–6/6)

---

## 4) One‑day schedule (hour‑by‑hour)

Use “Hour 0” as your start time. Study with a notebook and write answers.

### Hour 0: Setup (30–45 min)

Make a 2-page “exam sheet” that you will revise all day:

- Random numbers:
  - Mixed LCG: $X_{i+1}=(aX_i+c)\bmod m$, $U_i=X_i/m$
  - Multiplicative: $X_{i+1}=(aX_i)\bmod m$
  - KS steps + conclusion sentence
  - Poker test: categories + chi-square template
- Output analysis:
  - CI formula: $\bar{x}\pm t_{\alpha/2,n-1}\,\frac{s}{\sqrt{n}}$
  - Replication + initial bias (3–4 bullets each)
- Queueing:
  - Kendall notation meaning + traffic intensity/utilization idea + stability sentence
- GPSS:
  - Standard block chain + one-line meaning of each block
- V&V:
  - verification vs validation vs calibration + 3-step validation headings

Deliverable: 2 pages you can rewrite from memory.

### Hours 1–3: Unit 5 — Random Numbers (P1)

Target outcome: one guaranteed Group A answer.

- Learn the basics:
  - true vs pseudo random; uniformity vs independence
- KS test (uniformity):
  - do one full problem: **2076-A2** or **Model-A2**
  - write the conclusion line: accept/reject $H_0$ based on $D_{calc}$ vs $D_\alpha$
- Congruential generation numerical:
  - do one full problem: **2076-B8** or **2078-B8** or **2080-B6**
- Independence (poker/autocorrelation):
  - write the procedure (what you compute + how you conclude)
  - practice one: **2079-A3** (poker) OR **2080-A3** (auto-correlation)

Deliverable: 1 full long answer + 1 full short numerical.

### Hours 3–4: Unit 1 — System modeling basics (P1)

Target outcome: second strong Group A option.

- Write a compare table:
  - static vs dynamic
  - deterministic vs stochastic
  - discrete vs continuous
- Why model is built + 6–8 steps in system modeling
- Phases of simulation study (short flow)

Practice: **2080-A1** or **Model-A3**.

### Hours 4–5.25: Unit 3 — Queueing system (P1)

Target outcome: secure 1 long OR 1–2 short answers.

- Define queueing system + elements (calling population, capacity, arrival, service, discipline)
- Kendall notation + performance measures + stability idea
- Queue disciplines: FCFS, LCFS, priority, SIRO (short points)

Practice: **Model-A1** or **2076-A1**.

### Hours 5.25–7.25: Unit 8 — GPSS (P1)

Target outcome: third safe Group A option.

- Core terms:
  - transaction, facility, storage
- Core blocks:
  - GENERATE, QUEUE, SEIZE, DEPART, ADVANCE, RELEASE, TERMINATE
- Practice ONE full model:
  - **2079-A1** (barbershop) OR **2081-A2** (machine + inspector) OR **2076-B11** (inspector for 100 parts)
- Write:
  - one neat block diagram
  - a short code sketch that matches the block diagram
  - one line “function of each block”

Deliverable: 1 block diagram you can redraw fast.

### Hours 7.25–8.10: Unit 6 — Verification, validation, calibration (P1)

Target outcome: guaranteed 5-mark short.

- Definitions:
  - verification (“build model right”)
  - validation (“build right model”)
  - calibration (parameter tuning)
  - accreditation (acceptance/approval)
- Three-step validation approach:
  - face validity
  - validate assumptions
  - input-output validation

Practice: **Model-B10** or **2078-B7**.

### Hours 8.10–9.40: Unit 7 — Output analysis (P1)

Target outcome: 2–3 short answers ready.

- Confidence interval: why needed + how to establish (steps + formula)
- Replication of runs + simulation run statistics
- Elimination of initial bias
- Hypothesis testing: $H_0/H_1$, significance, accept/reject (short structured points)

Practice: **Model-B8/B11** or **2079-B4**.

### Hours 9.40–10.40: Unit 2 — Poisson arrivals + Monte Carlo + analog/digital (P1/P2)

- Discrete event simulation concept + Poisson arrival pattern
- Stationary vs non-stationary Poisson process
- Monte Carlo method steps + one small example outline
- Quick compare: analog vs digital; digital-analog simulator; feedback system

Practice:

- Poisson: **Model-B12** or **2078-B5**
- Monte Carlo: **Model-B9** or **2080-B11**

### Hours 10.40–11.10: Unit 4 — Markov chain (P2)

- Definition + transition matrix idea
- One small example (2 states) + applications

Practice: **Model-B6** or **2080-B4**.

### Hours 11.10–12: Mock attempt + final revision

- Pick one paper (Model or 2081) and simulate:
  - Choose **2 Group A** and write full answers
  - Choose **8 Group B** and write short answers
- Rewrite the weakest 2 topics once (clean structure).

Deliverable: final 2-page exam sheet.

---

## 5) Final 30–45 minutes before exam (checklist)

- KS test steps + conclusion line (accept/reject $H_0$)
- One congruential generation worked example
- Queueing: Kendall notation + measures + stability/traffic intensity sentence
- GPSS: standard block chain + facility vs storage
- V&V: definitions + three-step validation approach
- Output analysis: CI formula + replication + initial bias
- Poisson vs non-stationary Poisson (2–4 bullets)
- Markov chain: definition + one example + applications
- Monte Carlo: steps + when used
