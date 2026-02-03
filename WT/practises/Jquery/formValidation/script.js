// name--> min:4 max:20
// age--> num, 12>age<90
// email
// gender: 2 options
//

const form = document.getElementById("form");
const err = {};

form.addEventListener("submit", (e) => {
  e.preventDefault();
  console.log("vslidating name");
  const name = e.target[0].value.trim();
  console.log(name);
  if (name.length < 4) err["name"] = "Name must be longer than 3 characters.";
  else err.name = "";

  if (err && "name" in err) {
    console.log("short name baka");
    document.getElementsByClassName("name-err")[0].textContent = err.name;
  }
});
