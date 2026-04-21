# Systems Analysis and Design (SAD) — Trend Analysis (2076, 2078–2081 + Model)

Goal: secure pass mark (24) with a safer buffer (30+).

---

## Scope and method

**Question sets analyzed (6):** 2076, 2078, 2079, 2080, 2081, Model question set.

- **Note:** 2077 was not found in the folder, so it is not included.

**Syllabus coverage:** Units 1–6 (full syllabus).

**How “frequency” is counted:**

- `x/6` = the topic appears in `x` out of the 6 analyzed sets (at least once in that set).

**Exam pattern assumed (from the sets):**

- **Group A:** Attempt any 2 out of 3 (long questions)
- **Group B:** Attempt any 8 out of 12 (short questions)
- Typical weight seen in sets: **Group A ≈ 10 marks each**, **Group B ≈ 5 marks each**

Priority labels used below:

- **P1 (Core):** highest frequency + high scoring value (cover first)
- **P2 (High):** common and scoring (cover next)
- **P3 (Support):** lower frequency but still in syllabus (cover if time)

---

## 1) Overall most repeated topic clusters (quick ranking)

| Rank | Topic cluster (what repeats)                                                                             | Unit(s)    | Frequency | Appears in (paper-question refs)            |
| ---: | -------------------------------------------------------------------------------------------------------- | ---------- | --------: | ------------------------------------------- |
|    1 | Requirements determination methods (JAD / observation / group interview / prototyping / disruptive tech) | 3.1        |       5/6 | 2076-B8, 2078-B8, 2079-B7, 2080-B7, 2081-B9 |
|    2 | DFD (context + level-0 + balancing + decomposition)                                                      | 3.2        |       4/6 | 2076-A3, 2079-A2, 2080-A2, Model-A2         |
|    3 | Development approaches: SDLC + waterfall issues + prototyping + agile (as long questions)                | 1.1–1.2    |       4/6 | 2076-A1, 2078-A1, 2080-A1, 2081-A1          |
|    4 | Structured logic: decision table / reduced decision table / decision tree / structured English           | 3.2        |       4/6 | 2076-B12, 2078-B12, 2081-A2, Model-A3       |
|    5 | Data modeling: conceptual data modeling + ER modeling + “process vs data modeling”                       | 3.3 (+3.2) |       4/6 | 2078-A3, 2079-B8, 2080-B8, 2081-B10         |
|    6 | Project management (phases/activities/skills; scheduling artifacts like PERT/network)                    | 1.3        |       4/6 | 2078-B6, 2079-B4, 2080-B4/B12, 2081-B4/B12  |
|    7 | Feasibility study (categories; economic/schedule)                                                        | 2.2        |       3/6 | 2076-A2, 2080-B6, Model-B11                 |
|    8 | Financial justification numericals (NPV/ROI/breakeven/payback/discounted payback)                        | 2.2        |       3/6 | 2078-A2, 2081-B11, Model-B9                 |
|    9 | CASE tools (need/components/role in SDLC phases)                                                         | 1.1        |       3/6 | 2078-B5, 2079-B11, 2081-B5                  |
|   10 | Testing (black-box vs white-box; stages/process; techniques)                                             | 5.1        |       3/6 | 2078-B10, 2079-A1, 2081-A3                  |

---

## 2) Group-wise repeated topics and questions

### Group A — Long questions trend (attempt 2 out of 3)

