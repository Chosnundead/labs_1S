﻿function welcome() {
    alert("Вас приветствует учебный центр!");

    let userName = prompt("Введите ваше имя: ", "Имя");
    alert("Добро пожаловать на наши курсы, " + userName + "!");

    let isUserWant = confirm("Хотите стать wed-дизайнером?");

    if (isUserWant) {
        alert("Учите JS и CSS!");
    } else {
        alert("Упускаете время!");
    }
}

function summation() {
    document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">1) ", 10 + 5, "</p>\n");
    document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">2) ", "10" + "5", "</p>\n");
    document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">3) ", 22 + "5", "</p>\n");
    document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">4) ", "22" + 5, "</p>\n");
    alert("Результатом сложения строки и числа всегда будет строка.");
}

function result() {
    let number1, number2, answer;
    
    number1 = (35 * 1 - 25 * 21) / 5 + 232;
    number2 = 8 * (1 / 21 + 5 * 21 / (1 - 43) * 6);
    answer = number1 % number2;

    alert("Результат == " + answer);
}

function logic() {
    let userNumber = prompt("Введите ваше число: ", "2121");
    if ((userNumber < 20 || userNumber > 40) && (userNumber != 15) && !(userNumber % 5)) {
        alert("Правильное значение!");
    } else {
        alert("Не правильное значение!");
    }
}

function ifElse() {
    let userComparison1 = prompt("Введите первое число: ", "");
    let userComparison2 = prompt("Введите второе число: ", "");
    if (userComparison1 > userComparison2) {
        alert("Первое число > Второе число")
    } else {
        alert("Первое число <= Второе число");
    }
}

function dayToday() {
    let userDate = new Date();
    let userDay = userDate.getDay();

    switch (userDay) {
        case 0:
            alert("Сегодня воскресенье.");
            break;
        case 1:
            alert("Сегодня понедельник.");
            break;
        case 2:
            alert("Сегодня вторник.");
            break;
        case 3:
            alert("Сегодня среда.");
            break;
        case 4:
            alert("Сегодня четверг.");
            break;
        case 5:
            alert("Сегодня пятница.");
            break;
        case 6:
            alert("Сегодня суббота.");
            break;
    }
}

function tryCatchFinally() {
    try {
        if (!NULL) {
            console.log(1);
        } else {
            console.log(0);
        }
    } catch (err) {
        console.log(err);
        alert("Внимание! В коде присутствует ОШИБКА!");
    } finally {
        alert("Но мы её не боимся! У нас try-catch-finally иммунитет!");
    }
}

