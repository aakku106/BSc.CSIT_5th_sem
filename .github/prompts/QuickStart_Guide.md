# Start Guide for 5th Semester Material Generation

## For AI Agents: How to Use This Repository

This guide helps Claude Sonnet 4.5, GPT-5, and Gemini 2.5 Pro understand their roles in generating comprehensive exam preparation materials.

---

## Prerequisites

### Materials Per Subject

Before starting analysis, ensure you have:

- ✅ Syllabus PDF
- ✅ 2076 Question Paper
- ✅ 2077 Question Paper
- ✅ 2078 Question Paper
- ✅ 2079 Question Paper
- ✅ 2080 Question Paper
- ✅ 2081 Question Paper
- ✅ Model Question Paper

**Total:** ~8 documents per subject × 6 subjects = ~48 documents

---

## Agent Roles Quick Reference

### Sonnet 4.5 → CS4.5.md

**Role:** Strategic Analyst  
**Output:** ~5000-7000 words  
**Focus:** Patterns, frequencies, priorities, study plans

### → G5.md

**Role:** Content Expert  
**Output:** ~8000-12000 words  
**Focus:** Detailed answers, explanations, examples

### 2.5 Pro → G2.5_p.md

**Role:** Visual Designer  
**Output:** ~4000-6000 words  
**Focus:** Diagrams, tables, flashcards, summaries

### 3 Pro → 2DayPrep/survival_guide.md

**Role:** Emergency Prep Specialist  
**Output:** ~2000-3000 words  
**Focus:** Minimum content for 35+ marks in 2 days  
**Analyzes:** CS4.5.md + G5.md + G2.5_p.md

---

## Step-by-Step Workflow

### 1: Data Preparation (Manual)

1. **Create folder structure:**

   ```bash
   mkdir -p [Subject]/qtn_sets_and_syllabus
   mkdir -p [Subject]/imp_qtns/2DayPrep
   ```

2. **Add question papers:**

   - Place all PDFs in `qtn_sets_and_syllabus/` folder
   - Name them clearly: `2076_questions.pdf`, `syllabus.pdf`, etc.

3. **Verify completeness:**
   - Check all 8 documents are present
   - Ensure PDFs are readable
   - Confirm syllabus is current version

### 2: Analysis by Claude Sonnet 4.5

**Task:** Create CS4.5.md

**Input Prompt Template:**

```
I have the following materials for [Subject Name - Full Name]:
- Syllabus: [paste or attach]
- Question Sets: 2076, 2077, 2078, 2079, 2080, 2081, Model Questions

Please analyze these materials and create a comprehensive strategic exam analysis following this structure:

1. Overview Statistics
2. Frequency Analysis (High/Medium/Low priority questions)
3. Chapter-wise Analysis (for EACH chapter):
   - Importance level
   - Expected marks
   - Question frequency
   - Key topics
   - Important questions with years
   - Study priority rating
   - Time investment
4. Strategic Study Plans (30/15/7/2 days)
5. Expected Marks Distribution
6. Exam Strategy
7. Must-Study Questions
8. Common Mistakes to Avoid

Calculate importance using:
Importance Score = (Frequency × 0.4) + (Marks × 0.3) + (Recency × 0.3)

Format the output as a comprehensive markdown document (~5000-7000 words) named CS4.5.md.
```

**Deliverables:**

- [ ] CS4.5.md file created
- [ ] All chapters analyzed
- [ ] Frequency data calculated
- [ ] Study plans for 4 timeframes
- [ ] Priority rankings assigned

### 3: Content Creation by GPT-5

**Task:** Create G5.md

**Input Prompt Template:**

```
Based on the strategic analysis by Claude Sonnet 4.5 for [Subject Name], I need you to create a comprehensive Q&A guide.

Reference: [Provide CS4.5.md content or key findings]

For each HIGH and MEDIUM priority question identified:

1. Write the complete question
2. Provide detailed answer (appropriate for exam length)
3. Include diagrams/examples where applicable
4. List key points to remember
5. Note common mistakes
6. Provide question variations

Additionally include:
- Quick revision notes per chapter
- Practice problems with solutions
- Formula/algorithm sheet
- Exam-specific tips for this subject

Format as markdown document (~8000-12000 words) named G5.md with proper navigation and structure.
```

**Deliverables:**

- [ ] G5.md file created
- [ ] All high-priority questions answered
- [ ] Medium-priority questions covered
- [ ] Examples and diagrams included
- [ ] Practice problems added

### 4: Visual Materials by Gemini 2.5 Pro

**Task:** Create G2.5_p.md

**Input Prompt Template:**

