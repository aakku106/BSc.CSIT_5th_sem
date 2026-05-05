# Cryptography (Cripto) — Trend Analysis (2076, 2078–2082 + Model)

Goal: secure pass mark (24) with a safer buffer above 30.

---

## Scope and method

**Question sets analyzed (7):** 2076, 2078, 2079, 2080, 2081, 2082, and the Model question set.

- **Note:** 2077 is not present in the folder, so it is not included.

**Syllabus coverage:** Units 1–7 (full syllabus).

**How “frequency” is counted:**

- `x/7` means the topic appears in `x` out of the 7 analyzed sets (at least once in that set).

**Exam pattern inferred from sets:**

- **Section/Group A:** Attempt any 2 out of 3 (long questions)
- **Section/Group B:** Attempt any 8 out of 12 (short questions)

Priority tags used below:

- **P1 (Core):** very frequent and reliable for scoring
- **P2 (High):** frequent and scoring
- **P3 (Support):** lower frequency, but still in syllabus

---

## 1) Overall most repeated topics (across all sets)

| Rank | Topic cluster (what repeats)                                                                          | Unit(s) | Frequency | Appears in (paper-question refs)                                                           |
| ---: | ----------------------------------------------------------------------------------------------------- | ------- | --------: | ------------------------------------------------------------------------------------------ |
|    1 | Classical ciphers (Playfair / Hill / Rail Fence / Vigenère / Vernam; mono vs poly)                    | 1       |       7/7 | 2076-A1/A3/B5, 2078-B5/B10, 2079-B5/B11, 2080-B4/B10, 2081-B4/B10, 2082-B5/B10, Model-B5   |
|    2 | Hash functions + digests (MD4) + SHA-1/SHA-2 (properties, applications, process)                      | 4       |       7/7 | 2076-A3/B11, 2078-B9, 2079-A2, 2080-A3, 2081-A2/B12, 2082-A3, Model-B4                     |
|    3 | Number theory toolkit (Fermat, totient, discrete log, primitive roots, Miller–Rabin, extended Euclid) | 3       |       7/7 | 2076-A2/B4/B10, 2078-A3/B8, 2079-B10/B12, 2080-A1/B8, 2081-A3/B8/B12, 2082-A2/B7, Model-B8 |
|    4 | Network security stack (firewalls, certificates/PKI, PGP/SSL/IPSec)                                   | 6       |       7/7 | 2076-B7/B12, 2078-B6/B12, 2079-B7, 2080-B6/B11, 2081-B6/B9, 2082-B9/B11, Model-B7/B9       |
|    5 | Malicious logic (virus/worm/trojan/zombies) + DoS                                                     | 7       |       6/7 | 2076-B8/B12, 2079-B4, 2080-B7, 2081-B9/B12, 2082-B4, Model-B12                             |
|    6 | DES family + Feistel structure (DES, 2DES, 3DES, S-box, F-function)                                   | 2       |       5/7 | 2076-A1, 2078-A1, 2080-A2, 2082-A1, Model-A3                                               |
|    7 | Digital signatures (DSS/DSA, direct vs arbitrated, RSA-signature)                                     | 4       |       5/7 | 2076-B6, 2078-A2, 2079-B9, 2082-B8, Model-B6                                               |
|    8 | Authentication protocols (mutual vs one-way, challenge-response, Needham–Schroeder, Kerberos)         | 5       |       5/7 | 2078-B7, 2079-B8, 2080-B5, 2081-A2/B5, 2082-B12                                            |
|    9 | Finite fields / algebra (GF(p), rings/fields, polynomial arithmetic)                                  | 2       |       5/7 | 2078-A3/B11, 2079-A3, 2080-A2/B9, 2081-B8, Model-B10                                       |
|   10 | Diffie–Hellman key exchange + man-in-the-middle / meet-in-the-middle discussions                      | 3       |       4/7 | 2076-B4, 2080-B12, 2081-A3, 2082-A2                                                        |

---

## 2) Group-wise repeated topics and questions

### Section/Group A — Long questions trend (attempt 2 out of 3)

