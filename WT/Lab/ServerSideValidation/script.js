const f = document.getElementById("f"),
  m = document.getElementById("m");
f.onsubmit = async (e) => {
  e.preventDefault();
  const data = {
    name: f.n.value,
    email: f.e.value,
    age: f.a.value,
    pass: f.p.value,
  };
  const r = await fetch("/api/validate", {
    method: "POST",
    headers: { "Content-Type": "application/json" },
    body: JSON.stringify(data),
  });
  const j = await r.json();
  m.textContent = j.ok ? "OK" : "ERR: " + j.msg;
  m.style.color = j.ok ? "green" : "red";
};
