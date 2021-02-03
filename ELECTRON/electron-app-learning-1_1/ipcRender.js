const ipcRenderer = require('electron').ipcRenderer; 

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