const express = require("express");
const app = express();
app.use(express.json());
app.post("/api/validate", (req, res) => {
  const { name, email, age, pass } = req.body;
  if (!name) return res.json({ ok: false, msg: "name" });
  if (!email || !email.includes("@"))
    return res.json({ ok: false, msg: "email" });
  const n = Number(age);
  if (!n || n < 1 || n > 120) return res.json({ ok: false, msg: "age" });
  if (!pass || pass.length < 6) return res.json({ ok: false, msg: "pass" });
  return res.json({ ok: true });
});
app.use(express.static("."));
app.listen(3000, () => console.log("listening:3000"));