function table() {
    let number1, number2;

    number1 = prompt("Введите первое число: ", "2121");
    number2 = prompt("Введите первое число: ", "2121");

    document.write("<table border=\"1\" style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">");
    for (i = 1; i <= number1; i++) {
        document.write("<tr>");
        for (j = 1; j <= number2; j++) {
            document.write("<td>", j * i);
            document.write("</td>");
        }
        document.write("</tr>");
    }
    document.write("</table>");
}

function circle() {
    let a = prompt("Введите первое число: ", "2121");
    let b = prompt("Введите второе число: ", "2121");
    a = parseFloat(a);
    b = parseFloat(b);

    document.write("<table border=\"1\" style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">");
    document.write("<tr><td>Радиус</td><td>Площадь круга</td><td>Длина окружности</td></tr>");

    do {
        document.write("<tr><td>", a.toFixed(1), "</td>", "<td>", Math.round(Math.PI * a * a), "</td>", "<td>", Math.round(Math.PI * 2 * a), "</td></tr>");
        a += 0.3;
    } while (a <= b);

    document.write("</table>");
}

function objectsNumber() {
    let numberFloat = prompt("Введите дробное число: ", "2121");
    let numberInt = prompt("Введите целое число: ", "2121");
    numberFloat = parseFloat(numberFloat);
    numberInt = parseInt(numberInt);

    document.write("<table border=\"1\" style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">");
    document.write("<tr><td>Число</td><td>Метод</td><td>Результат</td><td>Описание метода</td></tr>");

    document.write("<tr><td>", numberFloat, "</td><td rowspan=\"2\">toExponential(n), n == 2</td><td>", numberFloat.toExponential(2), "</td><td rowspan=\"2\">Представляет число в экспоненциальной форме, параметр n – целое число, определяющее, сколько цифр после точки следует указывать. </td></tr>");
    document.write("<tr><td>", numberInt, "</td><td>", numberInt.toExponential(2), "</td></tr>");
    document.write("<tr><td>", numberFloat, "</td><td rowspan=\"2\">toFixed(n), n == 2</td><td>", numberFloat.toFixed(2), "</td><td rowspan=\"2\">Представляет число в форме с фиксированным количеством цифр после точки, n количество – целое число, определяющее, сколько цифр после точки следует указывать. </td></tr>");
    document.write("<tr><td>", numberInt, "</td><td>", numberInt.toFixed(2), "</td></tr>");
    document.write("<tr><td>", numberFloat, "</td><td rowspan=\"2\">toPrecision(n), n == 6</td><td>", numberFloat.toPrecision(6), "</td><td rowspan=\"2\">Представляет число с заданным общим количеством значащих цифр. n точность – целое число, определяющее, сколько всего цифр, до и после точки, следует указывать. </td></tr>");
    document.write("<tr><td>", numberInt, "</td><td>", numberInt.toPrecision(6), "</td></tr>");
    document.write("<tr><td>", numberFloat, "</td><td rowspan=\"2\">toString(n), n == 16</td><td>", numberFloat.toString(16), "</td><td rowspan=\"2\">Возвращает строковое представление числа в системе счисления с n основанием. Если параметр не указан, имеется в виду десятеричная система счисления. Этот метод имеют все объекты. </td></tr>");
    document.write("<tr><td>", numberInt, "</td><td>", numberInt.toString(16), "</td></tr>");

    document.write("</table>");

    //console.log(NULL + undefined);
}

function lab3Task1() {
    let arr = [];

    arr[0] = 6 * Math.pow(Math.PI, 2) + 3 * Math.pow(Math.E, 8);
    arr[1] = 2 * Math.cos(4) + Math.cos(12) + 8 * Math.pow(Math.E, 3);
    arr[2] = 3 * Math.sin(9) + Math.log(5) + Math.sqrt(3);
    arr[3] = 2 * Math.tan(5) + 6 * Math.PI + Math.sqrt(12);

    let lower = 0;
    let high = 0;
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] < arr[lower]) {
            lower = i;
        }
        if (arr[i] > arr[high]) {
            high = i;
        }
    }
    alert("Минимальное: arr[" + lower + "] == " + arr[lower]);
    alert("Максимальное: arr[" + high + "] == " + arr[high]);
}

function lab3Task2() {
    let arr = ["pow", "pop", "push", "shift", "round", "floor", "sline", "sort"];
    let arrMath = [];
    let arrArray = [];
    
    for (let i = 0; i < arr.length; i++) {
        if (Array.prototype.hasOwnProperty(arr[i])) {
            arrArray.push(arr[i]);
        }
        if (Math.hasOwnProperty(arr[i])) {
            arrMath.push(arr[i]);
        }
    }
    arrMath.unshift("log");
    arrArray.push("unshift");

    console.log(arr);
    console.log(arrArray);
    console.log(arrMath);
}

function lab3Task3() {
    let name = "Солодкий Денис Викторович";

    console.log(name.length);

    let nameAnother = name;
    nameAnother = nameAnother.toUpperCase();
    nameAnother = nameAnother.toLowerCase();
    nameAnother = name.concat(nameAnother);
    nameAnother = nameAnother.replace(/[а-я]/g, '');

    console.log(name);
    console.log(nameAnother);
}

function lab3Task4() {
    x = new Date();

    document.write("<table border=\"1\" style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">");

    document.write("<tr><td>Год</td><td>", x.getFullYear(), "</td></tr>");
    document.write("<tr><td>Месяц</td><td>", (x.getMonth() + 1), "</td></tr>");
    document.write("<tr><td>День</td><td>", x.getDate(), "</td></tr>");
    document.write("<tr><td>Час</td><td>", x.getHours(), "</td></tr>");
    document.write("<tr><td>Минуты</td><td>", x.getMinutes(), "</td></tr>");
    document.write("<tr><td>Секунды</td><td>", x.getSeconds(), "</td></tr>");

    document.write("</table>");
}