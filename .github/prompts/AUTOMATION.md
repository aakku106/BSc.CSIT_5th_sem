# One-Click Project Automation Script

## Purpose

This script automates the entire 5th semester exam preparation materials generation process. When you say "Go", it will orchestrate all AI agents to work on all subjects simultaneously.

## Prerequisites

Before running automation:

- All question papers collected (7 per subject × 6 subjects = 42 PDFs)
- All syllabi collected (6 PDFs)
- All materials organized in respective qtn_sets_and_syllabus folders
- AI API keys configured for Claude, GPT, and Gemini

## Agent Assignment

### Agent 1: Claude Sonnet 4.5

**Generates:** CS4.5.md for each subject
**Input:** Question papers + Syllabus
**Output:** Strategic analysis (~5000-7000 words)

### Agent 2: GPT-5

**Generates:** G5.md for each subject
**Input:** CS4.5.md + Question papers + Syllabus
**Output:** Detailed Q&A (~8000-12000 words)

### Agent 3: Gemini 2.5 Pro

**Generates:** G2.5_p.md for each subject
**Input:** CS4.5.md + G5.md
**Output:** Visual materials (~4000-6000 words)

### Agent 4: Gemini 3 Pro

**Generates:** 2DayPrep/survival_guide.md for each subject
**Input:** CS4.5.md + G5.md + G2.5_p.md
**Output:** Emergency 2-day guide (~2000-3000 words)
**Reference:** https://github.com/aakku106/4thSem_impQtns/tree/main/DBMS/imp_qtns/2DayPrep

## Automation Workflow

```
START
  |
  v
[Verify All Materials Present]
  |
  v
[FOR EACH SUBJECT: DAA, SAD, Cripto, SM, WT, SEIT]
  |
  +--> [STEP 1: Claude Sonnet 4.5]
  |    |
  |    +-- Read: /[Subject]/qtn_sets_and_syllabus/*
  |    +-- Read: /.github/prompts/5thSem_Generation_Prompt.md (Claude section)
  |    +-- Read: /.github/prompts/CS4.5_Template_Example.md
  |    +-- Write: /[Subject]/imp_qtns/CS4.5.md
  |    +-- Log: Progress to console
  |
  +--> [STEP 2: GPT-5] (Waits for Step 1)
  |    |
  |    +-- Read: /[Subject]/imp_qtns/CS4.5.md
  |    +-- Read: /[Subject]/qtn_sets_and_syllabus/*
  |    +-- Read: /.github/prompts/5thSem_Generation_Prompt.md (GPT-5 section)
  |    +-- Write: /[Subject]/imp_qtns/G5.md
  |    +-- Log: Progress to console
  |
  +--> [STEP 3: Gemini 2.5 Pro] (Waits for Step 2)
  |    |
  |    +-- Read: /[Subject]/imp_qtns/CS4.5.md
  |    +-- Read: /[Subject]/imp_qtns/G5.md
  |    +-- Read: /.github/prompts/5thSem_Generation_Prompt.md (Gemini 2.5 section)
  |    +-- Write: /[Subject]/imp_qtns/G2.5_p.md
  |    +-- Log: Progress to console
  |
  +--> [STEP 4: Gemini 3 Pro] (Waits for Step 3)
       |
       +-- Read: /[Subject]/imp_qtns/CS4.5.md
       +-- Read: /[Subject]/imp_qtns/G5.md
       +-- Read: /[Subject]/imp_qtns/G2.5_p.md
       +-- Read: /.github/prompts/5thSem_Generation_Prompt.md (Gemini 3 section)
       +-- Reference: https://github.com/aakku106/4thSem_impQtns/tree/main/DBMS/imp_qtns/2DayPrep
       +-- Create: /[Subject]/imp_qtns/2DayPrep/
       +-- Write: /[Subject]/imp_qtns/2DayPrep/survival_guide.md
       +-- Log: Progress to console
  |
  v
[Cross-Verification Phase]
  |
  +-- Check: All 4 files created per subject
  +-- Check: Word counts within range
  +-- Check: No contradictions
  +-- Check: Cross-references work
  +-- Generate: Quality report
  |
  v
[Update README.md Progress Table]
  |
  v
[Generate Summary Report]
  |
  v
COMPLETE
```

