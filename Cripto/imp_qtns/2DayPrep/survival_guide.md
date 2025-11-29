# Cryptography - 2-Day Emergency Preparation Guide

## Overview

**Target:** Students with 2 days left  
**Goal:** Cover maximum high-probability topics  
**Expected Score:** 40-45 marks (65-75%)

**Study Time:**

- Day 1: 10-12 hours (Calculations & Core Algorithms)
- Day 2: 8-10 hours (Theory, Lists & Revision)

---

## Critical Topics (Must Study)

These topics appear in 4+ papers and are non-negotiable:

1. **RSA Algorithm** (6/7 papers)

   - What to know: Key generation, encryption/decryption, digital signature
   - Time needed: 2 hours
   - Practice: 5 complete numerical problems

2. **AES & DES** (6/7 papers)

   - What to know: AES MixColumns/Key Expansion, DES S-Box/Round function
   - Time needed: 2 hours
   - Practice: Trace 1 round of each

3. **Classical Ciphers** (5/7 papers)

   - What to know: Playfair, Hill, Rail Fence
   - Time needed: 1.5 hours
   - Practice: 2 problems for each type

4. **Diffie-Hellman** (5/7 papers)

   - What to know: Key exchange process, MITM attack
   - Time needed: 1 hour
   - Practice: 3 numerical problems

5. **Firewalls** (6/7 papers)

   - What to know: 6 types and their functions
   - Time needed: 45 mins
   - Practice: Memorize the list and 1-line definitions

6. **Digital Signatures** (5/7 papers)
   - What to know: Process, Direct vs Arbitrated, DSA
   - Time needed: 1 hour
   - Practice: Draw the process diagram

---

## Day 1 Schedule (Calculations & Core Algorithms)

### Morning (4 hours) - The Big Calculations

**Hour 1-2: RSA Algorithm (CRITICAL)**

- **Concept:** Asymmetric crypto using prime factorization.
- **Steps:**
  1. $n = p \times q$
  2. $\phi(n) = (p-1)(q-1)$
  3. Choose $e$ coprime to $\phi(n)$
  4. Calculate $d$ such that $d \times e \equiv 1 \pmod{\phi(n)}$
- **Formulas:** $C = M^e \pmod n$, $M = C^d \pmod n$
- **Practice:** Solve for $p=3, q=11, e=3, M=5$.

**Hour 3-4: Diffie-Hellman & Discrete Log**

- **Concept:** Secure key exchange over public channel.
- **Steps:**
  1. Agree on $g, p$.
  2. Alice: $A = g^a \pmod p$. Bob: $B = g^b \pmod p$.
  3. Shared Secret: $S = B^a \pmod p = A^b \pmod p$.
- **Practice:** Solve for $p=23, g=5, a=6, b=15$.
- **Theory:** Briefly read about Man-in-the-Middle (MITM) attack.

### Afternoon (4 hours) - Classical & Symmetric Ciphers

**Hour 5-6: Classical Ciphers (Easy Marks)**

- **Playfair:** Learn 5x5 matrix rules (same row, same col, rectangle). Handle 'I/J'.
- **Hill Cipher:** Matrix multiplication. $C = K \times P \pmod{26}$. Learn to find inverse matrix for decryption.
- **Rail Fence:** Zig-zag pattern. Very easy.
- **Practice:** Encrypt "HELLO" with each method.

**Hour 7-8: AES & DES (The Heavyweights)**

- **AES:** Focus on the 4 steps: SubBytes, ShiftRows, MixColumns, AddRoundKey. Learn Key Expansion concept.
- **DES:** Understand the Feistel structure. Learn what the S-Box does (6 bits in -> 4 bits out).
- **Modes:** Memorize the 5 modes (ECB, CBC, CFB, OFB, CTR) and 1-line difference for each.

### Evening (2-3 hours) - Number Theory Basics

**Hour 9-10: Modular Arithmetic & Theorems**

