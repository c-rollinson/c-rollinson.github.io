const { remote } = require ("electron")
const { Menu, MenuItem } = remote

const menu = new Menu()
menu.append(new MenuItem({ label: "Circle", type: "radio", id: ("1"), checked: true, click() { menuNumb = 1, console.log(`id 1 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Square", type: "radio", id: "2", checked: false, click() { menuNumb = 2, console.log(`id 2 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ label: "Line", type: "radio", id: "3", checked: false, click() { menuNumb = 3, console.log(`id 3 chosen, menuNumb: ${menuNumb}`)} }))
menu.append(new MenuItem({ type: "separator" }))
menu.append(new MenuItem({ label: "Exit", click() {handleClick = 4}}))  //  Quit function not working. Wrong syntax?

//  Call an event on specific mouse press. 
window.addEventListener('contextmenu', (e) => {
  e.preventDefault()
  menu.popup({ window: remote.getCurrentWindow() })
}, false)