| Rank | Topic asked in Group A                                            | Unit(s) | Frequency | Where it appears                    | What to prepare (exam deliverable)                                                                 | Priority |
| ---: | ----------------------------------------------------------------- | ------- | --------: | ----------------------------------- | -------------------------------------------------------------------------------------------------- | -------- |
|    1 | DFD (context + level-0/1/2 + balancing)                           | 3.2     |       4/6 | 2076-A3, 2079-A2, 2080-A2, Model-A2 | 1 clean context diagram + level-0 + one decomposition; 4–6 line balancing explanation              | P1       |
|    2 | SDLC / waterfall problems / prototyping / agile                   | 1.1–1.2 |       4/6 | 2076-A1, 2078-A1, 2080-A1, 2081-A1  | SDLC phases + short diagram + compare table (waterfall vs prototyping vs agile)                    | P1       |
|    3 | Testing (black-box vs white-box; stages/process)                  | 5.1     |       2/6 | 2079-A1, 2081-A3                    | Comparison table + testing levels/stages + short process flow                                      | P2       |
|    4 | Decision table / structured English (structured logic)            | 3.2     |       2/6 | 2081-A2, Model-A3                   | Conditions/actions, rules, reduced table; or structured English steps                              | P2       |
|    5 | Feasibility categories / financial evaluation (NPV/ROI/breakeven) | 2.2     |       2/6 | 2076-A2, 2078-A2                    | Definitions (technical/economic/operational/schedule) + one numerical template (NPV/ROI/breakeven) | P2       |
|    6 | Conceptual data model + ER diagram (long)                         | 3.3     |       1/6 | 2078-A3                             | Steps to gather/model data + ER diagram with keys/cardinalities                                    | P3       |
|    7 | Physical DB design + logical vs physical                          | 4.1     |       1/6 | 2080-A3                             | Difference table + why physical design matters + examples (index/file organization)                | P3       |
|    8 | OO vs structured + use case & class diagram                       | 6       |       1/6 | 2079-A3                             | Short compare + a small use-case diagram + a small class diagram                                   | P3       |
|    9 | Modern approach to SAD                                            | 1.1     |       1/6 | Model-A1                            | 6–8 points: iterative/incremental, user involvement, CASE, prototyping, timeboxing, etc.           | P3       |

### Group B — Short questions trend (attempt 8 out of 12)

| Rank | Topic asked in Group B                                                                             | Unit(s) |      Frequency | Where it appears                            | What to prepare (5-mark style)                                                        | Priority |
| ---: | -------------------------------------------------------------------------------------------------- | ------- | -------------: | ------------------------------------------- | ------------------------------------------------------------------------------------- | -------- |
|    1 | Requirements determination methods (JAD, observation, interviews, prototyping, disruptive/radical) | 3.1     |            5/6 | 2076-B8, 2078-B8, 2079-B7, 2080-B7, 2081-B9 | Definition + method steps + 3 advantages + 2 limitations (or compare table)           | P1       |
|    2 | Project management (phases/skills/activities) + scheduling artifacts (PERT/network)                | 1.3     |            4/6 | 2078-B6, 2079-B4, 2080-B4/B12, 2081-B4/B12  | PM phases + responsibilities + 5 key skills; know PERT vs network diagram basics      | P1       |
|    3 | CASE tools (need, components, role in SDLC phases)                                                 | 1.1     |            3/6 | 2078-B5, 2079-B11, 2081-B5                  | Definition + components + phase-wise support (analysis/design/testing)                | P1       |
|    4 | Project initiation and planning process                                                            | 2.2     |            3/6 | 2076-B6, 2078-B7, 2079-B6                   | Steps list + baseline plan items + key outputs/deliverables                           | P1       |
|    5 | Maintenance (types + major activities)                                                             | 5.2     |            3/6 | 2076-B10, 2079-B10, 2080-B10                | 4 types (corrective/adaptive/perfective/preventive) + activities                      | P1       |
|    6 | Interfaces / interaction methods (designing effective interfaces; methods/devices)                 | 4.3     |            3/6 | 2080-B9, 2081-B7, Model-B4                  | Guidelines (consistency, feedback, error prevention, shortcuts) + interaction methods | P2       |
|    7 | Financial justification short numerical (payback/discounted payback)                               | 2.2     |            2/6 | 2081-B11, Model-B9                          | Payback steps; discounted payback using PV of cash inflows                            | P2       |
|    8 | Corporate strategic planning (steps)                                                               | 2.1     |            2/6 | 2080-B5, Model-B10                          | Stepwise process + outputs (mission/objectives/portfolio/priorities)                  | P2       |
|    9 | Forms and reports (compare + formatting guidelines)                                                | 4.2     |            2/6 | 2076-B9, 2079-B9                            | Compare table + formatting/usability guidelines                                       | P2       |
|   10 | Use case modeling / diagrams (and often paired with class diagram)                                 | 6       |            2/6 | 2081-B6, Model-B12                          | Use-case elements + a small example diagram; include actors/use cases/relationships   | P2       |
|   11 | Class diagram (definition + example)                                                               | 6       | 3/6 (as short) | 2078-B11, 2080-B11, 2081-B6                 | Class box (attributes/operations) + relationships (assoc/aggregation/inheritance)     | P2       |
|   12 | DB design: logical vs physical (and physical DB design importance)                                 | 4.1     | 2/6 (as short) | 2078-B9, Model-B6                           | Compare table + examples (indexes, storage, file organization)                        | P2       |
|   13 | Baseline project plan (short note)                                                                 | 2.2     |            1/6 | 2079-B11                                    | Components: scope, schedule, costs, risks, resources, milestones                      | P3       |
|   14 | System implementation steps                                                                        | 5.1     |            1/6 | Model-B7                                    | Implementation steps + testing/installation/training/documentation                    | P3       |
|   15 | Normalization (2NF + advantages)                                                                   | 4.1     |            1/6 | 2081-B8                                     | Definition + anomalies + 1NF→2NF example                                              | P3       |

