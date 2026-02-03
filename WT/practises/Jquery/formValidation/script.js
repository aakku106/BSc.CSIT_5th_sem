// name--> min:4 max:20
// age--> num, 12>age<90
// email
// gender: 2 options
//

const form = document.getElementById("form");
const err = {};

form.addEventListener("submit", (e) => {
  e.preventDefault();
  const name = e.target[0].value.trim();
  handleName(name);
});
const handleName = (name) => {
  if (name.length < 4) err.name = "Name must be longer than 3 characters.";
  //   else err.name = "";

  if (name.length > 20) err.name = "Name must be shorter than 20 character";
  //   else err.name = "";

  if (err && "name" in err) {
    document.getElementsByClassName("name-err")[0].textContent = err.name;
    err.name = "";
  }
};
