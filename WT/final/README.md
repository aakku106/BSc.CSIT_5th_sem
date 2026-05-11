# Web Technology (WT) — Trend Analysis (2076, 2078–2082 + Model)

Goal: secure pass mark (24) with a safer buffer above 30.

---

## Scope and method

**Question sets analyzed (7):** 2076, 2078, 2079, 2080, 2081, 2082, and the Model question set.

- **Note:** 2077 is not present in the folder, so it is not included.

**Syllabus coverage:** Units 1–6 (full syllabus).

**How “frequency” is counted:**

- `x/7` means the topic appears in `x` out of the 7 analyzed sets (at least once in that set).

**Exam pattern inferred from sets:**

- **Section/Group A:** Attempt any 2 out of 3 (long questions)
- **Section/Group B:** Attempt any 8 out of 12 (short questions)

Priority tags used below:

- **P1 (Core):** very frequent and reliable for scoring
- **P2 (High):** frequent and scoring
- **P3 (Support):** lower frequency but still worth preparing

---

## 1) Overall most repeated topics (across all sets)

| Rank | Topic cluster (what repeats)                                                                | Unit(s) | Frequency | Appears in (paper-question refs)                                                            |
| ---: | ------------------------------------------------------------------------------------------- | ------- | --------: | ------------------------------------------------------------------------------------------- |
|    1 | XML document creation + schema (DTD/XSD) (simple/complex types, attributes, restrictions)   | 5       |       7/7 | 2076-B8/B9, 2078-B9, 2079-A1, 2080-A2/B9, 2081-A1, 2082-A3, Model-A1/B9                     |
|    2 | Unit-1 conceptual short questions rotate every year (HTTP/WWW/clients–servers/web1 vs web2) | 1       |       7/7 | 2076-B4, 2078-B4, 2079-B4, 2080-B4, 2081-B4, 2082-B4, Model-B4                              |
|    3 | PHP + MySQL “insert + select” (usually via a form + DB connection)                          | 6       |       6/7 | 2076-A1, 2079-A3, 2080-A3, 2081-A3, 2082-B11, Model-A3                                      |
|    4 | jQuery basics (selectors / events / effects / animate / chaining)                           | 4       |       6/7 | 2076-B6, 2078-B6, 2079-B9, 2080-B8, 2082-A2, Model-B10                                      |
|    5 | HTML form + JavaScript validation (required fields + pattern constraints + checkbox/radio)  | 2,4     |       5/7 | 2078-A2, 2079-A2, 2080-A1, 2081-A2, Model-A2                                                |
|    6 | Event handling questions (onload / keypress-keydown / mouseover-mouseout + alert messages)  | 2,4     |       5/7 | 2076-A2, 2080-B5, 2081-B6, 2082-B6, Model-B5                                                |
|    7 | CSS practicals repeat (write CSS for positioning / box model / text properties / effects)   | 3       |       7/7 | 2076-A3/B11, 2078-A3/B11, 2079-B7/B8, 2080-B7, 2081-B7/B12, 2082-A1/B8, Model-B6            |
|    8 | PHP short programs repeat (strings/concat, functions, arrays, OOP basics, cookies/sessions) | 6       |       7/7 | 2076-B10, 2078-A1/B10, 2079-B11/B12, 2080-B11/B12, 2081-B10/B11, 2082-B10/B12, Model-B8/B11 |
|    9 | JSON questions (parse / data types)                                                         | 4       |       2/7 | 2076-B7, 2078-B8                                                                            |
|   10 | Meta tag + “mailto” footer (often asked as a direct HTML task)                              | 2       |       2/7 | 2076-B5, Model-B12                                                                          |

---

## 2) Group-wise repeated topics and questions

### Section/Group A — Long questions trend (attempt 2 out of 3)

