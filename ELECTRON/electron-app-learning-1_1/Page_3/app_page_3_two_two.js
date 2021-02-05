//  READ THIS: https://stackoverflow.com/questions/36548228/when-to-use-remote-vs-ipcrenderer-ipcmain
const { remote } = require ("electron")
window.$ = window.jQuery = require ("jquery");

function docReady(fn) {
    if (document.readyState === "complete" || document.readyState === "interactive") {      // see if DOM is already available
        setTimeout(fn, 1);                                                                  // call on next available tick
    } else {
        document.addEventListener("DOMContentLoaded", fn);
    }
};

docReady (function() {
    let elem = document.getElementById("twoCanvas");
    let ctx = elem.getContext("2d");
    ctx.elem.width = window.innerWidth;
    ctx.elem.height = window.innerHeight;
    let params = {
        fullscreen: true
    };
    let two = new Two(params).appendTo(elem);
    const canvas1 = elem.getElementsByTagName("twoCanvas")[0];      //  Array of sub elements belonging to the canvas

    //  ********************
    const vertexSize = 30;
    const vertexOutlineSize = vertexSize /4;  
    const vertexGroup = two.makeGroup();                //  Create a group for all the objects, like a layer in photoshop
    const vertices = vertexGroup.children;              //  Array that will hold the layer objects

    //  Make some basic shapes
    let circle = two.makeCircle(0, 0, 50);
    let rect = two.makeRectangle(213, 0, 100, 200);

    //  Add some styling to the objects
    circle.fill = "#FF8000";
    circle.stroke = "orangered";
    circle.linewidth = 3;
    rect.fill = "#ff478e";
    rect.opacity = 0.75;
    rect.stroke = "#6b1c3a";
    rect.linewidth = 3;

    //  This is working
    elem.addEventListener("click", function (event) {
        console.log(`you clicked at ${event.x},${event.y}`);
        let x = event.offsetX;
        let y = event.offsetY;
        console.log(`alt: offset coords: ${x},${y}`);

        let vertex = two.makeCircle(x, y, vertexSize);
        vertex.fill = "#FFFFFF";                                //set fill colour / etc.
        vertex.stroke = "#000000";
        vertex.linewidth = vertexOutlineSize;                   //  Add the new object to the group.
        vertexGroup.add(vertex);
      });

    //  ********************
    two.update();
});  
 