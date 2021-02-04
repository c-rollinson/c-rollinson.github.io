window.$ = window.jQuery = require ("jquery");

$(function(){
	resizeCanvas();
});

$(window).on('resize', function(){
    resizeCanvas(); 
    
});

function resizeCanvas() {
    var canvas = $("#canvas");      //  This line is present in examples. If left in it rescales everything when window resized
            //  EDIT: This is because the following commands edit the .css of the file, which causes stretching. We don't want that. 
            //          Commenting this line out seems to fit the job as wanted. 
    canvas.css("width", $(window).width());
    canvas.css("height", $(window).height());
};
