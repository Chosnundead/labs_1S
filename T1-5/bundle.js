/******/ (function() { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************!*\
  !*** ./app.js ***!
  \****************/
function _typeof(obj) { "@babel/helpers - typeof"; if (typeof Symbol === "function" && typeof Symbol.iterator === "symbol") { _typeof = function _typeof(obj) { return typeof obj; }; } else { _typeof = function _typeof(obj) { return obj && typeof Symbol === "function" && obj.constructor === Symbol && obj !== Symbol.prototype ? "symbol" : typeof obj; }; } return _typeof(obj); }

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
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">1) ", 10 + 5, "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">2) ", "10" + "5", "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">3) ", 22 + "5", "</p>\n");
  document.write("<p style=\" font-family:'Franklin Gothic Medium', 'Arial Narrow', Arial, sans-serif; color: darkred; font-size: large;\">4) ", "22" + 5, "</p>\n");
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
  var a = prompt("Введите первое число: ", "2121");
  var b = prompt("Введите второе число: ", "2121");
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
  var numberFloat = prompt("Введите дробное число: ", "2121");
  var numberInt = prompt("Введите целое число: ", "2121");
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
  document.write("</table>"); //console.log(NULL + undefined);
}

function lab3Task1() {
  var arr = [];
  arr[0] = 6 * Math.pow(Math.PI, 2) + 3 * Math.pow(Math.E, 8);
  arr[1] = 2 * Math.cos(4) + Math.cos(12) + 8 * Math.pow(Math.E, 3);
  arr[2] = 3 * Math.sin(9) + Math.log(5) + Math.sqrt(3);
  arr[3] = 2 * Math.tan(5) + 6 * Math.PI + Math.sqrt(12);
  var lower = 0;
  var high = 0;

  for (var _i = 0; _i < arr.length; _i++) {
    if (arr[_i] < arr[lower]) {
      lower = _i;
    }

    if (arr[_i] > arr[high]) {
      high = _i;
    }
  }

  alert("Минимальное: arr[" + lower + "] == " + arr[lower]);
  alert("Максимальное: arr[" + high + "] == " + arr[high]);
}

function lab3Task2() {
  var arr = ["pow", "pop", "push", "shift", "round", "floor", "sline", "sort"];
  var arrMath = [];
  var arrArray = [];

  for (var _i2 = 0; _i2 < arr.length; _i2++) {
    if (Array.prototype.hasOwnProperty(arr[_i2])) {
      arrArray.push(arr[_i2]);
    }

    if (Math.hasOwnProperty(arr[_i2])) {
      arrMath.push(arr[_i2]);
    }
  }

  arrMath.unshift("log");
  arrArray.push("unshift");
  console.log(arr);
  console.log(arrArray);
  console.log(arrMath);
}

function lab3Task3() {
  var name = "Солодкий Денис Викторович";
  console.log(name.length);
  var nameAnother = name;
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
  document.write("<tr><td>Месяц</td><td>", x.getMonth() + 1, "</td></tr>");
  document.write("<tr><td>День</td><td>", x.getDate(), "</td></tr>");
  document.write("<tr><td>Час</td><td>", x.getHours(), "</td></tr>");
  document.write("<tr><td>Минуты</td><td>", x.getMinutes(), "</td></tr>");
  document.write("<tr><td>Секунды</td><td>", x.getSeconds(), "</td></tr>");
  document.write("</table>");
}

function lab4Task1() {
  function Gruppa(n, spec, kolich, kurs) {
    this.n = n;
    this.spec = spec;
    this.kolich = kolich;
    this.kurs = kurs;
    var k;
    var j;

    this.add_stud = function add_stud(k) {
      kolich += k;
      console.log("В группу " + this.n + " добавили " + k + " cтудентов.");
    };

    this.sub_stud = function sub_stud(j) {
      kolich -= j;
      console.log("Из группы " + this.n + " удалили " + j + " cтудентов.");
    };

    this.output = function output() {
      console.log("Группа №" + n + "(" + spec + ")" + " в которой " + kolich + " студентов " + kurs + " курса.");
    };
  }

  gr1 = new Gruppa(1, "ИСИТ", 34, 2);
  gr2 = new Gruppa(2, "ПОИБМС", 28, 1);
  gr3 = new Gruppa(3, "ИСИТ", 21, 4);
  gr4 = new Gruppa(4, "ПОИТ", 25, 2);
  gr1.output();
  gr2.output();
  gr3.output();
  gr4.output();
  gr1.add_stud(2);
  gr2.sub_stud(3);
  gr3.add_stud(5);
  gr4.sub_stud(10);
  gr1.output();
  gr2.output();
  gr3.output();
  gr4.output();
}

