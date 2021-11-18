document.querySelector("#o-0").setAttribute("src", "videos/video0.mp4");
document.querySelector("#o-1").setAttribute("src", "songs/song0.mp3");

document.querySelector("#b-0").onclick = () => {
    document.querySelector("#o-0").setAttribute("src", "videos/video0.mp4");
    document.querySelector("#o-1").setAttribute("src", "songs/song0.mp3");
}

document.querySelector("#b-1").onclick = () => {
    document.querySelector("#o-0").setAttribute("src", "videos/video1.mp4");
    document.querySelector("#o-1").setAttribute("src", "songs/song1.mp3");
}

document.querySelector("#b-2").onclick = () => {
    document.querySelector("#o-0").setAttribute("src", "videos/video2.mp4");
    document.querySelector("#o-1").setAttribute("src", "songs/song2.mp3");
}