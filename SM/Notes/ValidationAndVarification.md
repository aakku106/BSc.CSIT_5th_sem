# Validation and Verification in Simulation Modeling

## Overview

When building a simulation model, we need to ensure two things:

1. **Verification**: The model is built correctly (no coding/logic errors)
2. **Validation**: The model represents the real system accurately

Think of it like building a house:

- **Verification** = Following the blueprint correctly
- **Validation** = Ensuring the blueprint matches what the client actually needs

---

## Verification: "Are we building the model RIGHT?"

### Definition

Verification checks whether the simulation model works as intended internally. It ensures the code and logic are error-free.

### Key Questions

- Is the code bug-free?
- Are formulas implemented correctly?
- Does the model follow the conceptual design?
- Are calculations accurate?

### Techniques

1. **Debugging**: Step through code to find errors
2. **Structured Walkthrough**: Review code with team members
3. **Traces**: Track variable values during execution
4. **Animation**: Visualize model behavior
5. **Testing Edge Cases**: Check boundary conditions

### Example

In a hospital emergency room simulation:

- Check if patient arrival code uses correct distribution (e.g., Poisson)
- Verify priority queue logic assigns highest priority correctly
- Ensure time calculations don't have negative values
- Test if resources (doctors, beds) are allocated properly

---

## Validation: "Are we building the RIGHT model?"

### Definition

Validation ensures the simulation model accurately represents the real-world system it's supposed to mimic.

### Key Questions

- Does model behavior match reality?
- Are assumptions reasonable?
- Does output data align with actual system data?
- Are we modeling the right problem?

### Techniques

1. **Face Validity**: Ask experts if model seems reasonable
2. **Historical Data Validation**: Compare model output with past real data
3. **Sensitivity Analysis**: Check if model responds realistically to input changes
4. **Turing Test**: Show results to experts without revealing which is real/simulated
5. **Statistical Tests**: Use t-tests, chi-square to compare model vs reality

### Example

In a hospital emergency room simulation:

- Compare simulated average wait times with actual hospital records
- Check if patient flow patterns match real observations
- Verify that peak hours in simulation align with actual peak hours
- Confirm resource utilization rates match hospital data

---

## Similarities Between Validation and Verification

| Aspect            | Description                                             |
| ----------------- | ------------------------------------------------------- |
| **Purpose**       | Both ensure model quality and reliability               |
| **Timing**        | Both are ongoing processes throughout model development |
| **Goal**          | Both aim to reduce errors and increase confidence       |
| **Necessity**     | Both are essential for credible simulation results      |
| **Documentation** | Both require proper documentation of findings           |

---

## Differences Between Validation and Verification

| Aspect           | Verification                    | Validation                      |
| ---------------- | ------------------------------- | ------------------------------- |
| **Focus**        | Internal correctness            | External accuracy               |
| **Question**     | "Built correctly?"              | "Correct thing built?"          |
| **Compares**     | Model vs. design specs          | Model vs. real system           |
| **Error Type**   | Programming/logic errors        | Conceptual/design errors        |
| **Who Does It**  | Developers, programmers         | Domain experts, stakeholders    |
| **When**         | During development              | After development + throughout  |
| **Methods**      | Debugging, testing, code review | Data comparison, expert opinion |
| **Can Automate** | Partially (unit tests)          | Difficult to automate           |

---

## Comprehensive Example: Bank ATM System

### Scenario

Creating a simulation for a bank's ATM system to determine optimal number of ATMs needed.

### Verification Process

**Step 1: Check Code Logic**

- Verify customer arrival rate formula: `next_arrival = current_time + exponential(1/lambda)`
- Ensure ATM service time follows correct distribution
- Check queue implementation (FIFO order)

**Step 2: Test Edge Cases**

- What happens when all ATMs are busy?
- What if no customers arrive for long periods?
- Test with 0 customers, 1 customer, 1000 customers

**Step 3: Trace Execution**

```
Customer 1: Arrival = 10.5, Start Service = 10.5, End = 13.2
Customer 2: Arrival = 11.0, Start Service = 13.2, End = 15.8
Wait time = 13.2 - 11.0 = 2.2 ✓ (correct calculation)
```

**Verification Result**: Code correctly implements the designed logic.

### Validation Process

**Step 1: Collect Real Data**

- Actual bank data: Average wait time = 3.5 minutes
- Peak hours: 12 PM - 2 PM
- Average transactions: 150/day

**Step 2: Run Simulation**

- Simulated average wait time = 3.7 minutes
- Simulated peak hours: 12 PM - 2 PM
- Simulated transactions: 148/day

**Step 3: Compare Results**

- Wait time difference: |3.5 - 3.7| = 0.2 minutes (acceptable)
- Peak hours match ✓
- Transaction count: |150 - 148| = 2 (acceptable)

**Step 4: Expert Review**

- Bank managers confirm model behavior seems realistic
- ATM usage patterns match their observations

**Validation Result**: Model accurately represents the real ATM system.

---

## Why Both Are Important

### Without Verification

- Model might have bugs that produce wrong results
- You validate a broken model → waste time
- Example: If code calculates wait time wrong, even accurate arrival data won't help

### Without Validation

- Model might work perfectly but solve the wrong problem
- You verify correct code that models the wrong system
- Example: Perfect code for a single-queue system when reality uses multiple queues

### Best Practice

1. **Verify while building** (continuous debugging)
2. **Validate after major milestones** (compare with reality)
3. **Document all tests** (create credibility)
4. **Iterate** (fix issues and retest)

---

## Common Mistakes to Avoid

1. **Skipping verification**: Assuming code is correct without testing
2. **Late validation**: Waiting until the end to check against reality
3. **Using bad data**: Validating against inaccurate real-world data
4. **Over-validation**: Trying to make model match reality perfectly (impossible)
5. **Ignoring assumptions**: Not documenting or testing model assumptions

---

## Conclusion

- **Verification** = Internal quality check (technical correctness)
- **Validation** = External quality check (real-world accuracy)
- Both are essential for building trustworthy simulation models
- Together they answer: "Did we build the right model correctly?"
