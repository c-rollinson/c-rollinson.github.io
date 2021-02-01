const fs = require("fs");

const { dialog } = require("electron").remote;

document.getElementById("mybutton").addEventListener("click", () => {
  const data = "Successfully wrote to the desktop";

  dialog.showSaveDialog(filename => {
    fs.writeFileSync(filename + ".txt", data, "utf-8", () => {
      console.log("attempted to write to the desktop");
    });
  });
});
