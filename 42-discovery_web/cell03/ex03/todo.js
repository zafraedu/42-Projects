const btnAdd = document.querySelector("#btn-add");
const ToDo = document.querySelector("#ToDo");
let itemArray = [];

btnAdd.addEventListener("click", () => {
  const itemList = window.prompt("list");
  if (itemList === null || itemList.trim() === "") return;

  itemArray.unshift(itemList);
  actualizarLista();
});

function actualizarLista() {
  ToDo.innerHTML = "";

  for (let i of itemArray) {
    let itemCreate = document.createElement("div");
    itemCreate.setAttribute("class", "item");
    itemCreate.innerHTML = `${i}`;

    itemCreate.addEventListener("click", () => {
      if (window.confirm("c") === false) return;
      itemArray = itemArray.filter((e) => e !== i);
      actualizarLista();
    });
    ToDo.appendChild(itemCreate);
  }
}
