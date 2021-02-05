//  https://code.tutsplus.com/tutorials/a-beginners-guide-to-drawing-2d-graphics-using-twojs--cms-31681
//  https://two.js.org/examples/three-extrusion.html

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


//  ***** Variable section
//  For nice grids, draw values offset by 0.5px
let X00 = 0.5;
let Y00 = 0.5;
let offsetX = 0;
let offsetY = 0;
let gridSmall = 8;                  //  Side length for small cubes
let gridLarge = 5 *gridSmall;       //  Side length for large cubes. 1 large = 5x5 grid of smalls

/*
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

//  Commenting the whole code for clarity. Rewriting necessary sections above.
let elem = document.getElementById("twoCanvas");
let ctx = elem.getContext("2d");
elem.width = window.innerWidth;
elem.height = window.innerHeight;
const params = {
    width = elem.width,
    height = elem.height
};

let two = new Two(params).appendTo(elem);

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

//  To rotate a singular object by a specific amount of degrees (math done in radians)
//  let a = 135;
//  rect.rotation = (a*Math.PI/180);    //  Formula is: num_degrees * Radians 

//  Make grouping for the objects
let group = two.makeGroup(circle, rect);

//  Do things to the group
group.translation.set(two.width /2, two.height /2 );
group.rotation = Math.PI;
group.scale = 1;
//  Can set a group to all have a singular property / parameter
group.linewidth = 7;

//  Animate the shapes
group.translation.set(two.width / 2, two.height / 2);
group.scale = 0;
group.noStroke();

//  Bind a function to scale and rotate the group to the animation loop.
two.bind("update", function( framecount ) {
    if ( group.scale > 0.9999 ) {
        group.scale = group.rotation = 0;
    }
    var t = ( 1 - group.scale ) * 0.125;
    group.scale +=t;
    group.rotation += t * 4 * Math.PI;
}).play();

circle.translation.set(two.width / 2, two.height / 2);
circle.scale = 1;
circle.opacity = 0.75;

//  Tell the program to render everything
two.update();
});