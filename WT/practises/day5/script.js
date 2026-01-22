const body = document.getElementById("div");

const input = document.createElement("input");
const subBtn = document.createElement("input");
const listContainer = document.createElement("ul");
const clearAllBtn = document.createElement("button");

let todoData = JSON.parse(localStorage.getItem("TO_DO_DATA")) || [];

const addStyles = () => {
  body.style.height = "90vh";
  body.style.width = "90vw";
  body.style.borderRadius = "12px";
  body.style.margin = "auto";
  body.style.marginRight = "auto";
  body.style.backgroundColor = "rgb(229, 179, 155)";
  body.style.textAlign = `center`;
  body.style.padding = `1rem`;
  listContainer.style.backgroundColor = "rgb(250, 1, 155, 0.1)";
  clearAllBtn.style.backgroundColor = "red";
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
    localStorage.setItem("TO_DO_DATA", JSON.stringify(todoData.reverse()));
    input.value = "";
    renderList();
  }
};
const renderList = () => {
  listContainer.innerHTML = "";
  todoData.forEach((value, index) => {
    const list = document.createElement("li");
    let p = document.createElement("p");
    const delBtn = document.createElement("button");
    p.textContent = value;
    listContainer.append(list);
    list.append(p);
    list.append(delBtn);
    handleDel(delBtn, index);
  });
};
const handleDel = (delBtn, index) => {
  delBtn.style.color = "red";
  delBtn.innerText = "DELETE";
  delBtn.style.marginLeft = "45%";
  delBtn.addEventListener("click", () => {
    deleteList(delBtn, index);
  });
};
const deleteList = (delBtn, index) => {
  console.log("wanna delete: ", delBtn, "of index: ", index);
  delBtn.removeEventListener("click", deleteList);
  todoData.splice(index, 1);
  localStorage.setItem("TO_DO_DATA", JSON.stringify(todoData));
  renderList();
};
const clearAllToDO = () => {
  localStorage.clear("TO_DO_DATA");
  todoData = [];
  renderList();
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
body.append(clearAllBtn);
clearAllBtn.innerText = `Clear All ToDo`;
clearAllBtn.addEventListener("click", clearAllToDO);
