/*

        //  Due to some unidentified unresolved issues work is paused on this version of WEBGL test.
        //  Switching to a 'threejs' methodology due to its support for typescript.

declare var mat4: any;
declare var gl: any;
declare var projectionMatrix: any;
declare var modelViewMatrix: any;


function main(){
    //  querySelector and getContext allows typescript to function without throwing errors by declaring element
    //  Note: getElementById was initially specified instead of query selector, however this would not interact as intended.
    const canvas = <HTMLCanvasElement> document.querySelector("#glCanvas");
    //  Initialise the canvas
    const gl = canvas.getContext("webgl");

    //  Continue if webGL is supported, otherwise throw error
    if (gl === null) {
        alert ("WebGL is unable to initialise: your browser or machine may not support it");
        return;
    }

    //  Set clear colour to fully opaque
    gl.clearColor (0.0, 0.0, 0.0, 1.0);

    //  Clear the colour buffer with clear colour
    gl.clear(gl.COLOR_BUFFER_BIT);
}
window.onload = main;

//  Vertex shader program
const vsSource = `
    attribute vec4 aVertexPosition;

    uniform mat4 uModelViewMatrix;
    uniform mat4 uProjectionMatrix;

    void main(){
        gl_Position = uProjectionMatrix * uModelViewMatrix * aVertexPosition;
    }
    `;

//  Colour: white in this case
const fsSource = `
    void main(){
        gl_FragColor = vec4(1.0, 1.0, 1.0, 1.0);
    }
    `;

//  Initialise the shader program
function initShaderProgram(gl, vsSource, fsSource){
    const vertexShader = loadShader(gl, gl.VERTEX_SHADER, vsSource);
    const fragmentShader = loadShader(gl, gl.FRAGMENT_SHADER, fsSource);
//  Create the actual program
    const shaderProgram = gl.createProgram();
    gl.attachShader(shaderProgram, vertexShader);
    gl.attachShader(shaderProgram, fragmentShader);
    gl.linkProgram(shaderProgram);

    //  Add an error alert if creating the shader program fails
    if (!gl.getProgramParameter(shaderProgram, gl.LINK_STATUS)){
        alert('Unable to initialise the shader program: ' +gl.getProgramInfoLog(shaderProgram));
        return null;
    }

    return shaderProgram;
}

//  Create a particular type of shader based upon the input
function loadShader(gl, type, source){
    const shader = gl.createShader(type);
    //  Send source to shader object
    gl.shaderSource (shader, source);
    //  Compile the shader program
    gl.compileShader(shader);
    //  Check for succesful compilation or not
    if (!gl.getShaderParameter(shader, gl.COMPILE_STATUS)){
        alert('An error has occured while compiling your shaders: ' + gl.getShaderInfoLog(shader));
        gl.deleteShader(shader);
        return null;
        }
    return shader;
}

let shaderProgram = initShaderProgram(gl, vsSource, fsSource);

const programInfo = {
    program: initShaderProgram,
    attribLocations: {
        vertexPosition: gl.getAttribLocations(shaderProgram, 'aVertexPosition'),
    },
    uniformLocations: {
        projectionMatrix: gl.getUniformLocation(shaderProgram, 'uProjectionMatrix'),
        modelViewMatrix: gl.getUniformLocations(shaderProgram, 'uModelViewMatrix'),
    },
};

function initBuffers(gl){
    //  Create a buffer for the square's position
    const positionBuffer = gl.createBuffer();
    //  Select this buffer as the one we will bind the future operations to.
    gl.bindBuffer(gl.ARRAY_BUFFER, positionBuffer);
    //  Create an array of positions for the square
    const positions = [
        -1.0, 1.0,
        1.0, 1.0,
        -1.0, -1.0,
        1.0, -1.0,
    ];
    //  Pass this buffered list of positions into the webGL to build the darn thing.
    //  This is done by creating a floating 32bit array from the javascript array, then using it to fill the buffer
    gl.bufferData(gl.ARRAY_BUFFER,
        new Float32Array(positions),
        gl.STATIC_DRAW);

    return{
        position: positionBuffer,
    };
}

function drawScene(gl, programInfo, buffers) {
    gl.clearColor(0.0, 0.0, 0.0, 1.0);  // Clear to black, fully opaque
    gl.clearDepth(1.0);                 // Clear everything
    gl.enable(gl.DEPTH_TEST);           // Enable depth testing
    gl.depthFunc(gl.LEQUAL);            // Near things obscure far things
  
    // Clear the canvas before we start drawing on it.
  
    gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
  
    // Create a perspective matrix, a special matrix that is
    // used to simulate the distortion of perspective in a camera.
    // Our field of view is 45 degrees, with a width/height
    // ratio that matches the display size of the canvas
    // and we only want to see objects between 0.1 units
    // and 100 units away from the camera.
  
    const fieldOfView = 45 * Math.PI / 180;   // in radians
    const aspect = gl.canvas.clientWidth / gl.canvas.clientHeight;
    const zNear = 0.1;
    const zFar = 100.0;
    const projectionMatrix = mat4.create();
  
    // note: glmatrix.js always has the first argument
    // as the destination to receive the result.
    mat4.perspective(projectionMatrix,
                     fieldOfView,
                     aspect,
                     zNear,
                     zFar);
  
    // Set the drawing position to the "identity" point, which is
    // the center of the scene.
    const modelViewMatrix = mat4.create();
  
    // Now move the drawing position a bit to where we want to
    // start drawing the square.
  
    mat4.translate(modelViewMatrix,     // destination matrix
                   modelViewMatrix,     // matrix to translate
                   [-0.0, 0.0, -6.0]);  // amount to translate
  
    // Tell WebGL how to pull out the positions from the position
    // buffer into the vertexPosition attribute.
    {
      const numComponents = 2;  // pull out 2 values per iteration
      const type = gl.FLOAT;    // the data in the buffer is 32bit floats
      const normalize = false;  // don't normalize
      const stride = 0;         // how many bytes to get from one set of values to the next
                                // 0 = use type and numComponents above
      const offset = 0;         // how many bytes inside the buffer to start from
      gl.bindBuffer(gl.ARRAY_BUFFER, buffers.position);
      gl.vertexAttribPointer(
          programInfo.attribLocations.vertexPosition,
          numComponents,
          type,
          normalize,
          stride,
          offset);
      gl.enableVertexAttribArray(
          programInfo.attribLocations.vertexPosition);
    }
  
    // Tell WebGL to use our program when drawing
  
    gl.useProgram(programInfo.program);
  
    // Set the shader uniforms
  
    gl.uniformMatrix4fv(
        programInfo.uniformLocations.projectionMatrix,
        false,
        projectionMatrix);
    gl.uniformMatrix4fv(
        programInfo.uniformLocations.modelViewMatrix,
        false,
        modelViewMatrix);
  
    {
      const offset = 0;
      const vertexCount = 4;
      gl.drawArrays(gl.TRIANGLE_STRIP, offset, vertexCount);
    }
  }

  */
//# sourceMappingURL=main.js.map