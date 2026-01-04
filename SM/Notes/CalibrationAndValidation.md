# Calibration and Validation in Simulation Modeling

## Overview

After building a simulation model, we need to:

1. **Calibrate** it: Adjust parameters to match real-world data
2. **Validate** it: Verify it accurately represents the real system

Think of it like tuning a musical instrument:

- **Calibration** = Adjusting the strings to get the right pitch
- **Validation** = Playing a song to ensure it sounds correct

---

## Calibration: Tuning the Model

### Definition

Calibration is the process of adjusting model parameters and input values so that model output matches observed real-world data.

### Purpose

- Fine-tune the model to reflect reality
- Estimate unknown parameters
- Improve model accuracy
- Match historical data

### What Gets Calibrated?

1. **Arrival rates** (customers, calls, requests)
2. **Service times** (processing duration)
3. **Resource capacities** (servers, machines)
4. **Probability distributions** (failure rates, demand patterns)
5. **Decision rules** (priority schemes, routing logic)

### Calibration Process

**Step 1: Identify Parameters to Calibrate**

- Which parameters are uncertain?
- Which have the most impact on output?

**Step 2: Collect Real Data**

- Gather historical performance data
- Measure actual system metrics

**Step 3: Run Simulation**

- Use initial parameter estimates
- Record output metrics

**Step 4: Compare and Adjust**

- Compare simulation output vs. real data
- Adjust parameters iteratively
- Re-run simulation

**Step 5: Repeat Until Convergence**

- Continue until output closely matches reality
- Document final parameter values

### Example: Call Center Calibration

**Initial Model**:

- Arrival rate: λ = 100 calls/hour (estimate)
- Service time: μ = 5 minutes (estimate)
- Simulated average wait: 8 minutes

**Real Data**:

- Actual average wait: 12 minutes

**Calibration Steps**:

1. **Try increasing arrival rate**: λ = 120 calls/hour → wait = 10 min
2. **Adjust again**: λ = 130 calls/hour → wait = 11.5 min
3. **Fine-tune**: λ = 132 calls/hour → wait = 12 min ✓

**Result**: Calibrated λ = 132 calls/hour

---

## Validation: Testing the Model

### Definition

Validation is the process of determining whether the calibrated model accurately represents the real system for its intended purpose.

### Purpose

- Build confidence in model results
- Ensure model is fit for decision-making
- Verify assumptions are realistic
- Confirm model solves the right problem

### Validation vs Calibration

| Aspect     | Calibration           | Validation              |
| ---------- | --------------------- | ----------------------- |
| **Action** | Adjusting             | Testing                 |
| **Goal**   | Make model match data | Prove model is accurate |
| **When**   | Before validation     | After calibration       |
| **Focus**  | Parameters            | Overall model behavior  |
| **Output** | Tuned parameters      | Confidence level        |

### Example Continuation: Call Center Validation

**After Calibration** (λ = 132 calls/hour):

**Test 1: Different Time Period**

- Use data from next month
- Simulated wait: 11.8 min
- Actual wait: 12.1 min
- Difference: 2.5% → Valid ✓

**Test 2: Peak vs Off-Peak**

- Peak hours (simulated): 15 min
- Peak hours (actual): 14.5 min
- Close match → Valid ✓

**Test 3: Expert Opinion**

- Show results to call center manager
- Manager confirms patterns look realistic → Valid ✓

**Conclusion**: Model is validated for predicting call center wait times

---

## 3-Step Validation Process

### Step 1: Face Validity (Subjective Test)

**What It Is**:
Asking domain experts if the model and its behavior seem reasonable.

**Questions to Ask**:

- Does the model structure make sense?
- Are the assumptions logical?
- Do the results seem plausible?
- Are we modeling the right things?

**Methods**:

- Present model to stakeholders
- Walk through model logic with experts
- Show animations or visualizations
- Get feedback on assumptions

**Example - Manufacturing Line**:

- Show factory manager simulation animation
- Manager: "Yes, this looks like our actual assembly line"
- Manager: "Wait, you have 3 quality inspectors, we only have 2"
- Fix model → Re-validate