---

## 3) Unit-wise importance (ranked for a 24 → 30+ plan)

This table ranks units by **scoring efficiency** based on repeated questions in the analyzed sets.

| Unit rank | Unit                                      | High-yield topics to cover first (with set-frequency)                                                                               | Typical question forms seen                                         | Practical target marks (30+ plan) |
| --------: | ----------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------- | --------------------------------: |
|         1 | **Unit 3 — Analysis**                     | DFD (4/6), requirements methods (5/6), decision table/tree/structured English (4/6), conceptual/ER modeling (4/6)                   | One long (DFD) + multiple shorts                                    |                             12–18 |
|         2 | **Unit 2 — Planning**                     | Feasibility categories (3/6), financial numericals (3/6), initiation & planning (3/6), project selection + corporate planning (2/6) | Long (feasibility/NPV) or short lists/steps                         |                              8–12 |
|         3 | **Unit 1 — Foundations**                  | SDLC/waterfall/prototyping/agile (4/6 in Group A), CASE tools (3/6), project management (4/6)                                       | One long (SDLC/approaches) + shorts (CASE/PM)                       |                              8–12 |
|         4 | **Unit 6 — OO Development**               | Use case modeling (3/6 overall), class diagram (4/6 overall), OO vs structured (2/6), UML structural/behavioral (1/6)               | Short diagram questions; sometimes long compare                     |                              6–10 |
|         5 | **Unit 5 — Implementation & Maintenance** | Testing (3/6), maintenance (3/6), implementation steps (1/6)                                                                        | One long (testing) + shorts (maintenance)                           |                              6–10 |
|         6 | **Unit 4 — Design**                       | Logical vs physical DB design (3/6 overall), interfaces/interactions (3/6), forms/reports (2/6), normalization 2NF (1/6)            | Short compare + guideline questions; sometimes long physical design |                              6–10 |

---

## 4) Must-do question list (practice set)

Use this list like a checklist. If time is limited, finish **P1** first.

