const Rectangles = require ("./modules/rectangles");
const Circle = require ("./modules/circles");
const { two } = require ("../Resources/Libraries/TWO.js");

class Renderer {
    constructor() {
        this.canvas = document.getElementById("canvas");
        this.ctx = this.canvas.getContext("2d");
        this.width = null;
        this.height = null;
        this.params = {
            fullscreen: true
        };
        let two = new Two(this.params).appendTo(this.canvas);
        this.addListener();
        this.update();
        this.run();
    }
    
    addListener() {
        window.addEventListener("resize", this.update);
    }

    update() {
        this.width = window.innerWidth;
        this.height = window.innerHeight;
        this.canvas.width = this.width;
        this.canvas.height = this.height;
    }

    run() {
        new Rectangle (this.canvas, this.ctx, this.width, this.height);
        //  new Circle (this.canvas, this.ctx, this.width, this.height);
    }

}

new Renderer();

two.update();