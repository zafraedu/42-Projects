$(document).ready(function () {
	$("#calculateBtn").click(function () {
		calcMath();
	});

	setInterval(function () {
		alert("Please, use me");
	}, 30000);
});

function calcMath() {
	let select = $("#select").val();
	let x = parseInt($("#firstNum").val());
	let y = parseInt($("#secondNum").val());
	let result;

	if (isNaN(x) || isNaN(y) || x === undefined || y === undefined) {
		result = "not a number";
	} else if (x < 0 || y < 0) {
		result = "Error :(";
	} else {
		switch (select) {
			case "plus":
				result = x + y;
				break;
			case "less":
				result = x - y;
				break;
			case "multi":
				result = x * y;
				break;
			case "divi":
				result = x / y;
				if (x === 0 || y === 0) {
					result = "It's over 9000!";
				}
				break;
			case "modul":
				result = x % y;
				if (x === 0 || y === 0) {
					result = "It's over 9000!";
				}
				break;
			default:
				result = "Select an operator";
		}
	}

	console.log(result);
	alert(result);
}

// function calcMath() {
// 	let select = document.getElementById("select").value;
// 	let x = parseInt(document.getElementById("firstNum").value);
// 	let y = parseInt(document.getElementById("secondNum").value);
// 	let result;
// 	if (isNaN(x) || isNaN(y) || x == undefined || y == undefined)
// 		result = "not a number";
// 	else if (x < 0 || y < 0) result = "Error :(";
// 	else {
// 		switch (select) {
// 			case "plus":
// 				result = x + y;
// 				break;
// 			case "less":
// 				result = x - y;
// 				break;
// 			case "multi":
// 				result = x * y;
// 				break;
// 			case "divi":
// 				result = x / y;
// 				if (x == 0 || y == 0) result = "It's over 9000!";
// 				break;
// 			case "modul":
// 				result = x % y;
// 				if (x == 0 || y == 0) result = "It's over 9000!";
// 				break;
// 			default:
// 				result = "Select a operator";
// 		}
// 	}
// 	console.log(result);
// 	alert(result);
// }
// setInterval(() => { alert("Please, use me"); }, 30000);
