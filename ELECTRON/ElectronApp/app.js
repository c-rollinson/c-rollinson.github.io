// note that the fs package does not exist on a normal browser
import fs from "fs";

//a dialog box module from electron
//import { remote } from "electron";
import { dialog } from 'electron';

// Also note that document does not exist in a normal node environment
// button click event
document.getElementById("mybutton").addEventListener("click", () => {
  alert("test");
  const data = "Successfully wrote to the desktop"; // the data we want to save to the desktop

  dialog.showSaveDialog(filename => {

    writeFileSync(filename + ".txt", data, "utf-8", () => {
      console.log("attempted to write to the desktop");
    });
  });
});