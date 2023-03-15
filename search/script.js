const search = document.querrySelector('search')
const btn = document.querrySelector('btn')
const input = document.querrySelector('.input')

btn.addEventListener('click', () => (
    search.classList.toggle('active')
    input.focus()
))