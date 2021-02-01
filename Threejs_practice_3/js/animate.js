export default function animate() {
    function loop ( time ){
        callback ( time );
        requestAnimationFram ( loop );
    }
    requestAnimationFrame( loop );
}