//index.js
//  Tutorial from: https://codeburst.io/creating-and-drawing-on-an-html5-canvas-using-javascript-93da75f001c1
let canvas, ctx

;(function init(){
    const canvas = document.getElementById('canvas1')
    const ctx = canvas.getContext('2d')

    document.addEventListener('DOMContentLoaded', init)

    //  Outlined square
    ctx.beginPath()
    ctx.strokeRect(50,35,50,50)

    //  Filled square
    ctx.beginPath()
    ctx.fillRect(125, 35, 50, 50)


})()