## File Structure Map for Automation

```
/Users/aakku/Desktop/5th_sem/

Input Files (Manual):
├── DAA/qtn_sets_and_syllabus/
│   ├── syllabus.md (or .pdf)
│   ├── 2076_questions.pdf
│   ├── 2077_questions.pdf
│   ├── 2078_questions.pdf
│   ├── 2079_questions.pdf
│   ├── 2080_questions.pdf
│   ├── 2081_questions.pdf
│   └── model_questions.pdf
├── SAD/qtn_sets_and_syllabus/ [same structure]
├── Cripto/qtn_sets_and_syllabus/ [same structure]
├── SM/qtn_sets_and_syllabus/ [same structure]
├── WT/qtn_sets_and_syllabus/ [same structure]
└── SEIT/qtn_sets_and_syllabus/ [same structure]

Configuration Files (Auto-read):
├── .github/prompts/
│   ├── 5thSem_Generation_Prompt.md
│   ├── CS4.5_Template_Example.md
│   ├── QuickStart_Guide.md
│   └── AUTOMATION.md (this file)

Output Files (Auto-generated):
├── DAA/imp_qtns/
│   ├── CS4.5.md (by Claude Sonnet 4.5)
│   ├── G5.md (by GPT-5)
│   ├── G2.5_p.md (by Gemini 2.5 Pro)
│   └── 2DayPrep/
│       └── survival_guide.md (by Gemini 3 Pro)
├── SAD/imp_qtns/ [same structure]
├── Cripto/imp_qtns/ [same structure]
├── SM/imp_qtns/ [same structure]
├── WT/imp_qtns/ [same structure]
└── SEIT/imp_qtns/ [same structure]
```

## Prompt Templates for Automation

### For Claude Sonnet 4.5 (CS4.5.md)

```
SYSTEM: You are Claude Sonnet 4.5, an expert at strategic analysis and pattern recognition.

TASK: Create CS4.5.md for [SUBJECT_NAME]

INPUT_FILES:
- Syllabus: /Users/aakku/Desktop/5th_sem/[SUBJECT]/qtn_sets_and_syllabus/syllabus.md
- Questions: /Users/aakku/Desktop/5th_sem/[SUBJECT]/qtn_sets_and_syllabus/*.pdf
- Template: /Users/aakku/Desktop/5th_sem/.github/prompts/CS4.5_Template_Example.md
- Instructions: /Users/aakku/Desktop/5th_sem/.github/prompts/5thSem_Generation_Prompt.md (lines 97-206)

OUTPUT_FILE: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/CS4.5.md

REQUIREMENTS:
- Word count: 5000-7000 words
- Follow CS4.5_Template_Example.md structure exactly
- Analyze all 7 question sets (2076-2081 + Model)
- Calculate importance scores: (Frequency × 0.4) + (Marks × 0.3) + (Recency × 0.3)
- Create study plans for 30/15/7/2 days
- Professional tone, no emojis in headings/topics
- Include frequency analysis, chapter breakdown, exam strategies

BEGIN ANALYSIS...
```

### For GPT-5 (G5.md)

```
SYSTEM: You are GPT-5, an expert at detailed content creation and explanations.

TASK: Create G5.md for [SUBJECT_NAME]

INPUT_FILES:
- Strategic Analysis: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/CS4.5.md
- Syllabus: /Users/aakku/Desktop/5th_sem/[SUBJECT]/qtn_sets_and_syllabus/syllabus.md
- Questions: /Users/aakku/Desktop/5th_sem/[SUBJECT]/qtn_sets_and_syllabus/*.pdf
- Instructions: /Users/aakku/Desktop/5th_sem/.github/prompts/5thSem_Generation_Prompt.md (lines 208-296)

OUTPUT_FILE: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/G5.md

REQUIREMENTS:
- Word count: 8000-12000 words
- Answer all HIGH and MEDIUM priority questions from CS4.5.md
- Include detailed explanations, diagrams, examples
- Step-by-step solutions appropriate for exam length
- Practice problems with solutions
- Quick revision notes per chapter
- Professional tone, no emojis in headings/topics
- Formula/algorithm sheet

BEGIN CONTENT CREATION...
```

