let width = 1480, height = 640;
let sizeOfX = 42, sizeOfY = 20, stepIncreasing = 0.05, dotBoxSize = 1;
let valueOfRadio = $("input#radioFunction")[0].value, valueOfSelect = $("#select").val();

function _graphMaker(stringOfFunction, stringOfImage) {
    let stringOfGraph = "", coordinateX, coordinateY, x;
    for (let stepOfFunction = ((0 - (width / (dotBoxSize * 2))) / sizeOfX); stepOfFunction <= ((width / (dotBoxSize * 2)) / sizeOfX); stepOfFunction += stepIncreasing) {
        x = stepOfFunction;
        coordinateX = Math.abs(((stepOfFunction * sizeOfX) + (width / (dotBoxSize * 2))) * dotBoxSize);
        coordinateY = ((height / (dotBoxSize * 2)) - (eval(stringOfFunction) * sizeOfY)) * dotBoxSize;
        if ((coordinateY <= height) && (coordinateY >= 0)) {
            stringOfGraph += "<img class='image' src='" + stringOfImage + "' style='left: " + coordinateX + "px; top: " + coordinateY + "px;' />";
        }
    }
    $("#container").html(stringOfGraph);
}

$("input#radioFunction").on("click", () => {
    for (let countOfSelected = 0; countOfSelected < 4; countOfSelected++) {
        if ($("input#radioFunction")[countOfSelected].checked) {
            valueOfRadio = $("input#radioFunction")[countOfSelected].value;
            _graphMaker($("input#radioFunction")[countOfSelected].value, valueOfSelect);
        }
    }
});

$("#select").on("change", () => {
    valueOfSelect = $("#select").val();
    _graphMaker(valueOfRadio, $("#select").val());
});

$("#sizeOfX").on("change", () => {
    if (+$("#sizeOfX").val() > 0) {
        sizeOfX = +$("#sizeOfX").val();
    }
    _graphMaker(valueOfRadio, valueOfSelect);
});

$("#sizeOfY").on("change", () => {
    if (+$("#sizeOfY").val() > 0) {
        sizeOfY = +$("#sizeOfY").val();
    }
    _graphMaker(valueOfRadio, valueOfSelect);
});

$("#stepIncreasing").on("change", () => {
    if (+$("#stepIncreasing").val()) {
        stepIncreasing = +$("#stepIncreasing").val();
    }
    _graphMaker(valueOfRadio, valueOfSelect);
});

$("#dotBoxSize").on("change", () => {
    if (+$("#dotBoxSize").val()) {
        dotBoxSize = +$("#dotBoxSize").val();
    }
    _graphMaker(valueOfRadio, valueOfSelect);
});

_graphMaker($("input#radioFunction")[0].value, $("#select").val());