**Outcome**: Initial "gut check" - catches obvious errors

---

### Step 2: Validation of Model Assumptions

**What It Is**:
Testing each assumption made during model development to ensure it's reasonable and realistic.

**Common Assumptions**:

- Statistical distributions (exponential, normal, uniform)
- Independence of events
- Steady-state conditions
- Infinite queue capacity
- System boundaries

**Methods**:

1. **Statistical Tests**: Chi-square, Kolmogorov-Smirnov tests for distributions
2. **Data Analysis**: Check if data supports assumptions
3. **Sensitivity Analysis**: Test impact of changing assumptions
4. **Literature Review**: Verify assumptions against research

**Example - Bank Queue**:

**Assumption 1**: Customer arrivals follow Poisson distribution

- **Test**: Collect arrival time data for 1 week
- **Apply**: Chi-square goodness-of-fit test
- **Result**: p-value = 0.08 (> 0.05) → Assumption valid ✓

**Assumption 2**: Service times are exponentially distributed

- **Test**: Collect service time data
- **Apply**: K-S test for exponential distribution
- **Result**: p-value = 0.03 (< 0.05) → Assumption invalid ✗
- **Fix**: Use actual distribution or try lognormal

**Assumption 3**: All customers behave the same

- **Test**: Analyze customer types (business, personal, elderly)
- **Result**: Service times vary significantly by type
- **Fix**: Add customer classes to model

**Outcome**: Ensures model foundation is sound

---

### Step 3: Input-Output Validation (Objective Test)

**What It Is**:
Comparing simulation output with real system output using actual input data.

**Process**:

1. **Use Real Input Data**: Feed actual historical inputs to simulation
2. **Run Simulation**: Generate output with these inputs
3. **Compare**: Statistical comparison of simulation vs. reality
4. **Quantify Accuracy**: Calculate error metrics

**Comparison Metrics**:

- **Absolute Error**: |Real - Simulated|
- **Percentage Error**: |(Real - Simulated) / Real| × 100%
- **Mean Squared Error**: Average of squared differences
- **Correlation**: How well outputs track together

**Methods**:

1. **Historical Data Validation**: Compare with past data
2. **Turing Test**: Can experts tell real from simulated?
3. **Statistical Tests**: t-tests, ANOVA to compare means
4. **Graphical Comparison**: Plot real vs simulated over time

**Example - Hospital Emergency Room**:

**Real System Data (Last Month)**:

- Average wait time: 45 minutes
- Average patients/day: 120
- Bed utilization: 75%
- Average length of stay: 4.2 hours