### For Gemini 2.5 Pro (G2.5_p.md)

```
SYSTEM: You are Gemini 2.5 Pro, an expert at visual design and quick reference materials.

TASK: Create G2.5_p.md for [SUBJECT_NAME]

INPUT_FILES:
- Strategic Analysis: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/CS4.5.md
- Detailed Q&A: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/G5.md
- Instructions: /Users/aakku/Desktop/5th_sem/.github/prompts/5thSem_Generation_Prompt.md (lines 298-418)

OUTPUT_FILE: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/G2.5_p.md

REQUIREMENTS:
- Word count: 4000-6000 words
- Create mind maps and concept diagrams (ASCII or Mermaid)
- 50-60 flashcards covering all important topics
- One-page summaries for each chapter
- Comparison tables and flowcharts
- Quick reference cards
- Memory techniques (mnemonics, patterns)
- Professional tone, no emojis in headings/topics
- Easy to scan and navigate

BEGIN VISUAL DESIGN...
```

### For Gemini 3 Pro (2DayPrep/survival_guide.md)

```
SYSTEM: You are Gemini 3 Pro, an expert at creating emergency preparation guides.

TASK: Create 2DayPrep/survival_guide.md for [SUBJECT_NAME]

INPUT_FILES:
- Strategic Analysis: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/CS4.5.md
- Detailed Q&A: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/G5.md
- Visual Materials: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/G2.5_p.md
- Reference: https://github.com/aakku106/4thSem_impQtns/tree/main/DBMS/imp_qtns/2DayPrep
- Instructions: /Users/aakku/Desktop/5th_sem/.github/prompts/5thSem_Generation_Prompt.md (lines 443-541)

OUTPUT_DIRECTORY: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/2DayPrep/
OUTPUT_FILE: /Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/2DayPrep/survival_guide.md

REQUIREMENTS:
- Word count: 2000-3000 words
- Analyze all three previous files (CS4.5, G5, G2.5_p)
- Hour-by-hour schedule for Day 1 (8-10 hours) and Day 2 (6-8 hours)
- Must-memorize content with marks value
- Question selection strategy
- Guaranteed 35+ marks approach
- Ultra-quick revision points (4-5 chapters max)
- What to skip
- Exam day checklist
- Professional tone, no emojis in headings/topics
- Urgent, direct, no fluff
- Reference the 4th sem DBMS 2DayPrep guide for format/tone

BEGIN GUIDE CREATION...
```

## Progress Tracking During Automation

The script will update a progress file: `/Users/aakku/Desktop/5th_sem/.automation_progress.json`

```json
{
  "start_time": "2025-11-30T10:00:00Z",
  "current_status": "running",
  "subjects": {
    "DAA": {
      "status": "in_progress",
      "CS4.5.md": { "status": "complete", "duration": "8min" },
      "G5.md": { "status": "in_progress", "progress": "45%" },
      "G2.5_p.md": { "status": "pending" },
      "survival_guide.md": { "status": "pending" }
    },
    "SAD": {
      "status": "pending",
      "CS4.5.md": { "status": "pending" },
      "G5.md": { "status": "pending" },
      "G2.5_p.md": { "status": "pending" },
      "survival_guide.md": { "status": "pending" }
    }
  },
  "estimated_completion": "2025-11-30T16:30:00Z"
}
```

## Quality Checks (Automated)

After generation, the script performs these checks:

```
For each subject:
  ✓ Check CS4.5.md exists and is 5000-7000 words
  ✓ Check G5.md exists and is 8000-12000 words
  ✓ Check G2.5_p.md exists and is 4000-6000 words
  ✓ Check survival_guide.md exists and is 2000-3000 words
  ✓ Verify all cross-references are valid
  ✓ Check for contradictions between files
  ✓ Verify no excessive emojis in headings/topics
  ✓ Ensure all required sections present
```

