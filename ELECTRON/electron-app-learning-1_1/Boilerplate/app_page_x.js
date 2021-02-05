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
    ctx.fillStyle = "#FFFFFF";
    ctx.fillRect = (50,50,400,400);

    //  This will resize the canvas. Confirmed working. NOTE: event might need to be "UIevent" src= https://developer.mozilla.org/en-US/docs/Web/API/UIEvent
    window.addEventListener("resize", (event) => {
        //  Log the canavs resize event from old size to new
        console.log (`Page resized from ( ${canvas.width} , ${canvas.height} ) to ( ${window.innerWidth} , ${window.innerHeight}`);
        //  resize the canvas
        canvas.width = window.innerWidth;
        canvas.height = window.innerHeight;
    });

    //  Test click. This ONLY works inside the canvas, so you know if its resized or not
    canvas.addEventListener("click", function (event) {
        console.log(`you clicked at ${event.x},${event.y}`)
    });

    //  Test click: right mouse.
    window.addEventListener("contextmenu", (event) => {
        console.log (`you right clicked at ${event.x},${event.y}`)
    });

});
