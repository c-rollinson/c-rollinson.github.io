//  A function that keeps track of how many times the tree has been clicked. Changes image to a coloured tree on the 5th click, then restarts the loop.
//  This works in javascript, however how to do it it TypeScript is beyond me rn. 13/1/21 -Conor

let count = 0;

function changeImage(){
    onclick=document.getElementById('clickToChange');{
        count++;
    }
    if (count === 5)
    {
        document.getElementById('clickToChange').src='img/Tree_coloured.png'
        count = 0;
    }
    else {
        document.getElementById('clickToChange').src='img/Tree_black.PNG'
    }
}