function lab4Task2() {
  function Feature(mark, model, maxSpeed, numberDistance, numberFuel) {
    this.mark = mark;
    this.model = model;
    this.maxSpeed = maxSpeed;
    this.numberDistance = numberDistance;
    this.numberFuel = numberFuel;
    var numberRate = numberFuel / numberDistance * 100;

    this.output = function output() {
      console.log(mark + " " + model + ": maxSpeed == " + maxSpeed + "; numberDistance == " + numberDistance + "; numberFuel == " + numberFuel + "; numberRate == " + numberRate + ".\n");
    };
  }

  var car = [];
  car[0] = new Feature("Subaru", "Impreza", 210, 600, 51);
  car[0].output();
  car[1] = new Feature("Nissan", "GT-R", 375, 650, 85);
  car[1].output();
  car[2] = new Feature("Toyota", "Supra", 250, 880, 80);
  car[2].output();
  Feature.prototype.isTunned = this.isTunned;
  car[0].isTunned = false;
  car[1].isTunned = true;
  car[2].isTunned = false;

  for (var _i3 = 0; _i3 < 3; _i3++) {
    console.log("\n");

    car[_i3].output();

    if (car[_i3].isTunned) {
      console.log("\tThis car is tunned.\n");
    } else {
      console.log("\tThis car is not tunned.\n");
    }
  }
}

function lab4Task3() {
  var arr = [];
  arr[0] = 6 * Math.pow(Math.PI, 2) + 3 * Math.pow(Math.E, 8);
  arr[1] = 2 * Math.cos(4) + Math.cos(12) + 8 * Math.pow(Math.E, 3);
  arr[2] = 3 * Math.sin(9) + Math.log(5) + Math.sqrt(3);
  arr[3] = 2 * Math.tan(5) + 6 * Math.PI + Math.sqrt(12);
  arr[4] = 2 * Math.sin(2) + Math.PI + Math.log(43);
  console.log(arr);
  delete arr[3];
  console.log(arr);

  if (2 in arr) {
    console.log("В массиве есть 2ой элемент\n");
  } else {
    console.log("В массиве нету 2ого элемента\n");
  }

  function Feature(mark, model, maxSpeed, numberDistance, numberFuel) {
    this.mark = mark;
    this.model = model;
    this.maxSpeed = maxSpeed;
    this.numberDistance = numberDistance;
    this.numberFuel = numberFuel;
    var numberRate = numberFuel / numberDistance * 100;

    this.output = function output() {
      console.log(mark + " " + model + ": maxSpeed == " + maxSpeed + "; numberDistance == " + numberDistance + "; numberFuel == " + numberFuel + "; numberRate == " + numberRate + ".\n");
    };
  }

  var car = new Feature("Subaru", "Impreza", 210, 600, 51);

  if ("marke" in car) {
    console.log("Свойство marke находится у объекта car\n");
  } else {
    console.log("Свойства marke нет у объекта car\n");
  }

  if (car instanceof Object) {
    console.log("car is Object\n");
  } else {
    console.log("car is not Object\n");
  }

  if (arr instanceof Array) {
    console.log("arr is Array\n");
  } else {
    console.log("arr is not Array\n");
  }

  function number5() {
    return 5;
  }

  console.log("number5 is " + _typeof(number5));
  console.log("car is " + _typeof(car));
  console.log("car.mark is " + _typeof(car.mark));
  console.log("car.model is " + _typeof(car.model));
  console.log("car.maxSpeed is " + _typeof(car.maxSpeed));
  console.log("car.numberDistance is " + _typeof(car.numberDistance));
  console.log("car.numberFuel is " + _typeof(car.numberFuel));
  console.log("car.numberRate is " + _typeof(car.numberRate));
}

function lab5TaskFrom1To3() {
  for (var numberOfHtmlElement = 0; numberOfHtmlElement < document.all.length; numberOfHtmlElement++) {
    var _temp = document.all[numberOfHtmlElement];
    console.log(numberOfHtmlElement + 1 + ": " + _temp.tagName);
  }

  console.log("\t\t======666======");

  for (var numberOfBodysChild = 0; numberOfBodysChild < document.body.childNodes.length; numberOfBodysChild++) {
    if (numberOfBodysChild % 2) {
      var _temp2 = document.body.childNodes[numberOfBodysChild];
      console.log(_temp2);
    }
  }

  console.log("\t\t======666======");
  console.log("Через доступ all:");
  var isFirst = true;

  for (var _numberOfHtmlElement = 0; _numberOfHtmlElement < document.all.length; _numberOfHtmlElement++) {
    var _temp3 = document.all[_numberOfHtmlElement];

    if (_temp3.tagName == "SPAN" && isFirst) {
      console.log(_temp3);
      isFirst = false;
    }
  }

  console.log("Через частную коллекцию span:");
  var temp = document.getElementsByTagName('span');
  console.log(temp[0]);
  console.log("Через идентификатор элемента:");
  console.log(document.getElementById("name"));
}

function lab5Task4() {
  var temp = document.getElementById("change");
  var sum = 0;
  var number = 0;

  for (var numberOfTempsChild = 1; numberOfTempsChild < temp.childNodes.length; numberOfTempsChild++) {
    sum += Number(temp.childNodes[numberOfTempsChild].textContent);
    number++;
  }

  var result = sum / number;
  temp = document.getElementsByTagName("span");
  temp[0].textContent = "Среднее количество ядерного оружия с 1947 по 2018: " + result + "ед.";
  temp[0].style = "color: red; text-shadow: 2px 2px 3px darkred; font-size: 21px; font-family: Goth; background-color: darkgrey;";
}

function lab6Task1() {}
/******/ })()
;
//# sourceMappingURL=bundle.js.map