| Rank | Topic asked in Group A                                                    | Unit(s) | Frequency | Where it appears                             | What to prepare (exam deliverable)                                                             | Priority |
| ---: | ------------------------------------------------------------------------- | ------- | --------: | -------------------------------------------- | ---------------------------------------------------------------------------------------------- | -------- |
|    1 | XML creation + schema (DTD/XSD)                                           | 5       |       5/7 | 2079-A1, 2080-A2, 2081-A1, 2082-A3, Model-A1 | One clean XML example + one DTD + one XSD template (simple types + complex types + attributes) | P1       |
|    2 | HTML form creation + JavaScript validation                                | 2,4     |       5/7 | 2078-A2, 2079-A2, 2080-A1, 2081-A2, Model-A2 | Validation checklist + reusable JS validation structure (required, length, pattern, checked)   | P1       |
|    3 | PHP form + DB connection + insert/select (display results)                | 6       |       5/7 | 2076-A1, 2079-A3, 2080-A3, 2081-A3, Model-A3 | PDO/MySQLi connection + INSERT + SELECT template + basic HTML form handling flow               | P1       |
|    4 | CSS design practical (positioning OR external CSS file OR shadow effects) | 3       |       3/7 | 2076-A3, 2078-A3, 2082-A1                    | Positioning rules (relative/absolute/fixed/float) + external CSS linking + 1 shadow example    | P2       |
|    5 | JavaScript objects + event handling (mouseover/mouseout type)             | 4       |       1/7 | 2076-A2                                      | JS object creation approaches + DOM selection + event handler for mouse events                 | P3       |
|    6 | PHP array (multidimensional) + display in HTML table                      | 6,2     |       1/7 | 2078-A1                                      | Array structure + nested loop to render HTML table                                             | P3       |
|    7 | jQuery selectors + callback + chaining (as a long question)               | 4       |       1/7 | 2082-A2                                      | Syntax for selectors, callback, chaining + one clear script example                            | P3       |

**Practical take:** if you are confident in **(XML + DTD/XSD)**, **(HTML form + JS validation)**, and **(PHP DB insert/select)**, you can usually select 2 long questions with minimal risk.

### Section/Group B — Short questions trend (attempt 8 out of 12)

| Rank | Topic asked in Group B                                                                | Unit(s) | Frequency | Where it appears                                                                         | What to prepare (5-mark style)                                                    | Priority |
| ---: | ------------------------------------------------------------------------------------- | ------- | --------: | ---------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------- | -------- |
|    1 | Unit-1 short definitions/comparisons (HTTP, WWW, clients/servers, web1 vs web2, etc.) | 1       |       7/7 | 2076-B4, 2078-B4, 2079-B4, 2080-B4, 2081-B4, 2082-B4, Model-B4                           | Definitions + 1–2 comparison tables (static vs dynamic, web1 vs web2)             | P1       |
|    2 | PHP small programs (strings, functions, arrays, OOP, cookie/session)                  | 6       |       7/7 | 2076-B10, 2078-B10, 2079-B11/B12, 2080-B11/B12, 2081-B10/B11, 2082-B10/B12, Model-B8/B11 | Short scripts + 3–5 key points for each concept (cookie vs session, class/object) | P1       |
|    3 | CSS short/practical (box model, selectors, positioning, text properties, effects)     | 3       |       7/7 | 2076-B11, 2078-B11, 2079-B7/B8, 2080-B7, 2081-B7/B12, 2082-B8, Model-B6                  | One-page notes: box model + positioning rules + 2 short code snippets             | P1       |
|    4 | XML supporting questions (DTD/XSD/namespace/XSLT/AJAX)                                | 5       |       6/7 | 2076-B8/B9, 2078-B9, 2079-B10, 2080-B9/B10, 2081-B9, Model-B9                            | Differences (DTD vs XSD), basic namespace idea, and 1–2 short examples            | P1       |
|    5 | jQuery short scripts (animate OR selector OR chaining)                                | 4       |       5/7 | 2076-B6, 2078-B6, 2079-B9, 2080-B8, Model-B10                                            | Syntax + one working example for animate and one for chaining                     | P2       |
|    6 | HTML event questions (keypress/onload/keydown)                                        | 2,4     |       4/7 | 2080-B5, 2081-B6, 2082-B6, Model-B5                                                      | Event definition + minimal script pattern (addEventListener / inline)             | P2       |
|    7 | HTML page composition tasks (meta tags, semantic tags, footer mail link)              | 2       |       3/7 | 2076-B5, 2078-B5, Model-B12                                                              | Correct tags + `mailto:` + meta syntax; keep output minimal and valid             | P2       |
|    8 | JSON short questions (parse / data types)                                             | 4       |       2/7 | 2076-B7, 2078-B8                                                                         | JSON types list + parse example (`JSON.parse`)                                    | P3       |

---

## 3) Unit-wise importance (ranked for a 24 → 30+ plan)

This ranking uses repetition across sets and how often the unit appears in **Group A choices**.

