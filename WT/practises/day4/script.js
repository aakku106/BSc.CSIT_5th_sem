const container = document.getElementById("div");
const ul = document.createElement("ul");
let num = 2;
let n = 100;

isPrime = (num) => {
  let count = 0;
  for (let j = 1; j <= num; j++) {
    if (num % j === 0) {
      count++;
    }
  }
  if (count <= 2) {
    return true;
  }
};

for (let i = num; i < n; i++) {
  if (isPrime(i)) {
    let li = document.createElement("li");
    li.innerText = i;
    ul.append(li);
  }
}
container.append(ul);
document.body.append(container);
