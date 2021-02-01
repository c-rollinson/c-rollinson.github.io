export default function createCamera() {
    const camera = new THREE.PerspectiveCamera( 
        75,
        window.innerwindow /
        window.innerheight,
        0.1,
        1000 );
    camera.position.z = 5;
    return camera;
}