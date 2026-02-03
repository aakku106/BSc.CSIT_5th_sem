// name--> min:4 max:20
// age--> num, 12>age<90
// email
// gender: 2 options
//

const form = document.getElementById("form");
const err = {};

form.addEventListener("submit", (e) => {
  e.preventDefault();
  handleName(e.target[0].value.trim());
  handleAge(e.target[1].value);

  const emailRegex = /^[a-zA-Z0-9]+@[a-z]+\.[a-z]{2,5}$/;
  console.log(emailRegex);
  const email = document.getElementById("email").value.trim();
  console.log(emailRegex.test(email));
});

const handleAge = (age) => {
  if (age > 99) err.age = "Too Old";
  else if (age <= 0) err.age = "unborned";
  else err.age = " ";

  if (err && err.age)
    document.getElementsByClassName("age-err")[0].textContent = err.age;

  //   if (err?.age) console.log("wee");
};

const handleName = (name) => {
  if (name.length < 4) err.name = "Name must be longer than 3 characters.";
  else if (name.length > 20)
    err.name = "Name must be shorter than 20 character";
  else err.name = "";

  if (err && "name" in err)
    document.getElementsByClassName("name-err")[0].textContent = err.name;
};
