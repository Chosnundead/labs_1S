document.querySelector("#button").onclick = () => {
    let numberOfCourse, secondName, headerInfo, specializationInfo;
    let lessons = [];

    headerInfo = document.querySelector("#header").value;
    secondName = document.querySelector("#secondName").value;
    specializationInfo = document.querySelector("#specialization").value;
    for (let numberOfRadio = 0; numberOfRadio < document.querySelectorAll("#isCourse").length; numberOfRadio++) {
        if (document.querySelectorAll("#isCourse")[numberOfRadio].checked) {
            numberOfCourse = document.querySelectorAll("#isCourse")[numberOfRadio].value;
            break;
        }
    }
    for (let numberOfCheckbox = 0; numberOfCheckbox < document.querySelectorAll("#isLesson").length; numberOfCheckbox++) {
        if (document.querySelectorAll("#isLesson")[numberOfCheckbox].checked) {
            lessons.push(document.querySelectorAll("#isLesson")[numberOfCheckbox].value);
        }
    }

    document.querySelector("#header-out").innerHTML = headerInfo;
    document.querySelector("#info-out").innerHTML = "Студент " + secondName + " специальность " + specializationInfo + " курс " + numberOfCourse + " должен сдавать следующие предметы:";
    document.querySelector("#lessons-out").innerHTML = "";
    for (let numberOfLesson = 0; numberOfLesson < lessons.length; numberOfLesson++) {
        document.querySelector("#lessons-out").innerHTML += "<li>" + lessons[numberOfLesson] + "</li>";
        document.querySelector("#lessons").innerHTML += "<option>" + lessons[numberOfLesson] + "</option>";
    }
}