```
For [Subject Name], create comprehensive visual learning materials based on:

Strategic analysis: [CS4.5.md key points]
Q&A content: [G5.md structure]

Create:

1. Subject Overview Mind Map (ASCII or Mermaid diagram)
2. For each chapter:
   - Concept map
   - Quick facts table
   - Comparison charts (if applicable)
   - Flowcharts for processes
3. Flashcards (50-60 covering all topics):
   - Question side
   - Answer side
   - Marks value
4. Topic Interconnections
5. One-page chapter summaries
6. Memory techniques (mnemonics, patterns)
7. Topic Priority Matrix (table format)
8. Study Tracker Checklist

Format as visual-heavy markdown (~4000-6000 words) named G2.5_p.md.
Use tables, ASCII art, and structured layouts extensively.
```

**Deliverables:**

- [ ] G2.5_p.md file created
- [ ] Mind maps/concept maps included
- [ ] 50-60 flashcards created
- [ ] One-page summaries for all chapters
- [ ] Visual aids and tables added

### 5: Emergency Prep (Gemini 3 Pro)

**Task:** Create 2DayPrep/survival_guide.md

**Input Prompt Template:**

```
You are Gemini 3 Pro. Analyze all three comprehensive files created for [Subject Name]:

1. CS4.5.md (Strategic analysis by Claude Sonnet 4.5)
2. G5.md (Detailed Q&A by GPT-5)
3. G2.5_p.md (Visual materials by Gemini 2.5 Pro)

Based on this complete analysis, create a 2-day survival guide that guarantees 35+ marks.

Extract insights from:
- CS4.5.md: High-priority topics
- G5.md: Essential questions
- G2.5_p.md: Quick revision aids

Structure:

1. Time Allocation
   - Day 1: 8-10 hours breakdown
   - Day 2: 6-8 hours breakdown
   - Exam morning: 2-3 hours

2. Guaranteed 35+ Marks Strategy
   - Exactly which topics to study
   - Exactly which questions to practice

3. Must-Memorize Content
   - Definitions (with marks value)
   - Diagrams (with marks value)
   - Formulas/Algorithms (with marks value)

4. Question Selection Strategy
   - Which questions to attempt
   - Time management
   - Section-wise approach

5. Ultra-Quick Revision Points
   - Only 4-5 most important chapters
   - Bullet points only
   - One key question per chapter

6. What to Skip
   - Low-value topics
   - Too complex for 2-day prep

7. Exam Day Checklist

Output: survival_guide.md (~2000-3000 words) in 2DayPrep folder.
Tone: Urgent, direct, no fluff.
```

**Deliverables:**

- [ ] survival_guide.md created in 2DayPrep/ folder
- [ ] Hour-by-hour schedule provided
- [ ] Must-memorize content listed
- [ ] Question selection strategy clear
- [ ] Realistic 35+ marks path outlined

---

## Quality Checklist

### Subject Completion Checklist

#### Created

- [ ] `qtn_sets_and_syllabus/` folder with all 8 PDFs
- [ ] `imp_qtns/CS4.5.md` (5000-7000 words)
- [ ] `imp_qtns/G5.md` (8000-12000 words)
- [ ] `imp_qtns/G2.5_p.md` (4000-6000 words)
- [ ] `imp_qtns/2DayPrep/survival_guide.md` (2000-3000 words)

#### Quality

- [ ] Frequency data accurate (cross-checked with all 7 question sets)
- [ ] All syllabus chapters covered
- [ ] Priority rankings justified
- [ ] Study plans realistic and actionable
- [ ] Answers comprehensive and exam-appropriate
- [ ] Visual materials clear and useful
- [ ] 2-day guide actually achievable
- [ ] Cross-references between files working

####

- [ ] CS4.5.md priorities match G5.md coverage
- [ ] G2.5_p.md flashcards cover CS4.5.md high-priority topics
- [ ] 2DayPrep pulls from all three main files
- [ ] No contradictions between agent outputs
- [ ] Consistent terminology used

---

## Subject Order Recommendation

Complete subjects in this order for efficiency:

1. **DAA** (Design and Analysis of Algorithms)

   - Typically has clear algorithm patterns
   - Good for establishing workflow

2. **WT** (Web Technology)

   - Practical subject, easier to analyze
   - Visual elements work well

3. **Cryptography**

   - Mathematical patterns
   - Medium complexity

4. **SAD** (System Analysis and Design)

   - Diagram-heavy, good for testing visual formats
   - Moderate difficulty

5. **SM** (Simulation and Modeling)

   - Mathematical, may need more time
   - Complex concepts

6. **SEIT** (Society and Ethics)
   - Theory-based
   - May have different question patterns

---

## Success Metrics

### Goals

