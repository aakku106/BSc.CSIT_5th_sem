const body = document.getElementById("div");
body.style.height = "90vh";
body.style.width = "90vw";
body.style.borderRadius = "12px";
body.style.margin = "auto";
body.style.backgroundColor = "red";
body.style.textAlign = `center`;
body.style.padding = `1rem`;

const input = document.createElement("input");
const subBtn = document.createElement("input");
const listContainer = document.createElement("ul");

const todoData = [];

const addInput = () => {
  input.placeholder = `Enter To-Do`;
  body.append(input);
};
const addBtn = () => {
  subBtn.type = "submit";
  subBtn.value = "ADD-TODO";
  body.append(subBtn);
};
const addList = () => {
  let list = document.createElement("li");
  todoData = localStorage.getItem("TO_Do_Data");
  todoData.map((value, index) => {});
  listContainer.append(list);
};
const handleBtnClick = () => {
  todoData.push(input.value);
  localStorage.setItem("TO_Do_Data", todoData);
  input.value = "";
  startRender();
};
const startRender = () => {
  addInput();
  addBtn();
  addList();
};
body.addEventListener("mouseover", startRender);
subBtn.addEventListener("click", handleBtnClick);
