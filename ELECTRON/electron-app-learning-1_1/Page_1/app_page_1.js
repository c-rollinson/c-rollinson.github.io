    // https://www.w3schools.com/graphics/canvas_intro.asp
//window.$ = window.jQuery = require ("jquery");

//  https://github.com/jonobr1/two.js/issues/263  --> RESIZE ISSUE
//  https://github.com/jonobr1/two.js/issues/191
const { remote } = require ("electron")

function docReady(fn) {
    // see if DOM is already available
    if (document.readyState === "complete" || document.readyState === "interactive") {
        // call on next available tick
        setTimeout(fn, 1);
    } else {
        document.addEventListener("DOMContentLoaded", fn);
    }
}    


docReady(function() {

    let canvas = document.getElementById("numberCanvas");
    let ctx = canvas.getContext("2d");
    canvas.width = window.innerWidth;
    canvas.height = window.innerHeight;
    //  Insert two.js stuff
    var params = {
        width: canvas.width,
        height: canvas.height,
        autostart: true
    };
    let two = new Two(params).appendTo(canvas);

    two.bind("resize", function(width, height) {
        two.scene.translation.set(width / 2, height / 2);
    });

    function setSize() {
        width = window.innerWidth;
        height = window.innerHeight;
        two.renderer.setSize(width, height);
    };

    drawRect();
    drawCircle();

    //  This will resize the canvas. Confirmed working.
    //  Please NOTE: if the canvas is resized, even maintiaing the same size (idk how tho) the entire scene is delete
    //  The scenes MUST be redrawn, hence the 'drawRect()' function being present in the initial setup code
    //  and the 'on resize' code. This will draw it once initially, and then redraw it if the window resizes.
    window.addEventListener("resize", (event) => {
        console.log (`Page resized from ( ${canvas.width} , ${canvas.height} ) to ( ${window.innerWidth} , ${window.innerHeight}`);
        canvas.width = window.innerWidth;
        canvas.height = window.innerHeight;
        setSize();
        drawRect();
        drawCircle();
       });

    //  Test click 
    canvas.addEventListener("click", function (event) {
        console.log(`you clicked at ${event.x},${event.y}`)
    });

    //  Test clcik: right mouse.
    window.addEventListener("contextmenu", (event) => {
        console.log (`you right clicked at ${event.x},${event.y}`)
    });

    function drawRect() {
        ctx.fillStyle = "#FFFFFF";
        ctx.fillRect (50,50,400,400);       
    };

    function drawCircle() {
        circle = two.makeCircle(100, 100, 50);
        circle.fill = "#FF8000";
        circle.stroke = "orangered";
        circle.linewidth = 3;
    };



two.update();

});

/*

let canvas = document.getElementById("connect");
let ctx = document.getContext("2d");
ctx.canvas2.width = window.innerWidth;
ctx.canvas2.height = window.innerHeight;
ctx.fillStyle = "#FFFFFF";                  //  Choose the default fill colour for objects on this canvas
ctx.fillRect(10,10,200,200);                //  Draw a rectangle of [(x,y), (x,y)] with the selected fill colour
ctx.fillRect (210,210,400,400);
let params = {
    fullscreen: true
};
let two = new Two(params).appendTo(canvas);


canvas2.addEventListener("click", function (event) {
    console.log(`you clicked at ${event.x},${event.y}`);
    let x = event.offsetX;
    let y = event.offsetY;
    let circle = two.makeCircle(x, y, 50);
    circle.fill = "#FF8000";
    circle.stroke = "orangered";
    circle.linewidth = 3;
    circle.opacity = 1;
    console.log(`alt: offset coords: ${x},${y}`);
    console.log(`${circle.fill}, ${circle.id}`)
    two.update();
});

canvas2.addEventListener("contextmenu", function (event) {
    console.log(`you clicked at ${event.x},${event.y}`);
    two.Clear();
    console.log(`alt: offset coords: ${x},${y}`);

});
*/