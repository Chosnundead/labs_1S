let vectorOfImage1 = true, oYOfImage1 = 0;
function _image1() {
    $("#image1").css("top", oYOfImage1);
    if (vectorOfImage1) {
        oYOfImage1++;
        if (oYOfImage1 >= 666) {
            vectorOfImage1 = false;
        }
    } else {
        oYOfImage1--;
        if (oYOfImage1 <= 0) {
            vectorOfImage1 = true;
        }
    }
}
setInterval("_image1()", 21);

let vectorOfImage2 = true, oYOfImage2 = 0, oXOfImage2 = 500;
function _image2() {
    $("#image2").css("top", oYOfImage2);
    $("#image2").css("left", oXOfImage2);
    if (vectorOfImage2) {
        oYOfImage2++;
        oXOfImage2 += Math.sin(oYOfImage2) * 21;
        if (oYOfImage2 >= 666) {
            vectorOfImage2 = false;
        }
    } else {
        oYOfImage2--;
        oXOfImage2 -= Math.sin(oYOfImage2) * 21;
        if (oYOfImage2 <= 0) {
            vectorOfImage2 = true;
        }
    }
}
setInterval("_image2()", 21);