- **Fermat's Theorem:** $a^{p-1} \equiv 1 \pmod p$. Useful for simplifying large powers.
- **Euclidean Algorithm:** Finding GCD.
- **Extended Euclidean:** Finding modular inverse (needed for RSA 'd').
- **Practice:** Find $7^{100} \pmod{13}$ using Fermat's. Find inverse of 5 mod 26.

---

## Day 2 Schedule (Theory, Lists & Revision)

### Morning (4 hours) - Network Security & Hash

**Hour 1-2: Firewalls & Malicious Logic**

- **Firewalls:** Memorize the types: Packet Filtering, Stateful, Application Proxy, Circuit Level.
- **Malicious Logic:** Virus vs Worm (Virus needs host, Worm is standalone). Trojan vs Zombie.
- **Intrusion:** IDS types (Signature-based vs Anomaly-based).

**Hour 3-4: Hash Functions & Digital Signatures**

- **Hash:** SHA-1 (512-bit block, 160-bit digest). Memorize 3 properties: Preimage resistance, 2nd Preimage resistance, Collision resistance.
- **Signatures:** Direct (Sender -> Receiver) vs Arbitrated (Sender -> Arbiter -> Receiver).
- **Process:** Hash(Message) -> Encrypt with Private Key -> Signature.

### Afternoon (3 hours) - Authentication & PKI

**Hour 5-6: Authentication & Kerberos**

- **Auth Types:** One-way vs Mutual. Challenge-Response.
- **Kerberos:** Ticket-based auth. KDC (AS + TGS). Memorize the acronyms.
- **PKI:** X.509 Certificate format (Version, Serial, Issuer, Subject, etc.). Trust Models (Hierarchy, Mesh).

**Hour 7: Quick Topics (Easy Marks)**

- **CIA Triad:** Confidentiality, Integrity, Availability.
- **PGP:** Email security. 5 services: Auth, Conf, Comp, Email compat, Segmentation.

### Evening (2 hours) - Final Revision

- **Hour 8:** Re-solve 1 RSA and 1 Hill Cipher problem.
- **Hour 9:** Review the "Must-Memorize Lists" below.

---

## Must-Know Formulas

1. **RSA Encryption/Decryption**

   - $C = M^e \pmod n$
   - $M = C^d \pmod n$

2. **RSA Key Generation**

   - $\phi(n) = (p-1)(q-1)$
   - $d = e^{-1} \pmod{\phi(n)}$

3. **Diffie-Hellman Shared Secret**

   - $K = (g^a)^b \pmod p = (g^b)^a \pmod p$

4. **Hill Cipher**

   - $C = K \times P \pmod{26}$
   - $P = K^{-1} \times C \pmod{26}$

5. **Fermat's Little Theorem**
   - $a^{p-1} \equiv 1 \pmod p$ (if $p$ is prime, $p \nmid a$)

---

## Must-Memorize Lists

### Firewall Types

1. Packet Filtering
2. Stateful Inspection
3. Application Level Gateway (Proxy)
4. Circuit Level Gateway
5. Next-Gen Firewall

### Hash Function Properties

1. One-way (Pre-image resistance)
2. Weak Collision Resistance (2nd Pre-image)
3. Strong Collision Resistance

### Block Cipher Modes

1. ECB (Electronic Code Book)
2. CBC (Cipher Block Chaining)
3. CFB (Cipher Feedback)
4. OFB (Output Feedback)
5. CTR (Counter)

### PGP Services

1. Authentication
2. Confidentiality
3. Compression
4. Email Compatibility
5. Segmentation

### Malicious Logic Types

1. Virus
2. Worm
3. Trojan Horse
4. Zombie/Bot
5. Logic Bomb

---

## Common Questions & Answers

### Q1: Difference between Block and Stream Cipher?

**Answer:**

- **Block:** Encrypts fixed-size blocks (e.g., 64 or 128 bits) at a time. Slower but secure. Examples: DES, AES.
- **Stream:** Encrypts 1 bit or byte at a time. Faster. Examples: RC4.

### Q2: Difference between Symmetric and Asymmetric?