## Execution Command

When you're ready and say "Go":

```bash
cd /Users/aakku/Desktop/5th_sem
python3 .github/scripts/automate_generation.py --mode=full --parallel=true
```

Or for single subject test:

```bash
python3 .github/scripts/automate_generation.py --subject=DAA --mode=test
```

## Post-Automation Steps

After automation completes:

1. Review quality check report: `.automation_quality_report.md`
2. Manually verify 1-2 subjects for quality
3. Fix any issues flagged in the report
4. Update README.md status table (auto-updated)
5. Commit and push to GitHub

## Error Handling

If any step fails:

- Script logs error to `.automation_errors.log`
- Continues with other subjects
- Generates partial output
- Creates recovery script for failed subjects

## Configuration File

Create: `/Users/aakku/Desktop/5th_sem/.automation_config.yaml`

```yaml
ai_models:
  claude:
    model: "claude-sonnet-4.5"
    api_key_env: "CLAUDE_API_KEY"
    max_retries: 3

  gpt:
    model: "gpt-5"
    api_key_env: "OPENAI_API_KEY"
    max_retries: 3

  gemini_2_5:
    model: "gemini-2.5-pro"
    api_key_env: "GEMINI_API_KEY"
    max_retries: 3

  gemini_3:
    model: "gemini-3-pro"
    api_key_env: "GEMINI_API_KEY"
    max_retries: 3

subjects:
  - name: "DAA"
    full_name: "Design and Analysis of Algorithms"
    priority: 1
  - name: "SAD"
    full_name: "System Analysis and Design"
    priority: 2
  - name: "Cripto"
    full_name: "Cryptography"
    priority: 3
  - name: "SM"
    full_name: "Simulation and Modeling"
    priority: 4
  - name: "WT"
    full_name: "Web Technology"
    priority: 5
  - name: "SEIT"
    full_name: "Society and Ethics in Information Technology"
    priority: 6

execution:
  parallel: true
  max_concurrent_subjects: 2
  timeout_per_agent: 600 # 10 minutes
  retry_on_timeout: true

output:
  log_level: "INFO"
  progress_file: ".automation_progress.json"
  quality_report: ".automation_quality_report.md"
  error_log: ".automation_errors.log"

quality_checks:
  word_count_tolerance: 10 # percentage
  require_all_sections: true
  check_cross_references: true
  check_emoji_usage: true
  verify_no_contradictions: true
```

## API Rate Limiting

The script handles rate limiting:

- Waits between requests
- Implements exponential backoff
- Retries failed requests
- Logs all API calls

## Estimated Total Time

With parallel processing:

- All 6 subjects: 2-3 hours
- Sequential: 6-8 hours

Time per subject:

- Claude Sonnet 4.5: 6-10 min
- GPT-5: 10-15 min
- Gemini 2.5 Pro: 6-10 min
- Gemini 3 Pro: 4-6 min
- Total: ~30-40 min per subject

## Success Criteria

Automation is successful when:

- All 24 files generated (4 per subject × 6 subjects)
- All quality checks pass
- No critical errors in log
- README.md updated with progress
- Quality report shows 95%+ compliance

## Manual Intervention Points

You may need to manually:

- Provide API keys (first time)
- Review quality report
- Approve final output
- Fix any flagged issues
- Push to GitHub

## Ready to Go

Once you say "Go", the automation will:

1. Verify all materials present
2. Configure AI agents
3. Process all 6 subjects
4. Generate all 24 files
5. Run quality checks
6. Update documentation
7. Generate summary report

Total automation time: 2-3 hours (parallel mode)

---

**Automation Ready:** YES  
**Prerequisites:** Complete when all materials collected  
**Command:** "Go" triggers execution  
**Mode:** One-click automated generation

---

Document Version: 1.0  
Last Updated: November 30, 2025  
Status: Ready for execution
