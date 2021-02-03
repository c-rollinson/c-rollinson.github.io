    // https://www.w3schools.com/graphics/canvas_intro.asp
let canvas = document.getElementById("canvas");
let ctx = canvas.getContext("2d");
ctx.canvas.width = window.innerWidth;
ctx.canvas.height = window.innerHeight;
ctx.fillStyle = "#FFFFFF";                  //  Choose the default fill colour for objects on this canvas
ctx.fillRect(10,10,200,200);                //  Draw a rectangle of [(x,y), (x,y)] with the selected fill colour
ctx.fillRect (210,210,400,400);

