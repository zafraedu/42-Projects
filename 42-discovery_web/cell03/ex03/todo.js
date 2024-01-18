//! without cookies
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
//! with cookies
// const btnAdd = document.querySelector("#btn-add");
// const ToDo = document.querySelector("#ToDo");
// let itemArray = [];

// document.addEventListener("DOMContentLoaded", function () {
// 	loadTodoListFromCookie();
// });

// btnAdd.addEventListener("click", () => {
// 	const itemList = window.prompt("Nuevo TO DO:");
// 	if (itemList === null || itemList.trim() === "") return;

// 	itemArray.unshift(itemList);
// 	actualizarLista();
// 	saveTodoListToCookie();
// });

// function actualizarLista() {
// 	ToDo.innerHTML = "";

// 	for (let i of itemArray) {
// 		let itemCreate = document.createElement("div");
// 		itemCreate.setAttribute("class", "item");
// 		itemCreate.innerHTML = `${i}`;

// 		itemCreate.addEventListener("click", () => {
// 			if (window.confirm("¿Eliminar este TO DO?") === false) return;
// 			itemArray = itemArray.filter((e) => e !== i);
// 			actualizarLista();
// 			saveTodoListToCookie();
// 		});
// 		ToDo.appendChild(itemCreate);
// 	}
// }

// function saveTodoListToCookie() {
// 	document.cookie = "todoList=" + JSON.stringify(itemArray);
// }

// function loadTodoListFromCookie() {
// 	const cookieValue = document.cookie.replace(/(?:(?:^|.*;\s*)todoList\s*=\s*([^;]*).*$)|^.*$/, "$1");
// 	if (cookieValue) {
// 		itemArray = JSON.parse(cookieValue);
// 		actualizarLista();
// 	}
// }
