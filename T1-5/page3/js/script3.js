let allTasks = document.getElementsByTagName("tr");

for (let numberOfTableElement = 1; numberOfTableElement < document.getElementsByTagName("tr").length; numberOfTableElement++) {
    switch (numberOfTableElement) {
        case 1:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.userAgent;
            break;
        case 2:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.appVersion;
            break;
        case 3:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.appName;
            break;
        case 4:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.appCodeName;
            break;
        case 5:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.platform;
            break;
        case 6:
            allTasks[numberOfTableElement].childNodes[3].textContent = navigator.javaEnabled();
            break;
        case 7:
            allTasks[numberOfTableElement].childNodes[3].textContent = screen.width + ":" + screen.height;
            break;
        case 8:
            allTasks[numberOfTableElement].childNodes[3].textContent = screen.colorDepth;
            break;
        case 9:
            allTasks[numberOfTableElement].childNodes[3].textContent = history.state;
            break;
        case 10:
            allTasks[numberOfTableElement].childNodes[3].textContent = location.href;
            break;
        case 11:
            allTasks[numberOfTableElement].childNodes[3].textContent = location.pathname;
            break;
        case 12:
            allTasks[numberOfTableElement].childNodes[3].textContent = location.origin;
            break;
    }
}