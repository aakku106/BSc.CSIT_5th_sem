# START HERE - Simple Guide

## What This Is

A system to generate exam preparation files for 5th semester BSc.CSIT using AI models.

**You have:** Question papers + syllabi  
**You need:** 4 files per subject (CS4.5.md, G5.md, G2.5_p.md, survival_guide.md)  
**How:** Use simple prompts, one file at a time

---

## Quick Steps

### 1. Pick a Subject

Choose one:

- Cripto (Cryptography)
- WT (Web Technology)
- DAA (Algorithms)
- SAD (System Analysis)
- SM (Simulation)
- SEIT (Ethics)

### 2. Pick a File Type

Choose one:

- CS4.5.md (Strategic analysis) - Use Claude Sonnet 4.5
- G5.md (Detailed Q&A) - Use GPT-5 or GPT-4
- G2.5_p.md (Visual diagrams) - Use Gemini 2.5 Pro
- survival_guide.md (2-day prep) - Use any model

### 3. Use the Prompt

Go to `.github/prompts/` and find:

- `PROMPT_CS45.md` - For CS4.5.md files
- `PROMPT_G5.md` - For G5.md files
- `PROMPT_G25P.md` - For G2.5_p.md files
- `PROMPT_SURVIVAL.md` - For survival_guide.md files

Copy the prompt to your AI model.

### 4. Specify Subject

Tell the model which subject to work on.

Example: "Generate CS4.5.md for Cryptography"

### 5. Save the Output

Save the generated file to:
`/Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/[FILENAME].md`

For survival_guide.md, save to:
`/Users/aakku/Desktop/5th_sem/[SUBJECT]/imp_qtns/2DayPrep/survival_guide.md`

---

## Important Files

**Prompt Files** (in `.github/prompts/`):

- `PROMPT_CS45.md` - Template for strategic analysis
- `PROMPT_G5.md` - Template for detailed Q&A
- `PROMPT_G25P.md` - Template for visual materials
- `PROMPT_SURVIVAL.md` - Template for 2-day guide

**Guidelines:**

- `AGENT_GUIDELINES.md` - Writing rules (NO emojis, simple language, diagrams, examples)

**Materials:**

- `MATERIALS_STATUS.md` - What question papers we have

---

## Example Workflow

**Let's generate CS4.5.md for Cryptography:**

1. Open Claude Sonnet 4.5 (GitHub Copilot)
2. Open `.github/prompts/PROMPT_CS45.md`
3. Copy the entire content
4. Paste to Claude
5. Add: "Subject: Cryptography"
6. Wait for generation (~5 minutes)
7. Save output to `/Cripto/imp_qtns/CS4.5.md`
8. Done!

Repeat for other files and subjects.

---

## Progress Tracking

**Total:** 6 subjects × 4 files = 24 files

Mark as you complete:

**Cripto:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

**WT:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

**DAA:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

**SAD:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

**SM:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

**SEIT:**

- [ ] CS4.5.md
- [ ] G5.md
- [ ] G2.5_p.md
- [ ] survival_guide.md

---

## Tips

1. **Work one file at a time** - Don't try to generate everything at once
2. **Start with CS4.5.md** - It helps understand the subject
3. **Use recommended models** - They're optimized for each task
4. **Check output quality** - Ensure no emojis in headings, has diagrams
5. **Take breaks** - Each file takes 5-15 minutes to generate

---

## Need Help?

- **Writing rules:** See `AGENT_GUIDELINES.md`
- **Materials info:** See `MATERIALS_STATUS.md`
- **Example output:** Check `/Cripto/imp_qtns/CS4.5.md`

---

**Ready to start? Pick a subject and file type, then use the appropriate prompt!**
