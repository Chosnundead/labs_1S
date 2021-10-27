let constrain = 15;
let mouseOverContainer = document.getElementById("ex1");
let ex1Layer = document.getElementById("ex1-layer");

function transforms(x, y, el) {
    let box = el.getBoundingClientRect();
    let calcX = -(y - box.y - (box.height / 2)) / constrain;
    let calcY = (x - box.x - (box.width / 2)) / constrain;

    return "perspective(200px) "
        + "   rotateX(" + calcX + "deg) "
        + "   rotateY(" + calcY + "deg) ";
}

function transformElement(el, xyEl) {
    el.style.transform = transforms.apply(null, xyEl);
}

mouseOverContainer.onmousemove = function (e) {
    let xy = [e.clientX, e.clientY];
    let position = xy.concat([ex1Layer]);

    window.requestAnimationFrame(function () {
        transformElement(ex1Layer, position);
    });
}

let isClicked = false;
document.querySelector("#link").onclick = () => {
    if (isClicked) {
        document.querySelector("#link").href = "d:\\My documents\\Code\\Labs\\K3\\index.html";
        document.querySelector("#link").style.color = "#8B0000";
    }
    isClicked = true;
}

document.querySelector("#linq").onmouseover = () => {
    document.querySelector("#linq").style.color = "green";
    document.querySelector("#linq").href = "d:\\My documents\\Code\\Labs\\K4\\index.html";
}

document.querySelector("#linq").onmouseout = () => {
    document.querySelector("#linq").style.color = "black";
    document.querySelector("#linq").href = "";
}

document.querySelector("#linc").onclick = () => {
    document.querySelector("#linc").style.color = "rgb(184, 134, 11)";
    document.querySelector("#linc").href = "block.html";
}