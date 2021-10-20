let openedWindow = [];

function _openWindow() {
    openedWindow[openedWindow.length] = window.open();
    openedWindow[(openedWindow.length - 1)].document.write("<div class=\"container\"><div class= \"block red-bg\" ></div ><div class=\"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div ><div class=\"container\"><div class=\"block red-bg\"></div><div class=\"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div><div class=\"container\"><div class=\"block red-bg\"></div><div class=\"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div><div class=\"container\"><div class=\"block red-bg\"></div><div class= \"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div><div class=\"container\"><div class=\"block red-bg\"></div><div class=\"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div><div class=\"container\"><div class=\"block red-bg\"></div><div class=\"block green-bg second\"></div><div class=\"block blue-bg three\"></div></div><div id=\"popup-container\"><div id=\"popup\">" + "Окно №" + openedWindow.length + "</div></div>");
    openedWindow[(openedWindow.length - 1)].document.head.innerHTML = openedWindow[(openedWindow.length - 1)].document.head.innerHTML + "<title>" + "Окно №" + openedWindow.length + "</title >\n<link rel =\"stylesheet\" href=\"css/style0ForScript2.css\" />";
}

function _closeWindow() {
    if (openedWindow.length > 0) {
        openedWindow[(openedWindow.length - 1)].close();
        openedWindow.pop();
    } else {
        console.log("Нечего закрывать!\n");
    }
}

function _changeWindow() {
    for (let numberOfOpenetWindow = (openedWindow.length - 1); numberOfOpenetWindow >= 0; numberOfOpenetWindow--) {
        openedWindow[numberOfOpenetWindow].alert("Изменение!");
        openedWindow[numberOfOpenetWindow].document.getElementById("popup").innerHTML = "Изменили текст!";
    }
}