- [ ] 100% syllabus coverage
- [ ] 80%+ question coverage (from 7 years)
- [ ] 4 study plans per subject (30/15/7/2 days)
- [ ] 50-60 flashcards per subject
- [ ] Realistic 35+ marks path in 2-day guide

### Goals

- [ ] Clear, student-friendly language
- [ ] Actionable advice (not vague)
- [ ] Consistent formatting
- [ ] Helpful visual aids
- [ ] Encouraging tone

---

## Troubleshooting

### Issues

**Issue:** Can't access all question papers
**Solution:** Start with available papers, note gaps, update when papers available

**Issue:** Syllabus unclear or outdated
**Solution:** Use question paper patterns to infer current topics, note assumption

**Issue:** Conflicting information between question sets
**Solution:** Document both versions, mark as "variable question"

**Issue:** Too many questions to cover
**Solution:** Strictly apply importance scoring, focus on score > 0.7

**Issue:** Subject has unique format
**Solution:** Adapt templates as needed, maintain core structure

---

## Progress Tracking

### This Table

| Subject | Data | CS4.5 | G5  | G2.5_p | 2Day | Verified | Status      |
| ------- | ---- | ----- | --- | ------ | ---- | -------- | ----------- |
| DAA     | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |
| SAD     | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |
| Cripto  | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |
| SM      | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |
| WT      | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |
| SEIT    | ⏳   | ⏳    | ⏳  | ⏳     | ⏳   | ⏳       | Not Started |

Update as: ⏳ → 🔄 → ✅

---

## Pro Tips for Agents

### Claude Sonnet 4.5

- Create frequency tables before analyzing
- Use consistent importance scoring formula
- Make study plans specific (not generic)
- Include time estimates for each topic

### GPT-5

- Write answers at appropriate exam length
- Include examples that fit exam time constraints
- Provide answer frameworks students can memorize
- Balance depth with exam practicality

### Gemini 2.5 Pro

- Keep visuals simple (ASCII works better than complex diagrams)
- Make flashcards atomic (one concept each)
- One-page summaries should truly fit one page
- Tables should be scannable quickly

### 2-Day Guide (All)

- Be brutally selective (quality over quantity)
- Hour-by-hour schedule must be realistic
- Focus on memorizable content
- Question selection strategy is critical

---

## File Linking Strategy

Within each subject's files, create navigation:

**In CS4.5.md:**

```markdown
## Materials

- [Detailed Q&A Guide](./G5.md)
- [Visual Learning Materials](./G2.5_p.md)
- [2-Day Emergency Prep](./2DayPrep/survival_guide.md)
- [Question Papers](../qtn_sets_and_syllabus/)
```

**In G5.md:**

```markdown
##

- [Strategic Analysis](./CS4.5.md) - See priority rankings
- [Visual Aids](./G2.5_p.md) - Diagrams and flashcards
- [Emergency Prep](./2DayPrep/survival_guide.md)
```

**In G2.5_p.md:**

```markdown
## Guides

- [Study Strategy](./CS4.5.md) - When to use these visuals
- [Detailed Answers](./G5.md) - Full explanations
- [Quick Prep](./2DayPrep/survival_guide.md)
```

---

## Timeline Recommendation

### Schedule (Per Subject)

- **Day 1:** Data collection and verification (1 hour)
- **Day 2-3:** CS4.5.md creation and review (6-8 hours)
- **Day 4-6:** G5.md content creation (10-12 hours)
- **Day 7-8:** G2.5_p.md visual materials (6-8 hours)
- **Day 9:** 2DayPrep guide (3-4 hours)
- **Day 10:** Cross-verification and final review (2-3 hours)

**Total per subject:** ~30-35 hours of work  
**For 6 subjects:** ~180-210 hours total

---

## Final Checklist Before Moving to Next Subject

- [ ] All 4 main files created and properly formatted
- [ ] Word counts within target ranges
- [ ] Cross-references working
- [ ] No contradictions between files
- [ ] Files saved in correct locations
- [ ] README.md status updated
- [ ] Quality spot-check passed
- [ ] Ready for student use

---

## Remember

**Quality > Speed**

It's better to complete one subject thoroughly than rush through all six with gaps.

**Students depend on accuracy**

Double-check frequency counts and importance scores.

**Test usability**

Would this actually help a student with 2 days left? If not, revise.

---

## Need Help?

If agents encounter issues:

1. Document the issue
2. Note which subject and file
3. Describe expected vs actual
4. Suggest solution or alternative

Keep a log of decisions made for consistency.

---

**Good luck generating excellent exam prep materials!** 🚀

---

**Document Version:** 1.0  
**Last Updated:** November 30, 2025  
**For:** Claude Sonnet 4.5, GPT-5, Gemini 2.5 Pro
