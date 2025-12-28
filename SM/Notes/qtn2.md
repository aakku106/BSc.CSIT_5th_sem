##Validation & verification

Write the similarities & desimilirities of validation & verification.
Give an example that explains/depict the concepts of verification & validation.

---

**Verification**: "Are we building the model RIGHT?" → Checking code/logic is correct
**Validation**: "Are we building the RIGHT model?" → Checking model matches reality

**Similarities**:

- Both ensure model quality
- Both done throughout model development
- Both reduce errors

**Differences**:

- Verification = internal correctness | Validation = external accuracy
- Verification = coding errors | Validation = design errors
- Verification = developer check | Validation = stakeholder check

**Example**:
Building a bank queue simulation:

- **Verification**: Testing if arrival rate formula is coded correctly (e.g., λ = 1/5 customers/min)
- **Validation**: Comparing simulated wait times with actual bank data to see if model behavior matches reality
