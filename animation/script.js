const WIDTH = 120, HEIGHT = 130;
const img = new Image();
img.src="Images/imgbin_sprite-2d-computer-graphics-unity-animation-png.png";
img.onload = () => img.loaded = true;

const canvas = document.getElementById('frame');
const ctx = canvas.getContext('2d');

function render(){
    if(!img.loaded) return;
    draw();
}

var move = 4;
let i = 0;
function draw(){
    const x = WIDTH * i++;
    const y = HEIGHT * move;
    ctx.clearRect(0, 0, WIDTH, HEIGHT);
    ctx.drawImage(img, x, y, WIDTH, HEIGHT, 0, 0, WIDTH, HEIGHT);
    if(i >= 10) i=0;
}

var KEY_MAP = {
    ArrowUp: 6,
    ArrowDown: 4,
    ArrowLeft: 5,
    ArrowRight: 7
}

document.addEventListener('keydown', function(e){
    const code = e.code;
    if(!KEY_MAP[code]) return;
    move = KEY_MAP[code]; 
})



setInterval(render, 100);