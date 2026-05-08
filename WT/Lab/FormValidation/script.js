let f = document.getElementById("f"),
  n = document.getElementById("n"),
  e = document.getElementById("e"),
  p = document.getElementById("p"),
  m = document.getElementById("m");

f.onsubmit = function (x) {
  x.preventDefault();
  if (n.value && e.value.includes("@") && p.value.length >= 4) {
    m.textContent = "Valid";
    m.style.color = "green";
  } else {
    m.textContent = "Invalid";
    m.style.color = "red";
  }
};
