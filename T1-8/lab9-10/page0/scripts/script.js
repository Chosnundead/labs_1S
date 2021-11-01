//Весь этот код можно заменить функцией dragable из jquery)

let isStart = false, tempOfX, tempOfY;

$("#block").on("mousedown", () => {
    $("#block").css("left", (+$("#block").css("left").replaceAll("px", "")));
    $("#block").css("top", (+$("#block").css("top").replaceAll("px", "")));
    tempOfX = event.clientX;
    tempOfY = event.clientY;
    isStart = true;
});

$("#container").on("mouseup", () => {
    isStart = false;
});

$("#container").on("selectstart", () => {
    return false;
});

$("#container").on("mousemove", () => {
    if (isStart) {
        $("#block").css("left", (event.clientX - (tempOfX - (+$("#block").css("left").replaceAll("px", "")))));
        $("#block").css("top", (event.clientY - (tempOfY - (+$("#block").css("top").replaceAll("px", "")))));
        tempOfX = event.clientX;
        tempOfY = event.clientY;
    }
});