| Rank | Topic asked in Group A                                                          | Unit(s) | Frequency | Where it appears                                                  | What to prepare (exam deliverable)                                                                              | Priority |
| ---: | ------------------------------------------------------------------------------- | ------- | --------: | ----------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------- | -------- |
|    1 | Public-key / number-theory long (RSA / ElGamal / discrete log / Diffie–Hellman) | 3       |       7/7 | 2076-A2, 2078-A2/A3, 2079-A3, 2080-A1, 2081-A3, 2082-A2, Model-A2 | One clean numerical template (RSA or ElGamal) + short theory (discrete log / primitive root / Fermat / totient) | P1       |
|    2 | Hashing / SHA / MD4 (properties, applications, steps)                           | 4       |       5/7 | 2076-A3, 2079-A2, 2080-A3, 2081-A2, 2082-A3                       | Properties + high-level algorithm steps (SHA-1 or MD4 passes) + one compact example outline                     | P1       |
|    3 | DES family / Feistel (DES, 2DES/3DES, F-function, S-box; Feistel structure)     | 2       |       5/7 | 2076-A1, 2078-A1, 2080-A2, 2082-A1, Model-A3                      | Feistel diagram + DES round explanation + 2DES/3DES difference and why 2DES is weak                             | P1       |
|    4 | Finite fields / polynomial arithmetic / GF basics (incl. quadratic residues)    | 2–3     |       3/7 | 2078-A3, 2079-A3, 2080-A2                                         | Definition + one worked GF/polynomial division + short correctness notes (mod arithmetic)                       | P2       |
|    5 | IDEA round operation (trace / round steps)                                      | 2       |       2/7 | 2076-A1, 2081-A1                                                  | Round structure + operation types; write steps clearly                                                          | P2       |
|    6 | AES key schedule / key expansion (and AES internal steps)                       | 2       |       2/7 | 2079-A1, 2082-A1                                                  | Key expansion steps (RotWord/SubWord/Rcon) + purpose + short example flow                                       | P3       |
|    7 | Security basics (CIA triad, security services, block vs stream)                 | 1       |       2/7 | 2078-A1, Model-A1                                                 | Definitions + short compare + examples                                                                          | P3       |

### Section/Group B — Short questions trend (attempt 8 out of 12)

| Rank | Topic asked in Group B                                                                | Unit(s) | Frequency | Where it appears                                                                   | What to prepare (5-mark style)                                                             | Priority |
| ---: | ------------------------------------------------------------------------------------- | ------- | --------: | ---------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------ | -------- |
|    1 | Classical cipher practice (Playfair / Hill / Rail Fence / Vigenère / Vernam)          | 1       |       7/7 | 2076-B5, 2078-B5/B10, 2079-B5/B11, 2080-B4/B10, 2081-B4/B10, 2082-B5/B10, Model-B5 | Step-by-step encryption/decryption templates for Playfair + Hill + Rail Fence              | P1       |
|    2 | Number theory short numericals (Fermat / totient / primality / extended Euclid)       | 3       |       7/7 | 2076-B10, 2078-B8, 2079-B10/B12, 2080-B8, 2081-B8/B12, 2082-B7, Model-B8           | One-page formula sheet + 2 worked templates (Fermat mod exp, Miller–Rabin, totient)        | P1       |
|    3 | Firewalls (definition + types + comparisons)                                          | 6       |       6/7 | 2076-B7, 2078-B4, 2080-B6, 2081-B6, 2082-B9, Model-B7                              | Types + what each filters; one comparison (circuit gateway vs stateful inspection)         | P1       |
|    4 | Malicious logic + DoS (virus/worm/trojan/zombie; DoS examples)                        | 7       |       6/7 | 2076-B8/B12, 2079-B4, 2080-B7, 2081-B9/B12, 2082-B4, Model-B12                     | Definitions + differences table + example impacts + basic defenses                         | P1       |
|    5 | Authentication protocols (one-way vs mutual; challenge-response; Kerberos)            | 5       |       5/7 | 2078-B7, 2079-B8, 2080-B5, 2081-B5, 2082-B12                                       | Definitions + short flows; Kerberos purpose + key idea                                     | P1       |
|    6 | PKI/certificates (X.509, life cycle, trust models)                                    | 6       |       6/7 | 2076-B7/B8, 2078-B6, 2080-B6, 2081-B9, 2082-B11, Model-B11                         | Certificate contents + life-cycle stages + trust-model types                               | P2       |
|    7 | Digital signatures (direct vs arbitrated; DSS/DSA; RSA signature)                     | 4       |       4/7 | 2076-B6, 2079-B9, 2082-B8, Model-B6                                                | Sign/verify steps + comparison points; mention key properties (non-repudiation, integrity) | P2       |
|    8 | Intruders / intrusion / IDS                                                           | 7       |       4/7 | 2076-B12, 2078-B4, 2079-B4, 2081-B7                                                | IDS types + intruder classification + brief detection approach                             | P2       |
|    9 | Finite fields & polynomial arithmetic (divide polynomials over GF; ring/field proofs) | 2       |       4/7 | 2078-B11, 2080-B9, 2081-B8, Model-B10                                              | Polynomial division template + modular inverse idea                                        | P2       |
|   10 | PGP / SSL / IPSec (services and components)                                           | 6       |       4/7 | 2078-B12, 2079-B7, 2080-B11, Model-B9                                              | PGP services list, SSL purpose, IPSec components (AH/ESP concept)                          | P3       |

