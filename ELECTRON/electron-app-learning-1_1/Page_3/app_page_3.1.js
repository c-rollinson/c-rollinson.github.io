let elem = document.getElementById("twoCanvas");
let params = {
    fullscreen: true
};
let two = new Two(params).appendTo(elem);

let polygon = two.makePolygon (0, 0, 100, 6 );

polygon.fill = "#FF8000";
polygon.stroke = "orangered";

let polygon2 = two.makePolygon ( 425, 0 , 300, 5) ;
polygon2.fill = "#00ffee"
polygon2.stroke = "#ff0040";

let circle = two.makeCircle (200, 0, 50);
circle.fill = "orangered";
circle.stroke = "red";

let group2 = two.makeGroup(polygon, polygon2, circle);

group2.linewidth = 3;
group2.translation.set(two.width / 2, two.height / 2);
group2.scale = 0.5;

two.update();