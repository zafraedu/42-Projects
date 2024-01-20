//! jQuery
$(document).ready(() => {
	$("#changeColorBtn").click(() => {
		$("body").css("background", () => {
			return "#" + Math.floor(Math.random() * 16777215).toString(16);
		});
	});
});
//! no jQuery
// function changeColor() {
//   const letras = "0123456789ABCDEF";
//   let color = "#";
//   for (let i = 0; i < 6; i++) {
// 	color += letras[Math.floor(Math.random() * 16)];
//   }
//   document.body.style.backgroundColor = color;
// }
