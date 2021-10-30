$("#task1Word").on("mouseover", () => {
    $("#task1Word").css("background-color", "red");
});

$("#task1Word").on("mouseout", () => {
    $("#task1Word").css("background-color", "white");
});

let isFontSizeUpped = false;
$("#task2Word").on("click", () => {
    if (isFontSizeUpped) {
        $("#task2Word").css("font-size", "18px");
        isFontSizeUpped = false;
    } else {
        $("#task2Word").css("font-size", "66px");
        isFontSizeUpped = true;
    }
});

let isImageChanged = false;
$("#task3Image").on("click", () => {
    if (isImageChanged) {
        $("#task3Image").attr("src", "images/img0.jpg");
        isImageChanged = false;
    } else {
        $("#task3Image").attr("src", "images/img1.jpg");
        isImageChanged = true;
    }
});

let isContainerContentChanged = false;
$("#task4Container").on("click", () => {
    if (isContainerContentChanged) {
        $("#task4Container").html("Создать программу на JS, заменяющую текст изображением,<br />с использованием метода getElementById и свойства innerHTML.");
        isContainerContentChanged = false;
    } else {
        $("#task4Container").html("<img src='images/img0.jpg' class='image' id='task3Image'/>");
        isContainerContentChanged = true;
    }
});

$("#task5Image").on("mouseover", () => {
    $("#task5Image").css("width", "1200");
});

$("#task5Image").on("mouseout", () => {
    $("#task5Image").css("width", "600");
});

$("#task6Paragraph").on("dblclick", () => {
    $("#task6Paragraph").css("display", "table-cell");
    $("#task6Paragraph").css("border", "6px solid darkred");
});