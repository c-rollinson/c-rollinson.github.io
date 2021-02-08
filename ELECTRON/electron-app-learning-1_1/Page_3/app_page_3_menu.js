//  https://developer.mozilla.org/en-US/docs/Web/API/Element/contextmenu_event
const { remote } = require ("electron")
const { Menu, MenuItem } = remote

const menu = new Menu()
menu.append(new MenuItem({ label: 'MenuItem1', click() { console.log('item 1 clicked') } }))
menu.append(new MenuItem({ type: 'separator' }))
menu.append(new MenuItem({ label: 'MenuItem2', type: 'checkbox', checked: true }))


//  Call an event on specific mouse press. 
window.addEventListener('contextmenu', (e) => {
  e.preventDefault()
  menu.popup({ window: remote.getCurrentWindow() })
}, false)


const menu2 = new Menu()
menu2.append(new MenuItem({ label: 'Quit', click() {window.quit()} }))
menu2.append(new MenuItem({ type: 'separator' }))
menu2.append(new MenuItem({ label: 'MenuItem4', type: 'checkbox', checked: false }))


//  Call an event on specific key press. 
window.addEventListener('keydown', (e) => {
    if (e.key === "q") {
      e.preventDefault()
      menu2.popup( { window: remote.getCurrentWindow() })
    };
}, false)

