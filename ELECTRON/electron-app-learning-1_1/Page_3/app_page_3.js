//  https://code.tutsplus.com/tutorials/a-beginners-guide-to-drawing-2d-graphics-using-twojs--cms-31681
//  https://two.js.org/examples/three-extrusion.html

//  Make new instance of 'two' and place it upon the page
let elem = document.getElementById("twoCanvas");
let params = {
    fullscreen: true
};

let two = new Two(params).appendTo(elem);

//  Make some basic shapes
let circle = two.makeCircle(0, 0, 50);
//let rect = two.makeRectangle(213, 0, 100, 200);

//  Add some styling to the objects
circle.fill = "#FF8000";
circle.stroke = "orangered";
circle.linewidth = 3;
/*
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
*/

circle.translation.set(two.width / 2, two.height / 2);
circle.scale = 1;
circle.opacity = 0.75;

//  Tell the program to render everything
two.update();
    