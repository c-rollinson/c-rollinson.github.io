import * as THREE from "three";

export default function createRenderer() {
    const app = document.getElementByID( "app" );
    const renderer = new THREE.WebGLRenderer( { antialias: true });
    renderer.setSize( window.innerWidth, window.innerHeight );
    app.appendChild( renderer.domElement );

    return renderer;
}