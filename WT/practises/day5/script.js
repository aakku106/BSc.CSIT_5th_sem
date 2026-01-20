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

const todoData = localStorage.getItem("TO_DO_DATA");

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
  todoData.push(input.value);
  localStorage.setItem("TO_DO_DATA", todoData);
  input.value = "";
  renderList();
};
const renderList = () => {
  todoData.map((value, _) => {
    let list = document.createElement("li");
    list.textContent = value;
    listContainer.append(list);
  });
};

const startRender = () => {
  addInput();
  addBtn();
  addList();
};
body.addEventListener("mouseover", startRender);
subBtn.addEventListener("click", addList);
