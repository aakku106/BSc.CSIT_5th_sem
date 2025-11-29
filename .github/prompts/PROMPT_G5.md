# PROMPT: Generate G5.md (Detailed Q&A)

## Your Task

Generate detailed question-answer materials for the specified subject.

**Subject:** [USER WILL SPECIFY]

**Your Role:** You are GPT-5/GPT-4, creating comprehensive Q&A.

---

## What to Do

### Step 1: Identify High-Frequency Questions

From the question papers in `/Users/aakku/Desktop/5th_sem/[SUBJECT]/qtn_sets_and_syllabus/`:

1. List all questions that appear 3+ times
2. List all questions that appear 2 times
3. Identify unique but important questions

### Step 2: Organize by Topic

Group questions by syllabus units and topics.

### Step 3: Create Detailed Answers

For each high-frequency question:

1. **Question Statement** - Write clearly
2. **Answer** - Detailed explanation with:
   - Clear definitions
   - Step-by-step explanations
   - Concrete examples
   - Diagrams (Mermaid) where helpful
   - Related concepts
3. **Common Mistakes** - What students get wrong
4. **Exam Tips** - How to answer in exam

---

## Output Structure

````markdown
# [Subject Name] - Detailed Q&A by GPT-5

## Overview

**Total Topics Covered:** [count]
**High-Frequency Questions:** [count]
**Word Count:** [8000-12000 words]

## Unit 1: [Unit Name]

### Topic 1.1: [Topic Name]

**Frequency:** [X/Y papers]

#### Question: [Question text]

**Answer:**

[Detailed explanation with examples]

**Example:**

[Concrete example with solution]

**Mermaid Diagram:**

```mermaid
[diagram if helpful]
```
````

**Common Mistakes:**

- Mistake 1
- Mistake 2

**Exam Tips:**

- Tip 1
- Tip 2

---

### Topic 1.2: [Next Topic]

[Repeat structure]

## Unit 2: [Unit Name]

[Continue...]

````

---

## Writing Rules

**MUST follow:**
- Simple language (bachelor level)
- NO emojis in headings
- Every concept needs example
- Step-by-step solutions
- Show all calculations
- Use Mermaid diagrams
- Word count: 8000-12000 words

---

## Example Answer Format

```markdown
### RSA Algorithm

**Frequency:** 6/7 papers - CRITICAL

#### Question: Explain RSA encryption and decryption with an example.

**Answer:**

RSA is an asymmetric encryption algorithm that uses two keys: public and private.

**Key Generation Steps:**

1. Choose two prime numbers p and q
2. Calculate n = p × q
3. Calculate φ(n) = (p-1)(q-1)
4. Choose e such that gcd(e, φ(n)) = 1
5. Calculate d such that (e × d) mod φ(n) = 1

**Example:**

Given p = 3, q = 11:

Step 1: n = 3 × 11 = 33
Step 2: φ(n) = (3-1)(11-1) = 2 × 10 = 20
Step 3: Choose e = 3 (gcd(3, 20) = 1)
Step 4: Find d: (3 × d) mod 20 = 1
        d = 7 (verify: 3 × 7 = 21, 21 mod 20 = 1)

Public key: (e=3, n=33)
Private key: (d=7, n=33)

**Encryption:** C = M^e mod n
Message M = 2
C = 2^3 mod 33 = 8

**Decryption:** M = C^d mod n
M = 8^7 mod 33
M = 2097152 mod 33 = 2 ✓

**Common Mistakes:**
- Forgetting modulo operation
- Wrong φ(n) calculation
- Not verifying gcd(e, φ(n)) = 1

**Exam Tips:**
- Show all steps clearly
- Verify your answer
- Use small primes for practice
````

---

## Ready?

**Confirm subject name and begin generating G5.md file.**

Example: "Generate G5.md for Cryptography"
