//let doc = new File([""], "data.xml");
//let reader = new FileReader();
//reader.readAsText(doc);
//reader.onloadend = (event) => {
//    console.log(reader.result);
//}
let xml = `<main>
	<student>
		<surname>Солодкий</surname>
		<java-script>
			7
		</java-script>
		<physics>
			5
		</physics>
		<english>
			7
		</english>
	</student>
	<student>
		<surname>
			Яцкевич
		</surname>
		<java-script>
			4
		</java-script>
		<physics>
			5
		</physics>
		<english>
			7
		</english>
	</student>
	<student>
		<surname>
			Подолянчик
		</surname>
		<java-script>
			5
		</java-script>
		<physics>
			7
		</physics>
		<english>
			6
		</english>
	</student>
	<student>
		<surname>
			Погудо
		</surname>
		<java-script>
			4
		</java-script>
		<physics>
			4
		</physics>
		<english>
			4
		</english>
	</student>
	<student>
		<surname>
			Мяделец
		</surname>
		<java-script>
			10
		</java-script>
		<physics>
			7
		</physics>
		<english>
			8
		</english>
	</student>
	<student>
		<surname>
			Маргун
		</surname>
		<java-script>
			5
		</java-script>
		<physics>
			2
		</physics>
		<english>
			3
		</english>
	</student>
</main>`;

let parser = new DOMParser();
let xmlAsDOM = parser.parseFromString(xml, "text/xml");
console.log(xmlAsDOM);
let table = document.createElement("table");
table.appendChild(document.createElement("tr"));
for (let step = 0; step < 4; step++) {
    table.querySelector("tr").appendChild(document.createElement("th"));
    switch (step) {
        case 0:
            table.querySelectorAll("th")[step].textContent = `Фамилия`;
            break;
        case 1:
            table.querySelectorAll("th")[step].textContent = `JS`;
            break;
        case 2:
            table.querySelectorAll("th")[step].textContent = `Физика`;
            break;
        case 3:
            table.querySelectorAll("th")[step].textContent = `Иностранный язык`;
            break;
    }
}
let oY = xmlAsDOM.querySelectorAll("student").length;
for (let step = 0; step < oY; step++) {
    let temp = document.createElement("tr");
    for (let stepByTemp = 0; stepByTemp < 4; stepByTemp++) {
        temp.appendChild(document.createElement("td"));
        switch (stepByTemp) {
            case 0:
                temp.querySelectorAll("td")[stepByTemp].textContent = xmlAsDOM.querySelectorAll("surname")[step].textContent;
                break;
            case 1:
                temp.querySelectorAll("td")[stepByTemp].textContent = xmlAsDOM.querySelectorAll("java-script")[step].textContent;
                break;
            case 2:
                temp.querySelectorAll("td")[stepByTemp].textContent = xmlAsDOM.querySelectorAll("physics")[step].textContent;
                break;
            case 3:
                temp.querySelectorAll("td")[stepByTemp].textContent = xmlAsDOM.querySelectorAll("english")[step].textContent;
                break;
        }
    }
    table.appendChild(temp);
}
document.body.appendChild(table);

//document.getElementById("name").innerHTML = parser.parseFromString(txt, "text/xml").getElementsByTagName("name")[0].childNodes[0].nodeValue;
//document.getElementById("family").innerHTML = parser.parseFromString(txt, "text/xml").getElementsByTagName("family")[0].childNodes[0].nodeValue;