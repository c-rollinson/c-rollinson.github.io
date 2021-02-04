//  This file will close the open window if the escape key is pressed. 
//  Sourced from: https://stackoverflow.com/questions/31171597/atom-electron-close-the-window-with-javascript

const remote = require("electron").remote;

window.addEventListener('keydown', (e) => {
    if (e.key === "Escape") {
        var window = remote.getCurrentWindow();
        window.close();
    };
}, false)