//  https://www.w3.org/TR/SVG11/interact.html
//  https://javascript.info/mouse-drag-and-drop
//  https://www.npmjs.com/package/rbush
//  https://github.com/jonobr1/two.js/issues/491

//---------------------Requires---------------------//
const basicShapes = require ("./basicShapes");
const two = require ("../../Resources/Libraries/TWO");
const index_P1 = require ("../index_P1");

//----------------Const / Variables ----------------//
const delta = 6;        //  Min movement to differentiate a click from drag
let movingObject = false;

//----------------Document Functions----------------//

mouseoverOpacity = (arg) => {
    arg._renderer.elem.addEventListener("mousemove", function() {
        arg.opacity = 1;
    }, false);
    arg._renderer.elem.addEventListener("mouseout", function() {
        arg.opacity = 0.75;
    });
};

mouseClickColourChange = (arg) => {
    arg._renderer.elem.style.cursor = "pointer";
    arg._renderer.elem.addEventListener("click", function() {
        arg.fill = getRandomColour2();
    }, false);
};

objectTranslate = (arg, event) => {
    arg.translation.x = event.x;
    arg.translation.y = event.y;
};

cloneObject = (arg) => {
    var a = arg.clone();
    a.rotation = Math.PI / 2;
    two.add (a);
    console.log(`${a.x}, ${a.y}`)
}

//-----------------Export Functions-----------------//

//  TR02
//  Waddya know, currently doesn't work.
exports.clickFunctionsTranslationDrag = (arg) => {
    arg._renderer.elem.style.cursor = "move";
    mouseoverOpacity(arg);
    arg._renderer.elem.addEventListener("mousedown", function (event) {
        arg.noFill()
        index_P1.cloneObjectIndex(arg);
        window.addEventListener("mousemove", function (event) {
            objectTranslate( arg, event);
            console.log(`ShapeActions ${arg.x}, ${arg.y}`)
        });
    });
}





//  This function DOES work, however cannot 'drop' the object once clicked
//  resolving "remoteEventListener" and / or setting arg to NULL would fix. 
//  As a workaround solution translation will be handled by function TR02

//exports.clickFunctionsTranslationDrag = (arg) => {
exports.placeHOLDERTITLENOTREAL =(arg) => { 
    arg._renderer.elem.style.cursor = "move";
    mouseoverOpacity(arg);
    
    var abc = 0;
    arg._renderer.elem.addEventListener("mousedown", function (event) {
        abc = 1;
        console.log(`${abc} ,  ${arg.id}`);
        window.addEventListener("mousemove", function (event) {
            if (abc == 1){
            objectTranslate(arg, event);
            }
        });
    });
    arg._renderer.elem.addEventListener("mouseup", function(event) {
        abc = 2;
        console.log(`${abc} ,  ${arg.id}`);
        arg._renderer.elem.removeEventListener("mousedown", )
        //arg._renderer.elem.removeEventListener("mousemove", mouseMoveHandle (event), false);
    });
};


exports.clickFunctionsTranslation = (arg) => {
    arg._renderer.elem.style.cursor = "pointer";
    mouseoverOpacity(arg);
    arg._renderer.elem.addEventListener("click", function() {
        arg.translation.set(event.x + 50, event.y + 50)
    });
};


exports.clickFunctionsColourChange = (arg) =>{
    mouseClickColourChange(arg);
    mouseoverOpacity(arg);
};


/*
exports.clickFunctionsTranslationDrag = (arg) => {
    arg._renderer.elem.style.cursor = "move";
    mouseoverOpacity(arg);
    arg._renderer.elem.addEventListener("mousedown", function (event) {
        window.addEventListener("mousemove", function (event) {
            objectTranslate(arg, event);
        });
    });
    arg._renderer.elem.addEventListener("mouseup", function(event, arg) {
        //arg._renderer.elem.removeEventListener("mousemove", mouseMoveHandle (event), false);
    });
};
*/


/*
exports.clickFunctionsTranslationDrag = (arg) => {
    arg._renderer.elem.style.cursor = "pointer";
    arg._renderer.elem.addEventListener("mousemove", function() {
        arg.opacity = 1;
    }, false);
    arg._renderer.elem.addEventListener("mouseout", function() {
        arg.opacity = 0.75;
    });
    const delta = 6;
    let startX;
    let startY;
    let shiftPressed = false;
    window.addEventListener("keydown", (event) => {
        if (event.key === "Shift") {
            shiftPressed = true;
        };
    });
    window.addEventListener("keyup", (event) => {
        if (event.key === "Shift") {
            shiftPressed = false;
            return;
        };
        return;
    });
    arg._renderer.elem.addEventListener("mousedown", function (event) {
        if (shiftPressed != true){
            console.log(`${shiftPressed } FALSE`);
            return;
        }
        else if (shiftPressed == true){
            console.log(`${shiftPressed } TRUE`);
            startX = event.x;
            startY = event.y;
            window.addEventListener("mouseup", function (event) {
                const diffX = Math.abs(event.x - startX);
                const diffY = Math.abs(event.y - startY);
        
                if (diffX > delta && diffY > delta) {
                    arg.translation.set(event.x, event.y);
                    console.log (`
                    ID: ${arg.id} has translated:
                    start X / Y ${startX}, ${startY}
                    end X /Y ${event.x}, ${event.y}
                    `);
                    return;
                }
                else if (diffX < delta && diffY < delta) {
                    arg._renderer.elem.addEventListener("click", function() {
                        arg.fill = getRandomColour2();
                    }, false);
                }
            });
        };
    })
};
*/
