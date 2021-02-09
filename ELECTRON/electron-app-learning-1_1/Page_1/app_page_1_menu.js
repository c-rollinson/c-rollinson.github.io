const { remote } = require ("electron")
const { Menu, MenuItem } = remote

const menu = new Menu()
menu.append(new MenuItem({ label: "No draw", type: "radio", id: "5", checked: false, click() { menuNumb = 5, console.log(`id 5 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Rectangle", type: "radio", id: ("1"), checked: false, click() { menuNumb = 1, console.log(`id 1 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Circle", type: "radio", id: "2", checked: false, click() { menuNumb = 2, console.log(`id 2 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Star", type: "radio", id: "3", checked: false, click() { menuNumb = 3, console.log(`id 3 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Rounded Rectangle", type: "radio", id: "4", checked: false, click() { menuNumb = 4, console.log(`id 4 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ type: "separator" }))
menu.append(new MenuItem({ label: "Exit", click() {handleClick = 4, closeWindow()}}))  //  Quit function not working. Wrong syntax?

//  Call an event on specific mouse press. 
window.addEventListener("contextmenu", (event) => {
  event.preventDefault()
  menu.popup({ window: remote.getCurrentWindow() })
}, false)

//  Function to close window
function closeWindow() {
  var window = remote.getCurrentWindow();
  window.close();
}

window.addEventListener("keydown", (event) => {
    if (event.key === "Escape") {
      closeWindow();
    };
}, false)

exports.getMenu = () => {
  return menuNumb;
}
