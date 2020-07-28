const selectElement = document.querySelector('#colorSelect')

// const output = selectElement.value
selectElement.addEventListener('change', updateColor)
function updateColor (output) {
    // console.log(document.querySelector('#colorSelect').value)
    document.body.style.backgroundColor = document.querySelector('#colorSelect').value
}