**Answer:**

- **Symmetric:** Same key for encryption and decryption. Fast. Key distribution is hard. (AES, DES).
- **Asymmetric:** Public key to encrypt, Private key to decrypt. Slow. Solves key distribution. (RSA).

### Q3: What is a Digital Signature?

**Answer:** A cryptographic mechanism to verify authenticity, integrity, and non-repudiation. Created by encrypting the hash of a message with the sender's private key.

---

## Quick Reference Table

| Topic              | Frequency | Time    | Priority     |
| :----------------- | :-------- | :------ | :----------- |
| RSA Algorithm      | 6/7       | 2 hrs   | **CRITICAL** |
| AES / DES          | 6/7       | 2 hrs   | **CRITICAL** |
| Firewalls          | 6/7       | 45 min  | **CRITICAL** |
| Classical Ciphers  | 5/7       | 1.5 hrs | **CRITICAL** |
| Diffie-Hellman     | 5/7       | 1 hr    | **CRITICAL** |
| Digital Signatures | 5/7       | 1 hr    | **CRITICAL** |
| Hash (SHA-1)       | 4/7       | 45 min  | HIGH         |
| Malicious Logic    | 4/7       | 30 min  | HIGH         |

---

## Exam Strategy

### Section A (Choose 2 out of 3)

**Definitely Select:**

- Questions involving **RSA calculation** (easy 10 marks if you know the steps).
- Questions on **AES/DES** structure or **Hash** algorithms.

**Avoid:**

- Complex proofs or obscure number theory questions if you aren't 100% sure.

### Section B (Choose 8 out of 12)

**Safe Picks (Always appear):**

1. **Firewall types** (List & explain)
2. **Classical Cipher** (Encrypt/Decrypt "TEXT")
3. **Malicious Logic** (Virus vs Worm)
4. **Authentication** (Kerberos or Mutual Auth)
5. **Hash Properties** or **Digital Signature**

**Additional 3 picks:**

- Choose from: Modes of Operation, PGP, X.509, or simple Diffie-Hellman calc.

---

## Last-Minute Tips

**6 Hours Before Exam:**

- Review the "Must-Memorize Lists".
- Re-check the RSA key generation steps ($d \times e \equiv 1$).
- Don't start learning IDEA or complex Elliptic Curve details.

**1 Hour Before Exam:**

- Relax.
- Visualize the 5x5 Playfair matrix.
- Remember: $p \times q = n$.

**In Exam:**

- **Section B first?** Many students prefer doing the 8 short questions first to secure 40 marks quickly.
- **Show steps:** In calculations, show every modulo operation. Even if the final answer is wrong, steps get marks.

---

## What to Skip

**Don't study these** (low return on investment for 2 days):

- **IDEA Algorithm details:** Complex rounds, rarely asked in full detail.
- **Elliptic Curve Arithmetic:** Too complex for last minute.
- **Specifics of SHA-512/Whirlpool:** Stick to SHA-1 basics.
- **Complex Number Theory Proofs:** Focus on application (Fermat's), not proofs.

---

## Confidence Checklist

Before exam, verify you can:

**Calculations:**

- [ ] Generate RSA keys ($e, d, n$)
- [ ] Encrypt using Playfair (handling 'J', 'X')
- [ ] Multiply matrices for Hill Cipher
- [ ] Calculate $g^a \pmod p$

**Theory:**

- [ ] List 5 Firewall types
- [ ] Explain AES rounds (SubBytes, etc.)
- [ ] Draw Digital Signature process
- [ ] Differentiate Virus vs Worm

---

## Final Words

With focused 2-day preparation on these topics, you can realistically score **40-45 marks**.

**Priority:**

1. **Master RSA & Classical Ciphers** (Guaranteed ~15 marks)
2. **Memorize Lists** (Firewalls, PGP, Modes - Guaranteed ~10-15 marks)
3. **Understand Concepts** (Signatures, Hash, Auth - Guaranteed ~10-15 marks)

**Good luck!**
