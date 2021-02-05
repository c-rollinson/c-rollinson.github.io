//  READ THIS: https://stackoverflow.com/questions/36548228/when-to-use-remote-vs-ipcrenderer-ipcmain

const ipcRenderer = require('electron').ipcRenderer; 
const remote = require("electron").remote;

//  **************************************
//  Please use ctrl + F to jump to different sections of code
//  Main page: SEC01
//  2D Map maker: SEC02
//  3D renderer: SEC03
//  Other test page section: SEC04
//  **************************************

//  **************************************
//  Events for main page / landing page
//          SEC01
//  **************************************

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

//  List of buttons
const btnclick_2 = document.getElementById("loadnewwindow");
const btnclick_3 = document.getElementById("newWindowDrawing");
const btnclick_4 = document.getElementById("THREEJsTransparentCube");
const btnclick_5 = document.getElementById("TWOJsDrawing");
const btnclick_6 = document.getElementById("2D_map");
const btnclick_7 = document.getElementById("3D_map");


//  Button 2: Open web browser to goodle.
btnclick_2.addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_2"); // ipcRender.send will pass the information to main process
    console.log("Clicked: button 2");
});

ipcRenderer.on("button_2-task-finished", (e) => {
    console.log("loaded a popup");                                 
 });

//  Button 3
btnclick_3.addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_3");
    console.log("Clicked: button 3");
});

ipcRenderer.on("button_3-task-finished", (e) => {
    console.log("opened new window");
});

//  Button 4
btnclick_4 .addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_4");
    console.log("Clicked: button 4");
});

ipcRenderer.on("button_4-task-finished", (e) => {
    console.log( "opened something neat" );
});

//  Button 5
btnclick_5 .addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_5");
    console.log("Clicked: button 5");
});

ipcRenderer.on("button_5-task-finished", (e) => {
    console.log( "opened twos test area" );
});

//  Button 6
btnclick_6 .addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_6");
    console.log("Clicked: button 6");
});

ipcRenderer.on("button_6-task-finished", (e) => {
    console.log( "Opened 2D edit window" );
});

//  Button 7
btnclick_7 .addEventListener("click", (e) => {
    ipcRenderer.send("btnclick_7");
    console.log("Clicked: button 7");
});

ipcRenderer.on("button_7-task-finished", (e) => {
    console.log( "Opened 3D view window" );
});

//  **************************************
//  Events for 2D page
//          SEC02
//  **************************************


//  **************************************
//  Events for 3D page
//          SEC03
//  **************************************


//  **************************************
//  Events for test section
//          SEC04
//  **************************************
});