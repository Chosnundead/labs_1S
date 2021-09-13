let number1, number2, result;
let userDate = new Date();
let userDay = userDate.getDay();

number1 = (35 * 1 - 25 * 21) / 5 + 232;
number2 = 8 * (1 / 21 + 5 * 21 / (1 - 43) * 6);
result = number1 % number2;

document.write("<p>1) ", 10 + 5, "</p>\n");
document.write("<p>2) ", "10" + "5", "</p>\n");
document.write("<p>3) ", 22 + "5", "</p>\n");
document.write("<p>4) ", "22" + 5, "</p>\n");

document.write("<h2>Задание 2.</h2>\n<p>Результат == ", result, "</p>");

alert("Вас приветствует учебный центр!");

let userName = prompt("Введите ваше имя: ", "Имя");
alert("Добро пожаловать на наши курсы, ", userName, "!");

let isUserWant = confirm("Хотите стать wed-дизайнером?");

if (isUserWant) {
    alert("Учите JS и CSS!");
} else {
    alert("Упускаете время!");
}

alert("Результатом сложения строки и числа всегда будет строка.");

alert("Результат == " + result);

let userNumber = prompt("Введите ваше число: ", "2121");
if ((userNumber < 20 || userNumber > 40) && (userNumber != 15) && !(userNumber % 5)) {
    alert("Правильное значение!");
} else {
    alert("Не правильное значение!");
}

let userComparison1 = prompt("Введите первое число: ", "");
let userComparison2 = prompt("Введите второе число: ", "");
if (userComparison1 > userComparison2) {
    alert("Первое число > Второе число")
} else {
    alert("Первое число <= Второе число");
}

switch (userDay){
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