---

## 3) Unit-wise importance (ranked for a 24 → 30+ plan)

This ranking uses repetition across sets and how often the unit appears as a **Group A choice**.

| Unit rank | Unit                                             | High-yield topics to cover first (set-frequency)                                                                                     | Typical question forms seen            | Practical focus for 30+                                                       |
| --------: | ------------------------------------------------ | ------------------------------------------------------------------------------------------------------------------------------------ | -------------------------------------- | ----------------------------------------------------------------------------- |
|         1 | **Unit 3 — Asymmetric ciphers + number theory**  | RSA (3/7 as Group A), ElGamal (3/7 as Group A), Diffie–Hellman (4/7 overall), Fermat/totient/discrete log/Miller–Rabin (7/7 overall) | Long numericals + short theory         | Prepare 1 RSA + 1 ElGamal template + Fermat/totient/Miller–Rabin short notes  |
|         2 | **Unit 4 — Hash functions & digital signatures** | SHA-1 steps/properties (5/7 in Group A), MD4 passes (3/7 in Group B), digital signatures (5/7 overall)                               | Long theory + short structured answers | Prepare SHA-1 explanation + MD4 digest steps + direct vs arbitrated signature |
|         3 | **Unit 2 — Symmetric ciphers**                   | DES/2DES/3DES + Feistel (5/7 in Group A), finite fields/polynomials (5/7 overall), IDEA (3/7 overall), AES (3/7 overall)             | Long explanation + short numericals    | Prepare DES round + Feistel diagram + one GF/polynomial example               |
|         4 | **Unit 6 — Network security & PKI**              | firewalls (6/7), certificates/trust models (6/7), PGP/SSL/IPSec (varies)                                                             | Short theory                           | Memorize firewall types + certificate lifecycle + PGP/SSL/IPSec key points    |
|         5 | **Unit 1 — Classical ciphers & basics**          | Playfair/Hill/Rail fence/Vigenère/Vernam (7/7), CIA triad/security services (2/7 Group A)                                            | Short numericals + short theory        | Ensure you can solve at least Playfair + Hill + Rail fence confidently        |
|         6 | **Unit 5 — Authentication**                      | mutual vs one-way, challenge-response, Needham–Schroeder, Kerberos (5/7)                                                             | Short protocol questions               | Prepare a clean Kerberos flow + mutual-auth comparison                        |
|         7 | **Unit 7 — Malicious logic**                     | virus/worm/trojan/zombie + DoS + IDS (6/7)                                                                                           | Short compare questions                | Prepare definitions + differences + examples + basic countermeasures          |

---

## 4) Must-practice list (very important questions)

Finish **P1** first.

