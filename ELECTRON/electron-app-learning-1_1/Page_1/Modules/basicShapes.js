//--------------- Class Exports ---------------//

class Circle {
    constructor (){
    this.circleSize = 100;
    }
};

class Rectangle {
    constructor () {
        this.width = 100;
        this.height = 150;
    }
};

class Star {
    constructor () {
        this.starOR = 50;
        this.starIR = 30;
        this.starSides = 6;
    }
};

class RoundedRectangle {
    constructor () {
        this.width = 100;
        this.height = 150;
        this.radius = this.width / 12;
    }
};

//--------------- Exports ---------------//

exports.Circle = Circle;
exports.Rectangle = Rectangle;
exports.Star = Star;
exports.RoundedRectangle = RoundedRectangle;

//---------------Function Exports---------------//

exports.paramCircle = (circle) => {
    circle.fill = getRandomColour();
    circle.stroke = "green";
    circle.linewidth = 5; 
    console.log (`Circle ${circle.id} made at ${event.offsetX}, ${event.offsetY}`);
    return circle ;
}

exports.paramRect = (rect) => {
    rect.fill = "#F0FF00";
    rect.stroke = "#FF5D00";
    rect.linewidth = 3;
    console.log (`Rectangle ${rect.id} made at ${event.offsetX}, ${event.offsetY}`);
    return rect;
}

exports.paramStar = (star) => {
    star.fill = "#FF00F0";
    star.stroke = "#00FFEC";
    star.linewidth = 3;
    console.log (`Star ${star.id} made at ${event.offsetX}, ${event.offsetY}`);
    return star;
}

exports.paramRoundedRect = (roundedRect) => {
    roundedRect.fill = "#FFFFFF";
    roundedRect.stroke = "#00FFEC";
    roundedRect.linewidth = 3;
    console.log (`RoundedRectangle  ${roundedRect.id} made at ${event.offsetX}, ${event.offsetY}`);
    return roundedRect;
}

//---------------Functions---------------//

getRandomColour = () => {
    return "rgb("
    + Math.floor(Math.random() * 255) + ","
    + Math.floor(Math.random() * 255) + ","
    + Math.floor(Math.random() * 255) + ")";
}
