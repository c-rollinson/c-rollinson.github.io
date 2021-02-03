const { app, BrowserWindow } = require("electron");
const { ipcMain } = require( "electron" );

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

app.on("ready", createWindow);

//  ****************
//  New Windows
//  ****************

//  New Window 1: Open google browser
ipcMain.on("btnclick_2",function (e2, arg) {
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
    });  // create a new window
  var googleURL =  "https://www.google.com"; 

  newWindow.loadURL(googleURL);
  newWindow.once('ready-to-show', () => {
    newWindow.show();
    
  });
  e2.sender.send("btnclick-task-finished", "yes"); 
});

//  New window 2: Canvas Drawing
ipcMain.on("btnclick_3",  (e3, arg) => {
  let newWindow_3 = new BrowserWindow( { 
    width: 1600, 
    height: 900, 
    show: false,
    backgroundColor: '#420024',
    webPreferences: {
      nodeIntegration: true,
      enableRemoteModule: true
    }
  });  // create a new window
  newWindow_3.loadFile("./Page_1/index_page_1.html");
  newWindow_3.once('ready-to-show', () => {
    newWindow_3.show();
  });
  e3.sender.send("button_3-task-finished", "yes");
});

//  New window 3: THREE.js transparent cube
ipcMain.on("btnclick_4",  (e4, arg) => {
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
  e4.sender.send("button_4-task-finished", "yes");
});

//  New window 4: TWO.js playground
ipcMain.on("btnclick_5",  (e5, arg) => {
  let newWindow_5 = new BrowserWindow( { 
    width: 1600, 
    height: 900, 
    show: false,
    backgroundColor: "#66a3ff",
    webPreferences: {
      nodeIntegration: true,
      enableRemoteModule: true
    }
  });  // create a new window
  newWindow_5.loadFile("./Page_3/index_page_3.html");
  newWindow_5.once("ready-to-show", () => {
    newWindow_5.show();
  });
  e5.sender.send("button_5-task-finished", "yes");
});