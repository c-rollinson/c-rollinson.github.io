//  Adopted from: https://www.geeksforgeeks.org/save-files-in-electronjs/
//  Reference: https://www.electronjs.org/docs/api/dialog#dialogshowsavedialogsyncbrowserwindow-options

const fs = require("fs");
const { dialog } = require("electron").remote;

document.getElementById("mybutton").addEventListener("click", (event) => {
  const data = "Please work";      // String that will be saved in the text doc   

  dialog.showSaveDialog( {                    //  The 'save file' box. Features of it can be edited here
    title: "Select the File Path to Save",    //  Popup box head title
    buttonLabel: "Save",                      //  'yes'/'save'/'ok' button text
    filters: [                                //  Filters for type of file to save. 
      {   
        name: "Text Files",                   //  Display the file extension as type 'Text Files'
        extensions: ["txt", "docx"]           //  File extension type (windows and mac)
      },
    ],
    properties: [                             //  Special properties for the saved file. 
      "dontAddToRecent"                       //  Don't add the new saved file to 'recent docs' list (windows)
    ]

  }).then(file => {                           //  After save popup box, do this

    console.log(file.canceled);     // If save box is canceled, return true and print in console
    // else
    if (!file.canceled) { 
        console.log(file.filePath.toString()); 
          
        fs.writeFile(file.filePath.toString(),  
                     data, function (err) { 
            if (err) throw err; 
            console.log('Saved!'); 
        }); 
      } 
  }).catch(err => { 
      console.log(err) 
  }); 
}); 
