//  https://threejs.org/docs/index.html#manual/en/introduction/Creating-a-scene
//  https://jsfiddle.net/mkba0ecu/

let scene = new THREE.Scene();
let camera = new THREE.PerspectiveCamera (75, window.innerWidth / window.innerHeight, 0.1, 1000);

let renderer = new THREE.WebGLRenderer(); 
renderer.setSize( window.innerWidth, window.innerHeight );
document.body.appendChild( renderer.domElement );

let geometry = new THREE
