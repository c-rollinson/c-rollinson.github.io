    // https://www.w3schools.com/graphics/canvas_intro.asp
//window.$ = window.jQuery = require ("jquery");

//  https://github.com/jonobr1/two.js/issues/263  --> RESIZE ISSUE
//  https://github.com/jonobr1/two.js/issues/191

//  Further reading: https://dev.to/alexgurr/svg-splash-a-react-electron-svg-colouring-painting-macos-app-3abp


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

    let drawSpace = document.getElementById("numberDiv");
    drawSpace.width = window.innerWidth;
    drawSpace.height = window.innerHeight;
    const params = {
        type: Two.Types.svg,
        fullscreen: true,
        autostart: true
    };
    var two = new Two(params).appendTo(drawSpace);
  

//---------------Functions---------------//
    
    //  This will resize the canvas. Confirmed working.
    //  Please NOTE: if the canvas is resized, even maintiaing the same size (idk how tho) the entire scene is delete
    //  The scenes MUST be redrawn, hence the 'drawRect()' function being present in the initial setup code
    //  and the 'on resize' code. This will draw it once initially, and then redraw it if the window resizes.
    window.addEventListener("resize", (event) => {
        console.log (`Page resized from ( ${drawSpace.width} , ${drawSpace.height} ) to ( ${window.innerWidth} , ${window.innerHeight}`);
        drawSpace.width = window.innerWidth;
        drawSpace.height = window.innerHeight;
        setSize();
    });

    setSize = () => {
        width = window.innerWidth;
        height = window.innerHeight;
        two.renderer.setSize(width, height);
        console.log (`The canvas size is ${two.renderer.width} , ${two.renderer.height}`)
    };    

    drawRect = () => {
        let bool1 = new basicShapes.Rectangle ();
        let rect = two.makeRectangle ( event.offsetX, event.offsetY, bool1.width, bool1.height );
        basicShapes.paramRect(rect);
        rectGroup.add(rect);
        two.update();
    };

    drawCircle = () => {
        let bool2 = new basicShapes.Circle ();
        let circle = two.makeCircle( event.offsetX, event.offsetY, bool2.circleSize );
        basicShapes.paramCircle(circle);
        two.update();
    };

    drawStar = () => {
        let bool3 = new basicShapes.Star ();
        let star = two.makeStar ( event.offsetX, event.offsetY, bool3.starOR, bool3.starIR, bool3.starSides );
        basicShapes.paramStar(star);
        two.update();
    };

    drawRoundedRectangle = () => {
        let bool4 = new basicShapes.RoundedRectangle ();
        let roundedRect = two.makeRoundedRectangle( event.offsetX, event.offsetY, bool4.width, bool4.height, bool4.radius );
        basicShapes.paramRoundedRect (roundedRect);
        two.update();
    };

//---------------Variables---------------//

    const basicShapes = require ("./Modules/basicShapes");
    const pointInPath = require ("./Modules/pointInPath");
    const { getMenu } = require ("./app_page_1_menu");
    var rectGroup = two.makeGroup(); 

//---------------Main loop---------------//

    //  Test click 
    drawSpace.addEventListener("click", function (event) {
        console.log(`you clicked at ${event.x} , ${event.y}. Offest: ${event.offsetX} ${ event.offsetY}`)       
        getMenu();
        switch (menuNumb){
            case 1: 
                drawRect();
            break;
            case 2:
                drawCircle();
            break;
            case 3:
                drawStar();
            break;
            case 4:
                drawRoundedRectangle();
            break;
            case 5: //  If click a rectangle, random colour fill
                $(rectGroup._render.elem)
                .css("cursor", "pointer")
                .click(function (e) {
                    rectGroup.fill = "#FFFFFF";
                });
            break;
        }
    });

two.update();
});