| Unit rank | Unit                                    | Most repeated topics to cover first (set-frequency)                                                                | Typical question forms seen                             | Practical focus for 30+                                                             |
| --------: | --------------------------------------- | ------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------- | ----------------------------------------------------------------------------------- |
|         1 | **Unit 5 — AJAX & XML**                 | XML creation + schema (DTD/XSD) `7/7`; DTD `3/7`; XSD `4/7`; schema vs DTD `1/7`                                   | XML file + DTD/XSD writing; short comparisons           | Prepare 1 XML example that you can extend into DTD and XSD quickly                  |
|         2 | **Unit 6 — PHP**                        | DB insert/select `6/7`; functions `3/7`; arrays `3/7`; OOP (class/objects/inheritance) `3/7`; cookie/session `2/7` | Long DB program; short scripts (function, array, class) | Keep 1 DB template + 3 short scripts (function, array, class)                       |
|         3 | **Unit 4 — JavaScript + jQuery + JSON** | JS form validation `5/7`; jQuery (any) `6/7`; animate `3/7`; JSON `2/7`                                            | Long validation; short jQuery scripts; JSON definitions | Be able to write one clean validation function + one animate/chaining script        |
|         4 | **Unit 2 — HTML**                       | Forms appear in `6/7`; events `5/7`; meta/semantic/footer tasks `3/7`                                              | Build small pages (form, footer, lists, table)          | Memorize correct tags/attributes (`form`, `input`, `select`, semantic tags, `meta`) |
|         5 | **Unit 3 — CSS**                        | Always appears `7/7`; positioning `3/7`; box model `2/7`; text properties `2/7`                                    | Short write-CSS questions and small demonstrations      | Prepare 2 mini-snippets: positioning and box model; revise common text properties   |
|         6 | **Unit 1 — Introduction**               | Always appears `7/7` but question rotates (HTTP/WWW/web1 vs web2/static vs dynamic)                                | Definitions + comparisons                               | Keep one compact note page; these are quick marks in Group B                        |

---

## 4) Must-practice list (very important)

Finish **P1** first.

| Priority | Questions to practice (paper refs)                             | Topic                                          | Why it is prioritized                                                         |
| -------- | -------------------------------------------------------------- | ---------------------------------------------- | ----------------------------------------------------------------------------- |
| P1       | 2079-A1, 2080-A2, 2081-A1, 2082-A3, Model-A1 + 2076-B8/B9      | XML + DTD/XSD writing                          | Most repeated long + short cluster; marks come from correctness and structure |
| P1       | 2076-A1, 2079-A3, 2080-A3, 2081-A3, Model-A3 + 2082-B11        | PHP DB insert + select                         | Reliable long-question option and also appears as short DB task               |
| P1       | 2078-A2, 2079-A2, 2080-A1, 2081-A2, Model-A2                   | HTML form + JS validation                      | Repeats with small validation variations (length/pattern/checked/selected)    |
| P1       | 2076-B4, 2078-B4, 2079-B4, 2080-B4, 2081-B4, 2082-B4, Model-B4 | Unit-1 definitions/comparisons                 | Guaranteed short question slot; quick marks if prepared                       |
| P1       | 2076-A3, 2080-B7, 2082-B8 + 2078-B11/Model-B6                  | CSS positioning + box model                    | Common CSS scoring area (diagrams + short CSS snippets)                       |
| P2       | 2076-B6, 2078-B6, 2079-B9, 2080-B8, Model-B10                  | jQuery scripts (animate/selector/chaining)     | Repeats often; easy marks if syntax is correct                                |
| P2       | 2076-A2, 2081-B6, 2082-B6, 2080-B5, Model-B5                   | Event handling (onload/keypress/keydown/mouse) | Small scripts repeat; focus on correct event + output                         |
| P2       | 2079-B11, 2082-B10, Model-B8                                   | PHP OOP (class/object, inheritance)            | Comes as direct short program/theory question                                 |
| P2       | 2080-B12, 2081-B11                                             | Session vs cookie                              | Short concept + code snippet; easy to structure                               |
| P2       | 2076-B5, Model-B12 (+ 2078-B5 for meta)                        | Meta tag + footer mail link                    | Repeated exact task; small but direct marks                                   |
| P3       | 2076-B7, 2078-B8                                               | JSON parse/types                               | Not every year, but straightforward when asked                                |
| P3       | 2080-B10, 2079-B10, 2081-B9                                    | AJAX (XHR), namespace, XSLT                    | Less frequent; prepare 4–6 clear points + one mini example                    |

---

## 5) Attempt strategy (pass-first 24, safer 30+)

- **Section/Group A (choose 2):** prioritize preparation so you can answer any two of these three with confidence:
  - XML + DTD/XSD (Unit 5)
  - HTML form + JavaScript validation (Units 2 & 4)
  - PHP DB insert/select (Unit 6)
- **Section/Group B (attempt 8):** keep at least **10 short answers ready** so you can skip uncertain ones. The most reliable picks are:
  - Unit 1 definitions/comparisons (always present)
  - CSS: box model + positioning + one text property
  - jQuery: one animate/selector/chaining script
  - XML: DTD vs XSD + one schema concept
  - PHP: one function + one class/object + cookie/session concept

If you want, I can also generate a 1-page “last-day revision sheet” for WT from this analysis (only headings + bullet points).
