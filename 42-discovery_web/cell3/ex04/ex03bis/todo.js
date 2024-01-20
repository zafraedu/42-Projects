$(document).ready(function () {
	const ToDo = $("#ToDo");
	let itemArray = [];

	$("#btn-add").click(function () {
		const itemList = window.prompt("Enter item");
		if (itemList === null || itemList.trim() === "") return;

		itemArray.unshift(itemList);
		actualizarLista();
	});

	function actualizarLista() {
		ToDo.empty();

		$.each(itemArray, function (index, value) {
			let itemCreate = $("<div>").addClass("item").text(value);

			itemCreate.click(function () {
				if (window.confirm("Remove this item?")) {
					itemArray = $.grep(itemArray, function (e) {
						return e !== value;
					});
					actualizarLista();
				}
			});

			ToDo.append(itemCreate);
		});
	}
});
