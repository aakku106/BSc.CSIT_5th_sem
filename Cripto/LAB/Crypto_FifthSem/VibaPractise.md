**Viba Practise — Lab Summaries (revised)**

Purpose: provide clear, professional summaries of each lab in `Crypto_FifthSem`. For every item below you will find: a concise description, why the program exists, how the technique works (high-level), and practical pros/cons.

1. **Vigenère Cipher (VignereCipher.c)**
   - **What it is:** A classical polyalphabetic substitution cipher that uses a repeating key to shift letters.
   - **Why it exists:** Improves on single-shift ciphers by varying the shift using a key, which reduces single-letter frequency leakage.
   - **How it works:** Each plaintext letter is shifted by the position of the corresponding key letter (A→0, B→1, …) modulo 26. The key repeats to cover the message; decryption subtracts the key shifts.
   - **Pros / Cons:** Easy to implement and useful for teaching periodicity and key reuse; vulnerable to Kasiski examination and frequency analysis when key repeats or is short.

2. **RSA (RSA.c)**
   - **What it is:** A public-key encryption scheme based on properties of large primes and modular arithmetic.
   - **Why it exists:** Enables secure communication without a shared secret by separating public/private keys and supporting digital signatures.
   - **How it works:** Choose two primes p,q; compute n = p·q and φ(n) = (p−1)(q−1). Choose e coprime to φ(n), compute d ≡ e^{−1} (mod φ(n)). Encryption: c ≡ m^e (mod n); decryption: m ≡ c^d (mod n).
   - **Pros / Cons:** Strong when properly parameterized; expensive for large messages (used to encrypt symmetric keys instead). Security relies on difficulty of factoring n.

3. **Rail Fence Cipher (Railfence.c)**
   - **What it is:** A simple transposition cipher that writes text in a rail pattern and reads it off row-by-row.
   - **Why it exists:** Demonstrates permutation-based secrecy (reordering characters instead of substituting them).
   - **How it works:** Text is placed into rows (rails) in a zigzag or fixed even/odd pattern; ciphertext is formed by concatenating characters from each rail. Decryption reconstructs the original positions using the rail pattern.
   - **Pros / Cons:** Great teaching example of transposition; trivial to break and not suitable for real security.

4. **Playfair Cipher (PlayFairCipher.c)**
   - **What it is:** A digraph substitution cipher using a 5×5 key square (I/J combined) that enciphers letter pairs.
   - **Why it exists:** Reduces single-letter frequency leakage by operating on pairs of letters rather than single letters.
   - **How it works:** Build a 5×5 matrix from a keyword. For each letter pair: if in same row, replace with letters to the right; if same column, replace with letters below; otherwise replace by letters that form the rectangle corners. Repeated letters in a digraph are separated with a filler (e.g., X).
   - **Pros / Cons:** Stronger than monoalphabetic substitution historically; still breakable using digraph analysis and known-plaintext methods.

5. **Hill Cipher (HillCipher.c)**
   - **What it is:** A linear-algebra-based block cipher that treats blocks of letters as vectors and multiplies by a key matrix modulo 26.
   - **Why it exists:** Illustrates how algebra (matrix operations and modular inverses) can produce polygraphic substitution.
   - **How it works:** Group plaintext into fixed-size blocks (e.g., 3 letters), convert to numeric vectors, compute c = K·p (mod 26) where K is invertible mod 26. Decrypt using K^{−1}·c (mod 26).
   - **Pros / Cons:** Masks letter frequencies across blocks; requires key matrix to be invertible modulo 26 and is vulnerable to known-plaintext attacks.

6. **Diffie–Hellman Key Exchange (DiffieHellman.c)**
   - **What it is:** A protocol for two parties to agree on a shared secret over an insecure channel.
   - **Why it exists:** Establish shared symmetric keys without prior shared secrets, forming the basis for many secure protocols.
   - **How it works:** Public parameters: prime p and generator g. Each party picks a private exponent (x or y), computes g^x mod p and g^y mod p, exchanges those values, then computes (g^y)^x ≡ (g^x)^y mod p to obtain the shared secret. Security relies on the discrete logarithm problem.
   - **Pros / Cons:** Simple and foundational; vulnerable to active MITM unless authenticated.

7. **Caesar Cipher (CaesarCipher.c)**
   - **What it is:** A single-shift substitution cipher that shifts every letter by a fixed key value.
   - **Why it exists:** Historical and pedagogical example to introduce modular shifts and frequency analysis.
   - **How it works:** For each character, add the integer key to its alphabet index modulo 26; decryption subtracts the key.
   - **Pros / Cons:** Extremely simple; trivially broken by brute force or frequency analysis.

The following four items are number-theory utilities included in `4more.md` (supporting exercises):

1. **Smallest Primitive Root (from 4more.md)**
   - **What it is:** Algorithm to find the smallest primitive root (generator) modulo a prime p.
   - **Why it exists:** Primitive roots are used as generators in discrete-log-based protocols (e.g., Diffie–Hellman).
   - **How it works (high-level):** Factor φ(p)=p−1 into prime factors. For each candidate g, ensure g^{φ(p)/q} ≠ 1 (mod p) for every prime factor q of φ(p). The first candidate that passes is a primitive root.
   - **Pros / Cons:** Works for moderate primes; factoring p−1 or testing many candidates is expensive for cryptographic sizes.

2. **Modular Inverse via Extended Euclidean Algorithm (from 4more.md)**
   - **What it is:** Compute x such that A·x ≡ 1 (mod M) when gcd(A,M)=1.
   - **Why it exists:** Essential for RSA key computation and solving modular linear equations.
   - **How it works:** The extended Euclidean algorithm returns integers x,y with A·x + M·y = gcd(A,M). If gcd=1 then x is the modular inverse modulo M (normalized to positive residue).
   - **Pros / Cons:** Deterministic and efficient; inverse only exists if A and M are coprime.

3. **Euler's Totient Function (ETF, from 4more.md)**

- **What it is:** Computes φ(n), the count of integers ≤ n that are coprime with n.
- **Why it exists:** Central to RSA and many theorems in number theory (Euler's theorem).
- **How it works:** Naive method counts gcds; efficient method uses prime factorization n = ∏ p_i^{a_i} and computes φ(n) = n ∏ (1 − 1/p_i).
- **Pros / Cons:** Naive counting is slow; factorization-based formula is efficient once factors are known, but factoring large n is hard.

1. **Relatively Prime Check (GCD, from 4more.md)**

- **What it is:** Determine whether two integers are coprime (gcd=1).
- **Why it exists:** Quick validation step used when selecting parameters (e.g., RSA exponent e must be coprime to φ(n)).
- **How it works:** Use the Euclidean algorithm: repeatedly replace (a,b) with (b,a mod b) until remainder is zero; the last nonzero remainder is gcd(a,b).
- **Pros / Cons:** Extremely fast for practical sizes; trivial to implement.

File location: [Cripto/LAB/Crypto_FifthSem/VibaPractise.md](Cripto/LAB/Crypto_FifthSem/VibaPractise.md)
