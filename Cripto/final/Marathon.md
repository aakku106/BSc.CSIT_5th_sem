# Cryptography (Cripto) — 1‑Day Marathon Plan (Target 30+)

This plan is based on repetition across **2076, 2078–2082 + Model** (7 sets total). Frequency is interpreted as “topic appears in x out of 7 sets”.

## Assumptions

- You are starting from zero (no prior knowledge).
- You can study for one full day (marathon style).
- Goal: **30+ marks** (pass-first, then safer buffer).

## What to optimize for (exam reality)

- **Group A (long):** you must be able to confidently answer **2 long questions**.
- **Group B (short):** you must be ready to answer **8 short questions** from the easiest high-repetition areas.

A practical “30+” approach here is:

- 2 solid long answers, and
- a reliable set of short answers you can write cleanly without guessing.

---

## 1) Highest‑yield units (do in this order)

Ranked using repetition across sets + how often the unit appears as a **Group A option**:

1. **Unit 3 — Asymmetric ciphers + number theory (7/7)**
2. **Unit 4 — Hash functions + digital signatures (7/7)**
3. **Unit 2 — Symmetric ciphers + finite fields (5/7+)**
4. **Unit 6 — Network security + PKI (7/7)**
5. **Unit 1 — Classical ciphers (7/7)**
6. **Unit 5 — Authentication protocols (5/7)**
7. **Unit 7 — Malicious logic + IDS (6/7)**

---

## 2) Most repeated topics (the “must cover” list)

### P1 Core (do these first)

- **RSA / ElGamal numericals + number theory toolkit (7/7):** Fermat, totient, discrete log, primitive roots, Miller–Rabin, extended Euclid
- **Hash + SHA‑1 + MD4 (7/7):** properties, applications, SHA‑1 high‑level steps, MD4 passes
- **Classical ciphers (7/7):** Playfair + Hill + Rail Fence (step-by-step)
- **Network security (7/7):** firewalls, certificates/X.509, PKI, PGP/SSL/IPSec (basics)

### P2 High (do after core)

- **DES/Feistel + 2DES/3DES (5/7):** Feistel structure, DES round/F-function role
- **Digital signatures (5/7 overall):** direct vs arbitrated, DSS/DSA idea, RSA signature flow
- **Authentication protocols (5/7):** challenge-response + Kerberos + Needham–Schroeder

### P3 Support (only if time remains)

- **Finite fields/polynomial arithmetic (5/7 overall):** GF(p) and polynomial division template
- **Intrusion/IDS (4/7):** types and basic idea

---

## 3) The “most likely questions” you should practice (from repeats)

### Group A — long questions you should be ready for

Prepare at least **3** so you can pick **2** confidently:

1. **RSA numerical + key generation** (very common)
   - Practice refs: **2078-A2, 2080-A1, Model-A2**
2. **ElGamal numerical / public-key numerical**
   - Practice refs: **2076-A2, 2079-A3, 2082-A2**
3. **DES/Feistel (DES round + F-function; 2DES vs 3DES)**
   - Practice refs: **2078-A1, 2080-A2, 2082-A1, Model-A3**
4. **SHA‑1 / hash long answer**
   - Practice refs: **2079-A2, 2080-A3, 2082-A3**

Backup long options (if you can’t finish everything):

- **Finite fields / polynomial arithmetic / GF**: 2078-A3, 2079-A3, 2080-A2
- **IDEA round tracing**: 2076-A1, 2081-A1

### Group B — short questions you can almost “expect”

Aim to make these 8 your default picks:

1. **Playfair or Hill procedure** (7/7)
   - Refs: Playfair **2079-B5, 2081-B4, 2082-B5, Model-B5**; Hill **2076-A3, 2078-B5, 2080-B4, 2082-B10**
2. **Rail Fence procedure** (high frequency)
   - Refs: **2076-B5, 2079-B11, 2080-B10**
3. **Fermat / totient / Miller–Rabin numerical** (7/7)
   - Refs: **2078-B8, 2079-B12, 2080-B8, Model-B8**
4. **Firewalls (definition + types + comparisons)** (6/7)
   - Refs: **2076-B7, 2080-B6, 2081-B6, 2082-B9, Model-B7**
5. **Malicious logic + DoS** (6/7)
   - Refs: **2076-B8/B12, 2079-B4, 2080-B7, 2081-B9/B12, 2082-B4, Model-B12**
6. **Certificates / X.509 / certificate life cycle / PKI trust model** (6/7)
   - Refs: X.509 **2076-B7**; certificate lifecycle **2080-B6, 2082-B11**; trust model **2078-B6, 2081-B9**
7. **Authentication (mutual vs one-way; challenge-response; Kerberos)** (5/7)
   - Refs: **2078-B7, 2079-B8, 2081-B5, 2082-B12**
8. **Digital signatures (direct vs arbitrated; DSS/DSA; RSA signature)** (4–5/7)
   - Refs: **2076-B6, 2079-B9, 2082-B8, Model-B6**

