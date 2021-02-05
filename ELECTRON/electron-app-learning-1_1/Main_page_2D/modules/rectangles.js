const { two } = require ("../../Resources/Libraries/TWO");


const CONSTANTS = {
    height: 200,
    width: 350,
    x: 100,
    y: 100,
    size: 100
};

class Rectangle {
    constructor() {
        this.fill = ("#FFFFFF");
        this.stroke = "red";
        this.linewidth = 5;
        this.makeRect();
    }
    makeRect() {
    let Rectangle = two.makeRectangle(CONSTANTS.x, CONSTANTS.y, CONSTANTS.width, CONSTANTS.height);
    }
    
};

new Rectangle();