//document.getElementById('nav').onmouseover = function (event) {
//    //отслеживает нахождение мыши внутри блока
//    let target = event.target;
//    //отслеживаем клик
//    if (target.className == 'menu-item') {
//        let s = target.getElementsByClassName('submenu');
//        closeMenu();
//        s[0].style.display = 'block';
//        //массив, содержащий ложное меню
//    }
//}
//document.onmouseover = function (event) {
//    let target = event.target;
//    console.log(event.target);
//    if (target.className != 'menu-item' &&
//        target.className != 'submenu') {
//        closeMenu();
//    }
//}
//function closeMenu() {
//    //получение всех элементов подменю в блоке nav, присваивание display: none
//    //let menu = document.getElementById('nav');
//    let subm = document.getElementsByClassName('submenu');
//    for (let i = 0; i < subm.length; i++) {
//        subm[i].style.display = "none";
//    }
//}

//closeMenu();

$("#nav").on("mouseover", (event) => {
    //отслеживает нахождение мыши внутри блока
    //отслеживаем клик
    if ($(event.target).attr("class") == "menu-item") {
        closeMenu();
        $(event.target).children(".submenu").css("display", "block");
        //массив, содержащий ложное меню
    }
});

$("html").on("mouseover", (event) => {
    if ($(event.target).attr("class") != 'menu-item' &&
        $(event.target).attr("class") != 'submenu') {
        closeMenu();
    }
});

function closeMenu() {
    //получение всех элементов подменю в блоке nav, присваивание display: none
    //let menu = document.getElementById('nav');
    for (let i = 0; i < $(".submenu").length; i++) {
        $(".submenu").css("display", "none");
    }
}

closeMenu();