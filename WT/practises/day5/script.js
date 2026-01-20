const body = document.getElementById("div");

const input = document.createElement("input");
const subBtn = document.createElement("input");
const listContainer = document.createElement("ul");

let todoData = JSON.parse(localStorage.getItem("TO_DO_DATA")) || [];

const addStyles = () => {
  body.style.height = "90vh";
  body.style.width = "90vw";
  body.style.borderRadius = "12px";
  body.style.margin = "auto";
  body.style.backgroundColor = "rgb(229, 179, 155)";
  body.style.textAlign = `center`;
  body.style.padding = `1rem`;
};
const addInput = () => {
  input.placeholder = `Enter To-Do`;
  body.append(input);
};
const addBtn = () => {
  subBtn.type = "submit";
  subBtn.value = "ADD-TODO";
  body.append(subBtn);
};
const addListContainer = () => {
  body.append(listContainer);
};
const addList = () => {
  if (input.value.trim()) {
    todoData.push(input.value);
    localStorage.setItem("TO_DO_DATA", JSON.stringify(todoData));
    input.value = "";
    renderList();
  }
};
const renderList = () => {
  listContainer.innerHTML = "";
  todoData.forEach((value) => {
    let list = document.createElement("li");
    list.textContent = value;
    listContainer.append(list);
  });
};

const init = () => {
  addStyles();
  addInput();
  addBtn();
  addListContainer();
  renderList();
};

init();
subBtn.addEventListener("click", addList);
