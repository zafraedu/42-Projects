let diametro = 200;
var backgrounds = ["#f00", "#0f0", "#00f"];
var rBackgrounds = backgrounds.reverse();
const circle = $("#circulo");
function changeColor() {
	circle.colorIdx = circle.colorIdx || 0;
	circle.css("background", backgrounds[circle.colorIdx++ % 3])
}
$(document).ready(() => {
	circle.click(() => {
		changeColor();
		diametro += 10;
		if (diametro > 420) diametro = 200;
		circle.css("width", `${diametro}px`);
		circle.css("height", `${diametro}px`);
	});

	circle.mouseleave(() => {
		changeColor();
		if (diametro === 200) return;
		diametro -= 5;
		circle.css("width", `${diametro}px`);
		circle.css("height", `${diametro}px`);
	});
});

// let estado = 0; // 0: rojo, 1: verde, 2: azul
// let diametro = 200;

// function changeColor() {
//   if (estado === 0) {
// 	circle.style.backgroundColor = "#00ff00";
// 	estado = 1;
//   } else if (estado === 1) {
// 	circle.style.backgroundColor = "#0000ff";
// 	estado = 2;
//   } else {
// 	circle.style.backgroundColor = "#ff0000";
// 	estado = 0;
//   }
// }

// function handleClick(circle) {
//   changeColor();
//   diametro += 10;
//   if (diametro > 420) diametro = 200;
//   circle.style.width = `${diametro}px`;
//   circle.style.height = `${diametro}px`;
// }
// function hadleMouseLeave(circle) {
//   changeColor();
//   if (diametro === 200) return;
//   else diametro -= 5;
//   circle.style.width = `${diametro}px`;
//   circle.style.height = `${diametro}px`;
// }
