//  Tutorial from   https://www.sitepoint.com/understanding-module-exports-exports-node-js/
//  Method 1
/*
const user = require ("./user");

console.log (`User: ${user.getName()} was born ${user.dob} in ${user.getLocation()}`);


//  Method 2
const { getName, dob, getLocation} = require ("./user");
console.log (`User: ${getName()} was born ${dob} in ${getLocation()}`);


//  Method 3

const User = require ("./Modules/user");
const jim = new User ("Jim", 37, "jim@jimMail.com");

console.log (jim.getUserStates());

*/
/*
$(function() {

    var two = new Two({
      fullscreen: true,
      autostart: true
    }).appendTo(document.body);

    var apple = two.makeRectangle(two.width / 2, two.height / 2, 250, 250);
    apple.noStroke().fill = getRandomColor();

    // Update the renderer in order to generate corresponding DOM Elements.
    two.update();

    $(apple._renderer.elem)
      .css('cursor', 'pointer')
      .click(function(e) {
        apple.fill = getRandomColor();
      });



    function getRandomColor() {
      return 'rgb('
        + Math.floor(Math.random() * 255) + ','
        + Math.floor(Math.random() * 255) + ','
        + Math.floor(Math.random() * 255) + ')';
    }

  });
  */


 var two = new Two({
  fullscreen: true,
  autostart: true
}).appendTo(document.body);

var path = two.makeStar(two.width / 2, two.height / 2, 37, 75, 7);
path.fill = 'none';
path.stroke = 'rgb(255, 100, 100)';
path.linewidth = 20;
path.opacity = 0.75;

two.update();

path._renderer.elem.style.cursor = 'pointer';

path._renderer.elem.addEventListener('click', function() {
  path.stroke = 'rgb('
    + Math.floor(Math.random() * 255) + ','
    + Math.floor(Math.random() * 255) + ','
    + Math.floor(Math.random() * 255) + ')';
}, false);

path._renderer.elem.addEventListener('mousemove', function() {
	path.opacity = 1;
}, false);

path._renderer.elem.addEventListener('mouseout', function() {
  path.opacity = 0.75;
});