let doc = new File([""], "data.xml");
let reader = new FileReader();
reader.readAsText(doc);
reader.onloadend = (event) => {
    console.log(reader.result);
}
//reader.addEventListener("loadend", (event) => {
//    console.log(reader.result);
//});
//let parser = new DOMParser();
//let doc = parser.parseFromString("data.xml", "text/xml");