| Priority | Questions to practice                                          | Topic                                              | Why it is prioritized                                       |
| -------- | -------------------------------------------------------------- | -------------------------------------------------- | ----------------------------------------------------------- |
| P1       | Model-A2, 2078-A2, 2080-A1                                     | RSA key generation + encrypt/decrypt               | Repeats as a long numerical and is high scoring             |
| P1       | 2076-A2, 2079-A3, 2082-A2                                      | ElGamal encryption numerical                       | Common public-key long question option                      |
| P1       | 2076-A3, 2079-A2, 2080-A3, 2082-A3 + Model-B4                  | SHA-1 explanation + MD4 digest passes              | Hashing repeats heavily and is easy to structure            |
| P1       | 2078-A1, 2080-A2, Model-A3 + 2076-A1                           | DES/2DES/3DES + Feistel + DES round/F-function     | One of the most repeated Group A patterns                   |
| P1       | Model-B5, 2079-B5, 2081-B4, 2082-B5                            | Playfair cipher (encrypt/decrypt)                  | Appears in many sets; procedural marks                      |
| P1       | 2076-A3, 2078-B5, 2080-B4, 2082-B10                            | Hill cipher (encrypt/decrypt)                      | Very common classical cipher numerical                      |
| P1       | 2076-B5, 2079-B11, 2080-B10                                    | Rail fence cipher                                  | Repeated and quick to score                                 |
| P1       | 2076-B7, 2078-B4, 2080-B6, 2081-B6, 2082-B9, Model-B7          | Firewalls and types                                | Very frequent short question                                |
| P1       | 2076-B8/B12, 2079-B4, 2080-B7, 2081-B9/B12, 2082-B4, Model-B12 | Virus/worm/trojan/zombie + DoS                     | Repeats strongly; definitions and comparisons score quickly |
| P1       | 2079-B12, 2080-B8 + Model-B8                                   | Miller–Rabin primality + Fermat theorem            | Number-theory marks appear in every set                     |
| P2       | 2078-B6, 2081-B9 + 2076-B8                                     | PKI trust model / PKI architecture                 | Common in network security questions                        |
| P2       | 2080-B6, 2082-B11 + 2076-B7                                    | X.509 + certificate life cycle                     | Repeats and is easy to memorize                             |
| P2       | 2079-B8, 2081-B5, 2082-B12                                     | Challenge-response + Kerberos                      | High frequency authentication unit                          |
| P2       | 2076-B6, 2079-B9, 2082-B8, Model-B6                            | Digital signatures (direct vs arbitrated; DSS/DSA) | Common short question; clear structure                      |
| P3       | 2078-B12, 2079-B7, 2080-B11                                    | PGP services                                       | Appears multiple years but not in every set                 |
| P3       | 2076-B12, 2078-B12                                             | SSL protocol                                       | Lower frequency but still asked                             |
| P3       | 2080-B11, Model-B9                                             | IPSec components                                   | Lower frequency but clean short answer                      |

---

## 5) Attempt strategy (pass-first, then 30+)

### A. Section/Group A (choose 2 long answers)

- **Primary safe pair (based on repetition):**
  - One public-key numerical (RSA or ElGamal), and
  - One from DES/Feistel or Hash/SHA.
- **Backup topics to ensure choice:** finite fields/polynomials OR IDEA round.

### B. Section/Group B (choose the first 8 you can answer cleanly)

A high-probability set of 8 short-answer areas (from repetition):

1. Playfair or Hill (procedure)
2. Rail fence (procedure)
3. Fermat / totient / Miller–Rabin (one numerical)
4. Firewalls (types)
5. Malicious logic + DoS (differences)
6. PKI/certificates (X.509 or trust model)
7. Authentication (mutual vs one-way; challenge-response; Kerberos)
8. Digital signatures (direct vs arbitrated)

### C. Practical mark safety

- Two strong long answers plus 4–5 clean short answers typically push the score beyond 30.

---

## 6) Minimal revision checklist (what to memorize)

- **RSA:** key generation steps ($n,\varphi(n),e,d$) + encrypt/decrypt flow.
- **ElGamal/Diffie–Hellman:** parameters + encryption/decryption steps; discrete log meaning.
- **Fermat/totient/Miller–Rabin:** formulas + one worked example format.
- **DES/Feistel:** Feistel diagram; DES round/F-function purpose; 2DES vs 3DES notes.
- **SHA-1/MD4:** properties + high-level steps/passes; applications.
- **Classical ciphers:** Playfair rules; Hill matrix method; rail fence writing method.
- **Firewalls + PKI:** firewall types; certificate contents + life cycle; trust model idea.
- **Kerberos:** purpose + short message-flow explanation.
- **Malicious logic:** definitions + differences (virus vs worm vs trojan; DoS).
