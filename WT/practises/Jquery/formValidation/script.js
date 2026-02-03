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
  if (name.length < 4) {
    Error;
  }
});
