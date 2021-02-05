const { app, BrowserWindow } = require("electron");
const { ipcMain } = require( "electron" );
const remote = require("electron").remote;
//  https://www.electronjs.org/docs/api/browser-window

//  Main window. Consider making this a small vertical popup with 
//  a selection of vertical buttons
function createWindow() {
  // Create the browser window.
  let win = new BrowserWindow({
    width: 1200,
    height: 800,
    webPreferences: {
      nodeIntegration: true,
      enableRemoteModule: true
    }
  });
  // and load the index.html of the app.
  win.loadFile("index.html");
}

//  https://github.com/electron/electron/blob/master/docs/api/browser-window.md#class-browserwindow
//  Const settings for new windows
const newWindowSettings = ({
  width: 1200,
  height: 800,
  backgroundColor: "#5277ff",
  backgroundThrottling: true,
  fullScreenable: false,
  webPreferences: {
    nodeIntegration: true,
    enableRemoteModule: true
  }
});

app.on("ready", createWindow);

//  **************************************
//  Events for Main / landing page
//          New Window Creation
//  **************************************

//  New Window 1: Open google browser
ipcMain.on("btnclick_2", (e) => {
  //create new window
  let newWindow = new BrowserWindow({
    width: 1200, 
    height: 750, 
    show: false,
    backgroundColor: '#420024',
    webPreferences: {
      webSecurity: false,
      plugins:true,
      nodeIntegration: false,
      enableRemoteModule: true
    }
  });
  var googleURL =  "https://www.google.com"; 
  newWindow.loadURL(googleURL);
  newWindow.once('ready-to-show', () => {
    newWindow.show();
  });
  e.sender.send("btnclick-task-finished", "yes"); 
});


//  New window 2: Canvas Drawing
ipcMain.on("btnclick_3",  (e) => {
  let newWindow_3 = new BrowserWindow(newWindowSettings); 
  newWindow_3.loadFile("./Page_1/index_page_1.html");
  newWindow_3.once('ready-to-show', () => {
    newWindow_3.show();
  });
  e.sender.send("button_3-task-finished", "yes");
});

//  New window 3: THREE.js transparent cube
ipcMain.on("btnclick_4",  (e) => {
  let newWindow_4 = new BrowserWindow({
    width: 1800, 
    height: 1200, 
    frame:false, 
    transparent: true,
    webPreferences: {
      nodeIntegration: true,
      enableRemoteModule: true
    }
  }); 
  newWindow_4.setIgnoreMouseEvents(true);  
  newWindow_4.loadFile("./Page_2/index_page_2.html");
  newWindow_4.on('closed', function() {
  });
  e.sender.send("button_4-task-finished", "yes");
});


//  New window 4: TWO.js playground
ipcMain.on("btnclick_5",  (e) => {
  let newWindow_5 = new BrowserWindow(newWindowSettings); 
  newWindow_5.loadFile("./Page_3/index_page_3.html");
  newWindow_5.once("ready-to-show", () => {
    newWindow_5.show();
  });
  e.sender.send("button_5-task-finished", "yes");
});


//  New window 5: 2D map tool
ipcMain.on("btnclick_6",  (e) => {
  let newWindow_6 = new BrowserWindow(newWindowSettings); 
  newWindow_6.loadFile("./Main_page_2D/2D_index.html");
  newWindow_6.once("ready-to-show", () => {
    newWindow_6.show();
  });
  e.sender.send("button_6-task-finished", "yes");
});


//  New window 5: 3D map tool
ipcMain.on("btnclick_7",  (e) => {
  let newWindow_7 = new BrowserWindow(newWindowSettings); 
  newWindow_7.loadFile("./Main_page_3D/3D_index.html");
  newWindow_7.once("ready-to-show", () => {
    newWindow_7.show();
  });
  e.sender.send("button_7-task-finished", "yes");
});