| Priority | Question(s) to practice                     | Topic                                                                         | Why it matters                                                            |
| -------- | ------------------------------------------- | ----------------------------------------------------------------------------- | ------------------------------------------------------------------------- |
| P1       | 2076-A3, 2079-A2, 2080-A2, Model-A2         | DFD (context → level-0/1/2) + balancing                                       | Most repeated long question pattern; high scoring when diagrams are clean |
| P1       | 2076-A1, 2078-A1, 2080-A1, 2081-A1          | SDLC + waterfall issues + prototyping + agile                                 | Appears repeatedly as long question; easy marks with a compare table      |
| P1       | 2076-B8, 2079-B7, 2080-B7, 2078-B8, 2081-B9 | Requirements methods (group interview/JAD/observation/prototyping/disruptive) | Highest overall frequency; very common short questions                    |
| P1       | 2076-A2, 2080-B6, Model-B11                 | Feasibility categories (esp. economic/schedule)                               | Repeats across years; often asked directly                                |
| P1       | 2078-A2 + (template), 2081-B11, Model-B9    | Financial numericals (NPV/ROI/breakeven/payback/discounted payback)           | A reliable scoring area if you practice one clean template                |
| P1       | 2078-B5, 2079-B11, 2081-B5                  | CASE tools (need/components/role)                                             | Common 5-mark theory; easy to structure                                   |
| P1       | 2078-B6, 2079-B4, 2080-B4, 2081-B4          | Project management (phases/skills/activities)                                 | High frequency short; also supports planning questions                    |
| P1       | 2076-B10, 2079-B10, 2080-B10                | System maintenance (types + activities)                                       | Repeats; straightforward 5-mark answer                                    |
| P2       | 2081-A2, Model-A3, 2076-B12, 2078-B12       | Decision table/tree + structured English                                      | Appears both in long and short formats                                    |
| P2       | 2078-A3, 2079-B8, 2080-B8, 2081-B10         | Conceptual data modeling + ER + process vs data modeling                      | Repeated analysis-unit scoring area                                       |
| P2       | 2078-B9, 2080-A3, Model-B6                  | Logical vs physical DB design + physical design importance                    | Common compare question; compact table answer                             |
| P2       | 2076-B9, 2079-B9                            | Forms vs reports + formatting guidelines                                      | Repeats; easy marks if you memorize guidelines                            |
| P2       | 2081-B7, 2080-B9, Model-B4                  | Interface design + interaction methods                                        | Appears across sets; aligns with Unit 4.3                                 |
| P2       | 2079-A1, 2081-A3, 2078-B10                  | Testing (black vs white; stages; techniques)                                  | Common long/short; can be answered with a clean table                     |
| P2       | 2081-B6, 2079-A3, Model-B12                 | Use case modeling (+ class diagram where asked)                               | OO unit repeats; diagram practice helps                                   |
| P3       | 2081-B8                                     | Normalization + 2NF (with example)                                            | Low frequency in sets but in full syllabus; cover if time                 |
| P3       | 2080-B12, 2081-B12                          | Network diagram / PERT / deliverables                                         | Appears as short notes; prepare definitions and small examples            |
| P3       | Model-B7                                    | System implementation steps                                                   | Appeared in model set; prepare a stepwise answer                          |

---

## 5) Attempt strategy (pass-first, then 30+)

### A. Group A (2 long answers)

- **Primary safe pair:** DFD + (SDLC/approaches).
- **Backup topics to ensure choice in any paper:** decision table OR testing.
- **How to write long answers (fast):**
  1. Start with a 2–3 line definition.
  2. Draw the diagram/table neatly with labels.
  3. Add a short explanation in points (balancing, assumptions, merits/demerits, etc.).

### B. Group B (choose the first 8 you can answer cleanly)

A high-probability set of 8 short-answer areas (based on repetition):

1. Requirements methods (JAD/observation/interviews/prototyping)
2. CASE tools
3. Project management phases/skills
4. Project initiation and planning
5. Feasibility categories
6. Maintenance types + activities
7. Class diagram / use case basics
8. Logical vs physical database design

### C. 30+ scoring rule of thumb

- 2 long answers done well ≈ **20 marks**.
- Add 3 short answers done well ≈ **15 marks**.
- This gives a practical target of **~35**, leaving room for minor mistakes.

---

## 6) Minimal revision checklist (what to memorize)

- **DFD:** context vs level-0, balancing rule, how to name processes/data stores/data flows.
- **SDLC & approaches:** SDLC phases + 5 waterfall problems + prototyping advantages/limitations + 4 agile points.
- **Feasibility:** technical/economic/operational/schedule (and how to write economic feasibility).
- **NPV/payback:** PV factor use, step-by-step table format, interpretation line.
- **Requirements methods:** interview vs JAD vs observation vs prototyping (compare table).
- **Decision table/tree:** conditions/actions, rules, reduced decision table.
- **Conceptual/ER:** entities, attributes, relationships, cardinalities; convert to relations (basic).
- **OO diagrams:** use case elements; class diagram basics (association/inheritance).
- **Maintenance:** types + common activities.
