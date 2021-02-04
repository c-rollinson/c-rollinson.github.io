//  READ THIS: https://stackoverflow.com/questions/36548228/when-to-use-remote-vs-ipcrenderer-ipcmain

let elem = document.getElementById("twoCanvas");
let ctx = elem.getContext("2d");
let params = {
    fullscreen: true
};
let two = new Two(params).appendTo(elem);
const canvas = elem.getElementsByTagName("canvas")[0];

//  ********************
const vertexSize = 12;
const vertexOutlineSize = vertexSize /4;

//  Create a group for all the objects, like a layer in photoshop
const vertexGroup = two.makeGroup();

//  Array that will hold the layer objects
const vertices = vertexGroup.children;

//  Call an event on specific mouse press. 
window.addEventListener('click', (e3C) => {
    //  Get x / y of the click
    let x = e3C.offsetX;
    let y = e3C.offsetY;

    let vertex = two.makeCircle(x, y, vertexSize);

    //set fill colour / etc.
    vertex.fill = "#fcba03";
    vertex.linewidth = vertexOutlineSize;

    //  Add the new object to the group.
    vertexGroup.add(vertex);

});

//  Create a vertex on click

//  ********************
two.update();

