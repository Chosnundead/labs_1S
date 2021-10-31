$("#container").on("mousedown", () => {
    $("#container").on("selectstart", () => {
        return false;
    });
    isBreak = false;
    $("#block").css("left", event.clientX - 100);
    $("#block").css("top", event.clientY - 100);
    $("#container").on("mousemove", () => {
        $("#container").on("mouseup", () => {
            isBreak = true;
        });
        if (isBreak) {
            $("#container").off("mousemove");
        }
        $("#block").css("left", event.clientX - 100);
        $("#block").css("top", event.clientY - 100);
    });
});