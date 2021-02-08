    // https://www.w3schools.com/graphics/canvas_intro.asp
//window.$ = window.jQuery = require ("jquery");

//  https://github.com/jonobr1/two.js/issues/263  --> RESIZE ISSUE
//  https://github.com/jonobr1/two.js/issues/191


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

    //const { checkTicked } = require ("./app_page_1_menu");
    const circleSize = 20;
    const rectWidth = 60;
    const rectHeight = 30;
    let menuNumb2 = 1;
    let x = 1;
    let y = 1;

    let drawSpace = document.getElementById("numberDiv");
    //let ctx = canvas.getContext("2d");
    drawSpace.width = window.innerWidth;
    drawSpace.height = window.innerHeight;
    //  Insert two.js stuff
    const params = {
        type: Two.Types.svg,
        fullscreen: true,
        autostart: true
    };
    var two = new Two(params).appendTo(drawSpace);

    function setSize() {
        width = window.innerWidth;
        height = window.innerHeight;
        two.renderer.setSize(width, height);
        console.log (`The canvas size is ${two.renderer.width} , ${two.renderer.height}`)
    };
   
    //  This will resize the canvas. Confirmed working.
    //  Please NOTE: if the canvas is resized, even maintiaing the same size (idk how tho) the entire scene is delete
    //  The scenes MUST be redrawn, hence the 'drawRect()' function being present in the initial setup code
    //  and the 'on resize' code. This will draw it once initially, and then redraw it if the window resizes.
    window.addEventListener("resize", (event) => {
        console.log (`Page resized from ( ${drawSpace.width} , ${drawSpace.height} ) to ( ${window.innerWidth} , ${window.innerHeight}`);
        drawSpace.width = window.innerWidth;
        drawSpace.height = window.innerHeight;
        //drawCircle();
        setSize();
       });

    //  Test click 
    drawSpace.addEventListener("click", function (event) {
        console.log(`you clicked at ${event.x} , ${event.y}`);
        //getMenuNumb();
        console.log(` x: ${x}, y: ${y},${event.x} , ${event.y}, ${event.offsetX} ${ event.offsetY}`)       
        switch (menuNumb2){
            case 1: 
            drawRect(event);
            menuNumb2 ++;
            break;
            case 2:
            drawCircle(event);
            menuNumb2 --;
            break;
        }
        

        console.log(`alt: offset coords: ${event.offsetX},${event.offsetY}`);
    });

    //  Test click: right mouse.
    window.addEventListener("contextmenu", (event) => {
        console.log (`you right clicked at ${event.x},${event.y}`)
    });

    function drawCircle (event){
        x = event.x;
        y = event.y;
        let circle = two.makeCircle(x, y, circleSize);
        circle.fill = "#FF8000";
        circle.stroke = "orangered";
        circle.linewidth = 3;
        //  circle.translation.set(drawSpace.width/2, drawSpace.height/2);
        console.log (` Circle# ${circle.id} drawn at ${x} , ${ y}`);
    };

    function drawRect (event) {
        x = event.offsetX;
        y = event.offsetY;
        let rect = two.makeRectangle (x, y, rectWidth, rectHeight);
        rect.fill = "#F0FF00";
        rect.stroke = "#FF5D00";
        rect.linewidth = 3;
        console.log (` Rectangle # ${rect.id} drawn at ${x} , ${y}`);   
    }

two.update();
});











/*


//  ***** Variable section
//  For nice grids, draw values offset by 0.5px
let X00 = 0.5;
let Y00 = 0.5;
let offsetX = 0;
let offsetY = 0;
let gridSmall = 8;                  //  Side length for small cubes
let gridLarge = 5 *gridSmall;       //  Side length for large cubes. 1 large = 5x5 grid of smalls


//  Draw grid
let gridSmallRect = two.makeRectangle (0 + X00 + offsetX, 0 + Y00 + offsetY, gridSmall, gridSmall) =>
{
       for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            new gridSmallRect;                  //  Draw a new small rectangle
            gridSmallRect.addTo(gridSmallRectGroup)
            offsetX = offsetX + gridSmall;      //  Offset the initial Y value by the length of one grid square
        }
        offsetY = offsetY + gridSmall;          //  Offset the initial X value byt the lenght of one grid square
    }
    gridSmallRectGroup.noFill;
    gridSmallRectGroup.linewidth = 2;
    gridSmallRectGroup.stroke = "#5e5e5e";
} ;

//gridSmallRect.stroke = "#a0a2a3";

let gridLargeRect = two.makeRectangle(0, 0, gridLarge, gridLarge);
gridLargeRect.stroke = "#5e5e5e";

//  Call the render process
two.update();
*/