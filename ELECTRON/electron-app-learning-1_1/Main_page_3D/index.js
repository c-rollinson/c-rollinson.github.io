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

$(function() {

    var two = new Two({
      fullscreen: true,
      autostart: true
    }).appendTo(document.body);

    var rect = two.makeRectangle(two.width / 2, two.height / 2, 250, 250);
    rect.noStroke().fill = getRandomColor();

    // Update the renderer in order to generate corresponding DOM Elements.
    two.update();

    $(rect._renderer.elem)
      .css('cursor', 'pointer')
      .click(function(e) {
        rect.fill = getRandomColor();
      });

    two.bind('update', function(frameCount, timeDelta) {
      rect.rotation = frameCount / 60;
    });

    function getRandomColor() {
      return 'rgb('
        + Math.floor(Math.random() * 255) + ','
        + Math.floor(Math.random() * 255) + ','
        + Math.floor(Math.random() * 255) + ')';
    }

  });