**Simulation Output (Using Same Month's Arrivals)**:

- Average wait time: 47 minutes (4.4% error)
- Average patients/day: 118 (1.7% error)
- Bed utilization: 73% (2.7% error)
- Average length of stay: 4.3 hours (2.4% error)

**Statistical Test**:

- t-test for wait times: p-value = 0.12 (no significant difference)
- Conclusion: Model output statistically similar to reality ✓

**Graphical Validation**:

```
Wait Time Comparison
Real:      ████████████████████████ 45 min
Simulated: █████████████████████████ 47 min
```

**Time Series Validation**:

- Plot hourly patient counts: real vs simulated
- Patterns match closely
- Both show peak at 2 PM

**Outcome**: Quantitative proof model works

---

## Complete Example: Supermarket Checkout Simulation

### Scenario

Supermarket wants to determine optimal number of checkout lanes.

### Phase 1: Build Initial Model

- 5 checkout lanes
- Customer arrival rate: λ = 60/hour (estimate)
- Service time: 3-5 minutes (estimate)

### Phase 2: Calibration

**Collect Real Data**:

- Actual average queue length: 8 customers
- Actual average wait: 12 minutes

**Initial Simulation**:

- Simulated queue length: 5 customers
- Simulated wait: 8 minutes

**Calibrate Arrival Rate**:

- Try λ = 75/hour → queue = 6, wait = 9 min
- Try λ = 90/hour → queue = 8.2, wait = 12.1 min ✓

**Calibrate Service Time**:

- Collect sample: some customers take 2 min, some 8 min
- Adjust from uniform(3,5) to triangular(2,4,8)
- Re-run: queue = 7.9, wait = 11.8 min ✓

**Calibrated Parameters**:

- λ = 90 customers/hour
- Service: triangular(2,4,8) minutes

---

### Phase 3: 3-Step Validation

**Step 1: Face Validity**

- Show simulation to store manager
- Manager: "Queue lengths look realistic"
- Manager: "But Friday evenings are busier"
- Action: Add time-varying arrival rates

**Step 2: Validate Assumptions**

| Assumption                | Test            | Result               |
| ------------------------- | --------------- | -------------------- |
| Poisson arrivals          | Chi-square test | Valid ✓              |
| Service time distribution | K-S test        | Valid ✓              |
| FIFO queue discipline     | Observation     | Valid ✓              |
| Customers don't abandon   | Customer survey | 5% leave if >10 wait |

- Action: Add balking behavior for waits >10 min

**Step 3: Input-Output Validation**

**Week 1 Comparison**:
| Metric | Real | Simulated | Error |
|--------|------|-----------|-------|
| Avg wait | 12.3 min | 11.8 min | 4.1% |
| Max queue | 15 | 14 | 6.7% |
| Customers served | 6,480 | 6,520 | 0.6% |
| Lane utilization | 82% | 80% | 2.4% |

**Week 2 Test (Different Data)**:
| Metric | Real | Simulated | Error |
|--------|------|-----------|-------|
| Avg wait | 13.1 min | 12.9 min | 1.5% |
| Customers served | 6,850 | 6,790 | 0.9% |

**Statistical Test**: t-test shows no significant difference (p = 0.18)

**Outcome**: Model is validated and ready for decision-making

---

### Phase 4: Use Model for Decisions

Now the validated model can answer:

- What if we add a 6th lane?
- What if we open express lanes?
- What's the impact of self-checkout?

---

## Calibration Techniques

### 1. Trial and Error

- Manually adjust parameters
- Simple but time-consuming
- Good for small models

### 2. Optimization Methods

- Use algorithms to find best parameters
- Minimize error between model and reality
- Methods: gradient descent, genetic algorithms

### 3. Expert Estimation

- Use domain knowledge
- Quick initial estimates
- Refine with data

### 4. Sensitivity Analysis

- Test which parameters matter most
- Focus calibration effort on important ones

---

## Common Validation Mistakes

1. **Using same data for calibration and validation**

   - Solution: Use separate datasets (training vs testing)

2. **Validating too early**

   - Solution: Complete calibration first

3. **Accepting small sample sizes**

   - Solution: Collect enough data for statistical significance

4. **Ignoring expert feedback**

   - Solution: Involve stakeholders throughout

5. **Over-calibrating**

   - Solution: Accept reasonable accuracy, not perfection

6. **Not documenting**
   - Solution: Record all tests, assumptions, and results

---

## When Is a Model "Good Enough"?

### Criteria

1. **Error < 10%** for key metrics (or industry standard)
2. **Statistical tests** show no significant difference
3. **Experts agree** model is reasonable
4. **Multiple validation tests** passed
5. **Assumptions documented** and tested
6. **Sensitive parameters** identified and calibrated

### Trade-offs

- More accuracy = more time/cost
- Purpose matters: rough estimate vs critical decision
- Diminishing returns on over-validation

---

## Summary

### Calibration Process

1. Build initial model with estimates
2. Collect real system data
3. Run simulation with initial parameters
4. Compare output to real data
5. Adjust parameters iteratively
6. Repeat until good fit

### Validation Process

1. **Face Validity**: Expert review
2. **Assumption Validation**: Test each assumption
3. **Input-Output Validation**: Compare with real data

### Key Takeaway

- **Calibration** = Making the model fit
- **Validation** = Proving the model fits
- Both essential for credible simulation
- Iterative process, not one-time event
- Document everything for transparency