If you need 2–3 extra short options (backup):

- **PGP/SSL/IPSec services**: 2078-B12, 2079-B7, 2080-B11, Model-B9
- **Finite field/polynomial division**: 2078-B11, 2080-A2/B9, Model-B10
- **IDS types**: 2081-B7, 2078-B4

---

## 4) One‑day schedule (hour‑by‑hour)

Use “Hour 0” as your start time. Study with pen + paper (write answers, don’t just read).

### Hour 0: Setup (30–45 min)

- Read the **Group A/B pattern** once.
- Create a single “cheat sheet” page with these headings:
  - RSA
  - ElGamal/DH
  - Fermat/totient/Miller–Rabin
  - DES/Feistel
  - SHA‑1 / MD4
  - Playfair / Hill / Rail Fence
  - Firewall / X.509 / PKI
  - Kerberos
  - Malicious logic

Deliverable: one page with headings ready to fill.

### Hours 1–3: Unit 3 (P1) — Public key + number theory

Target outcome: be able to solve **one RSA** and **one ElGamal** numerical cleanly.

- Learn & write templates:
  - RSA: keygen (n, phi(n), e, d) + encrypt/decrypt steps
  - ElGamal: parameters + encryption/decryption steps
  - Fermat mod exponent template
- Practice (write full solutions):
  - RSA: Model-A2 or 2080-A1
  - ElGamal: 2076-A2 or 2079-A3
  - One Fermat/totient short: 2078-B8

### Hours 3–4: Unit 3 (P1) — Primality + discrete log basics

Target outcome: be able to write a short answer and/or steps.

- Miller–Rabin (steps + one example outline)
- Discrete log meaning + primitive root check idea

Practice:

- Miller–Rabin: 2080-B8 or 2079-B12

### Hours 4–6: Unit 4 (P1) — Hash + SHA‑1 + MD4

Target outcome: one long answer option + one short answer option.

- Write:
  - Hash properties + applications list
  - SHA‑1 high-level process (padding, blocks, rounds idea; keep it structured)
  - MD4 passes (just the pass structure + purpose)

Practice:

- SHA‑1 long: 2079-A2 or 2080-A3
- MD4 short: Model-B4 or 2078-B9

### Hours 6–7.5: Unit 2 (P1/P2) — DES/Feistel + 2DES/3DES

Target outcome: second strong long answer option.

- Write:
  - Feistel structure diagram (left/right, round function)
  - DES round + what F-function does
  - 2DES vs 3DES (why 3DES used)

Practice:

- DES/Feistel long: Model-A3 or 2080-A2

### Hours 7.5–8.5: Unit 1 (P1) — Classical ciphers (procedural marks)

Target outcome: guarantee 2–3 short numericals.

- Playfair rules (same row/column/rectangle)
- Hill cipher template (matrix × vector mod 26)
- Rail fence template

Practice:

- Playfair: Model-B5 or 2079-B5
- Hill: 2076-A3 or 2078-B5
- Rail fence: 2080-B10 or 2076-B5

### Hours 8.5–9.75: Unit 6 (P1) — Firewalls + certificates + PKI

Target outcome: lock 2–3 short answers.

- Firewalls: definition + types + 1 comparison
- X.509: main fields + certificate lifecycle stages
- PKI trust models: basic types + what each means

Practice:

- Firewalls: 2082-B9 or 2081-B6
- X.509/cert lifecycle: 2076-B7 + 2082-B11
- PKI trust model: 2078-B6 or 2081-B9

### Hours 9.75–10.5: Unit 5 + Unit 7 (P2) — Kerberos + malicious logic

Target outcome: fill remaining short answers.

- Kerberos: purpose + high-level ticket flow
- Malicious logic: virus vs worm vs trojan vs zombies + DoS

Practice:

- Kerberos: 2081-B5
- Malicious logic/DoS: Model-B12 or 2080-B7

### Hours 10.5–12: Mock attempt + final revision

- Pick one paper (e.g., 2080 or Model) and simulate:
  - choose **2 Group A**, write full answers
  - choose **8 Group B**, write short answers
- Mark yourself strictly:
  - Did you define + show steps + finish the numerical?
  - If an answer is messy, rewrite the template once.

Deliverable: final cheat sheet with corrected steps.

---

## 5) Final 30–45 minutes before exam (checklist)

- RSA keygen and encrypt/decrypt steps (write once without looking)
- ElGamal encryption steps (write once without looking)
- Fermat mod exponent format + Miller–Rabin steps
- DES Feistel diagram + “what F does” sentence
- SHA‑1: 6–8 bullet flow; MD4 passes names/idea
- Playfair rules + Hill mod-26 matrix steps + rail fence steps
- Firewalls types + X.509 contents + PKI trust model
- Kerberos purpose + ticket idea
- Malicious logic differences + DoS one example
