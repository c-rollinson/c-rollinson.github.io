
var obj = {
    Message: "test message",
    MaxSize: 2.0,
    Polygon: "Circle",
    Explode: () => { alert ("Bang"); },
    
    Fill_Colour_1: "FF8000",
    Fill_Colour_2: [ 0, 128, 255 ],
    Stroke_Colour_1: [ 0, 128, 255, 0.3 ],
    Stroke_Colour_2: { h: 350, s: 0.9, v: 0.3 }
};

var gui = new dat.gui.GUI();

gui.remember( obj );

gui.add( obj, "Message" );
gui.add( obj, "MaxSize" ).min(0).max(20).step(0.5);
gui.add( obj, "Polygon", [ "Star", "Circle", "Rectangle" ] );
gui.add( obj, "Explode" );

var f1 = gui.addFolder ( "Colours" );
f1.add( obj, "Fill_Colour_1" ),
f1.add( obj, "Fill_Colour_2" ),
f1.add( obj, "Stroke_Colour_1" ),
f1.add( obj, "Stroke_Colour_2" );
