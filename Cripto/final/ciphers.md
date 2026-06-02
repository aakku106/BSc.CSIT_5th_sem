# Cryptography (Cripto) — Encrypt/Decrypt Question List (2076, 2078–2082 + Model)

This file lists every question (from the available sets) that **explicitly asks to encrypt and/or decrypt** something, plus how many times it appears.

**Sets scanned (7):** 2076, 2078, 2079, 2080, 2081, 2082, Model.

**Count rule:** “Asked X times” = the same _cipher/algorithm + operation_ appears in **X different sets**.

---

## 1) Quick frequency summary (practical encrypt/decrypt)

These are the questions where you must actually **encrypt/decrypt a text/number** (not just explain theory).

| Cipher/Algorithm  | Type (requested)  | Asked (out of 7 sets) | Appears in                  |
| ----------------- | ----------------- | --------------------: | --------------------------- |
| Hill cipher       | Decrypt           |                   3/7 | 2076-A3, 2078-B5, 2082-B10  |
| Hill cipher       | Encrypt + Decrypt |                   1/7 | 2080-B4                     |
| Playfair cipher   | Encrypt           |                   3/7 | 2081-B4, 2082-B5, Model-B5  |
| Playfair cipher   | Decrypt           |                   1/7 | 2079-B5                     |
| Rail fence cipher | Encrypt           |                   3/7 | 2076-B5, 2079-B11, 2080-B10 |
| RSA               | Encrypt + Decrypt |                   3/7 | 2078-A2, 2080-A1, Model-A2  |
| ElGamal           | Encrypt           |                   3/7 | 2076-A2, 2079-A3, 2082-A2   |
| Vernam cipher     | Encrypt           |                   1/7 | 2078-B10                    |
| Vigenère cipher   | Encrypt           |                   1/7 | 2081-B10                    |

---

## 2) Full list (by cipher/algorithm)

### A) Public‑key / number‑theory based

#### RSA — **Encrypt + Decrypt** (asked **3 times**)

- **2078-A2 (Encrypt + Decrypt):** compute using given primes (7, 19) with keys (public 29, private 41); **encrypt plaintext 4** and **decrypt ciphertext 3**.
- **2080-A1 (Encrypt + Decrypt):** with p=13, q=7, compute keys and **encrypt + decrypt** the text **"hi"** (mapping a–z → 0–25).
- **Model-A2 (Encrypt + Decrypt):** with p=61, q=53, compute keys and **encrypt 42**, then **decrypt** to recover original message.

#### ElGamal — **Encrypt** (asked **3 times**)

- **2076-A2 (Encrypt):** with p=29, primitive root g=8, private key X=9, random K=11; **encrypt m=13** using ElGamal.
- **2079-A3 (Encrypt):** ElGamal public key (q, α, YA)=(101, 2, 14), random k=4; **encrypt the message “CSIT”** using A=0…Z=25 mapping.
- **2082-A2 (Encrypt):** (in MITM/DH context) with prime 19 and primitive root 10, private key 5, random 4; **find ciphertext for M=2** using ElGamal.

---

### B) Classical ciphers (procedural marks)

#### Hill cipher — **Decrypt** (asked **3 times**)

- **2076-A3 (Decrypt):** **decrypt “DRJI”** using Hill key matrix \[\[7, 8\], \[11, 11\]\].
- **2078-B5 (Decrypt):** **decrypt “GVPJ”** using Hill key matrix \[\[3, 7\], \[5, 12\]\].
- **2082-B10 (Decrypt):** **decrypt “HI”** using Hill key written as \[5/4 3/3\] (as given in the set).

#### Hill cipher — **Encrypt + Decrypt** (asked **1 time**)

- **2080-B4 (Encrypt + Decrypt):** show **encryption and decryption** of **“csit”** using Hill cipher with key matrix (as given in that set).

#### Rail fence cipher — **Encrypt** (asked **3 times**)

- **2076-B5 (Encrypt):** **encrypt** “WE ARE IN SAME RACE UNTILL OVER LIVE END” using **rail fence (4 rails)**.
- **2079-B11 (Encrypt):** **encrypt** “LEARNING AND TEACHING ARE DIFFERENT” using **rail fence (3 rails)**.
- **2080-B10 (Encrypt):** **encrypt** M=“CSIT PROGRAM IS A HOT CAKE” using **rail fence (3 rails)**.

#### Playfair cipher — **Encrypt** (asked **3 times**)

- **2081-B4 (Encrypt):** show **encryption** of plaintext “ALGORITHM” using key “PSEUDOCODE”.
- **2082-B5 (Encrypt):** **encrypt** plaintext “TURINGTEST” using key “HELLOWORLD”.
- **Model-B5 (Encrypt):** **encrypt** “INFORMATION” using keyword “SECURITY”.

#### Playfair cipher — **Decrypt** (asked **1 time**)

- **2079-B5 (Decrypt):** **decrypt** the ciphertext “IMOGUN” using keyword “GALOIS”.

#### Vernam cipher — **Encrypt** (asked **1 time**)

- **2078-B10 (Encrypt):** **encrypt** “HELL” using key “FAIL” (Vernam cipher).

#### Vigenère cipher — **Encrypt** (asked **1 time**)

- **2081-B10 (Encrypt):** **encrypt** “hello everyone” using key “worlds” (Vigenère).

---

## 3) “Explain encryption/decryption process” (theory‑style prompts)

These don’t require encrypting a given message, but they repeatedly ask for the **steps/process**.

| Topic                   | Type                        | Asked (out of 7) | Appears in       |
| ----------------------- | --------------------------- | ---------------: | ---------------- |
| Double DES / Triple DES | Encrypt (process)           |              1/7 | 2078-A1          |
| 2‑DES / 3‑DES           | Encrypt + Decrypt (process) |              1/7 | 2080-A2          |
| IDEA                    | Encrypt (process)           |              1/7 | 2079-B6          |
| Modes of block cipher   | Encrypt (concept)           |              2/7 | 2078-A3, 2082-B6 |
