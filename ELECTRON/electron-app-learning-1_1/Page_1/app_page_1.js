    // https://www.w3schools.com/graphics/canvas_intro.asp
window.$ = window.jQuery = require ("jquery");

let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");
ctx.canvas.width = window.innerWidth;
ctx.canvas.height = window.innerHeight;
ctx.fillStyle = "#FFFFFF";                  //  Choose the default fill colour for objects on this canvas
ctx.fillRect(10,10,200,200);                //  Draw a rectangle of [(x,y), (x,y)] with the selected fill colour
ctx.fillRect (210,210,400,400);


$(function(){
	resizeCanvas();
});

$(window).on('resize', function(){
    resizeCanvas();
});

function resizeCanvas()
{
    var canvas = $("#canvas");      //  This line is present in examples. If left in it rescales everything when window resized
            //  EDIT: This is because the following commands edit the .css of the file, which causes stretching. We don't want that. 
            //          Commenting this line out seems to fit the job as wanted. 

    canvas.css("width", $(window).width());
    canvas.css("height", $(window).height());
};

