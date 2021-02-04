//  READ THIS: https://stackoverflow.com/questions/36548228/when-to-use-remote-vs-ipcrenderer-ipcmain

const ipcRenderer = require('electron').ipcRenderer; 

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

//  Button 2
const btnclick_2= document.getElementById('loadnewwindow');

btnclick_2.addEventListener('click', (e2) => {
    var arg ="secondparam";
    ipcRenderer.send("btnclick_2", arg); // ipcRender.send will pass the information to main process
    console.log("Clicked: button 2");
});

ipcRenderer.on('button_2-task-finished', function(event,param) {
    console.log("loaded a popup");                                 
 });

//  Button 3
const btnclick_3 = document.getElementById('newWindowDrawing');
btnclick_3.addEventListener('click', (e3) => {
    var arg = "secondparam";
    ipcRenderer.send("btnclick_3", arg);
    console.log("Clicked: button 3");
});

ipcRenderer.on("button_3-task-finished", (e3, param) =>{
    console.log("opened new window");
});

//  Buton 4
const btnclick_4 = document.getElementById('THREEJsTransparentCube');
btnclick_4 .addEventListener('click', (e4) => {
    var arg = "secondparam";
    ipcRenderer.send("btnclick_4", arg);
    console.log("Clicked: button 4");
});

ipcRenderer.on("button_4-task-finished", (e4, param) => {
    console.log( "opened something neat" );
});

//  Buton 5
const btnclick_5 = document.getElementById('TWOJsDrawing');
btnclick_5 .addEventListener('click', (e5) => {
    var arg = "secondparam";
    ipcRenderer.send("btnclick_5", arg);
    console.log("Clicked: button 5");
});

ipcRenderer.on("button_5-task-finished", (e5, param) => {
    console.log( "opened twos test area" );
});

//  Buton 6
const btnclick_6 = document.getElementById("2D_map");
btnclick_6 .addEventListener('click', (e6) => {
    var arg = "secondparam";
    ipcRenderer.send("btnclick_6", arg);
    console.log("Clicked: button 6");
});

ipcRenderer.on("button_6-task-finished", (e6, param) => {
    console.log( "Opened 2D edit window" );
});

//  Buton 7
const btnclick_7 = document.getElementById("3D_map");
btnclick_7 .addEventListener('click', (e7) => {
    var arg = "secondparam";
    ipcRenderer.send("btnclick_7", arg);
    console.log("Clicked: button 7");
});

ipcRenderer.on("button_7-task-finished", (e7, param) => {
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
