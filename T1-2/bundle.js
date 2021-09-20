/******/ (function() { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************!*\
  !*** ./app.js ***!
  \****************/
function welcome() {
  alert("Вас приветствует учебный центр!");
  var userName = prompt("Введите ваше имя: ", "Имя");
  alert("Добро пожаловать на наши курсы, " + userName + "!");
  var isUserWant = confirm("Хотите стать wed-дизайнером?");

  if (isUserWant) {
    alert("Учите JS и CSS!");
  } else {
    alert("Упускаете время!");
  }
}

function summation() {
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font - size: large;\">1) ", 10 + 5, "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font - size: large;\">2) ", "10" + "5", "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font - size: large;\">3) ", 22 + "5", "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font - size: large;\">4) ", "22" + 5, "</p>\n");
  alert("Результатом сложения строки и числа всегда будет строка.");
}

function result() {
  var number1, number2, answer;
  number1 = (35 * 1 - 25 * 21) / 5 + 232;
  number2 = 8 * (1 / 21 + 5 * 21 / (1 - 43) * 6);
  answer = number1 % number2;
  alert("Результат == " + answer);
}

function logic() {
  var userNumber = prompt("Введите ваше число: ", "2121");

  if ((userNumber < 20 || userNumber > 40) && userNumber != 15 && !(userNumber % 5)) {
    alert("Правильное значение!");
  } else {
    alert("Не правильное значение!");
  }
}

function ifElse() {
  var userComparison1 = prompt("Введите первое число: ", "");
  var userComparison2 = prompt("Введите второе число: ", "");

  if (userComparison1 > userComparison2) {
    alert("Первое число > Второе число");
  } else {
    alert("Первое число <= Второе число");
  }
}

function dayToday() {
  var userDate = new Date();
  var userDay = userDate.getDay();

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
  var number1, number2;
  number1 = prompt("Введите первое число: ", "2121");
  number2 = prompt("Введите первое число: ", "2121");
  document.write("<table border=\"1\">");

  for (i = 1; i <= number1; i++) {
    for (j = 1; j <= number2; j++) {
      document.write("<td>", j * i);
      document.write("</td>");
    }

    document.write("</tr>");
  }

  document.write("</table>");
}
/******/ })()
;
//# sourceMappingURL=bundle.js.map