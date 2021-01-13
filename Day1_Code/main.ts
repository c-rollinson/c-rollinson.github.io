let myHeading = document.querySelector ('h1');
myHeading.textContent = 'Hello World2';
let myButton = document.querySelector('button');

// A function that is called when a button is pressed for name. 
/* THIS IS THE FIRST VERSION OF THIS FUNCTION. REDONE NEXT SET
function setUserName() {
    let myName = prompt('Please enter your name.');
    localStorage.setItem('name', myName);
    myHeading.textContent = 'Mozilla is cool, ' + myName;
    if(!localStorage.getItem('name')){
        setUserName();
    }
    else{
        let storedName = localStorage.getItem('name');
        myHeading.textContent = 'Mozilla is cool, ' + storedName;
    }
  }
*/

//  THIS IS THE SECOND VERSION OF THE BUTTON FUNCTION
function setUserName(){
    let myName = prompt('Please enter your name. ');
    //  While no name has been entered (ie. null) rerun the function from the start.
    if (!myName){
        setUserName();
    }
    //  If a valid name entered store it and change web title.
    else{
        localStorage.setItem('name', myName);
        myHeading.textContent = `Mozilla is cool, ${myName}`;
    }
}

  //    This function currently doesn't work. Investigate further.
function titleColour()
{
    let colourText = document.querySelector('h1');
    colourText.style.color = "#8B008B";
    //  Conor Rollinson
    //  New comment testfile

}
