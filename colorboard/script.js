const container = document.getElementById('container')
const colors = ['#D300FF', '#FF00F7', '#FFF700', '#00FDFF']
const SQUARES = 500

for(let i = 0; i < SQUARES; i++) {
    const square = document.createElement('div')
    square.classList.add('square')
    container.appendChild(square)
    square.addEventListener('mouseover', () => setColor(square))
    square.addEventListener('mouseout', () => removeColor(square))
}


function setColor(element) {
    const color = getRandomColor()
    element.style.background = color
}


function getRandomColor() {
    return colors[Math.floor(Math.random()*4)]
}


function removeColor(element) {
    element.style.background = '#1d1d1d'
}