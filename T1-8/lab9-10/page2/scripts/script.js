let width = 1480;
let height = 640;
let dotBoxSize = 20;

function _graphMaker(stringOfFunction) {
    let stringOfGraph = "", coordinateX, coordinateY, x;
    for (let stepOfFunction = (0 - (width / (dotBoxSize * 2))); stepOfFunction <= (width / (dotBoxSize * 2)); stepOfFunction++) {
        x = stepOfFunction;
        coordinateX = Math.abs((stepOfFunction + (width / (dotBoxSize * 2))) * dotBoxSize);
        coordinateY = ((height / (dotBoxSize * 2)) - eval(stringOfFunction)) * dotBoxSize;
        console.log("Y(" + stepOfFunction + "):" + coordinateY);
        if ((coordinateY <= 640) && (coordinateY >= 0)) {
            stringOfGraph += "<img class='image' src='images/dot.png' style='left: " + coordinateX + "px; top: " + coordinateY + "px;' />";
        }
    }
    $("#container").html(stringOfGraph);
}

$("input#radioFunction").on("click", () => {
    for (let check = 0; check < 4; check++) {
        if
    }
});