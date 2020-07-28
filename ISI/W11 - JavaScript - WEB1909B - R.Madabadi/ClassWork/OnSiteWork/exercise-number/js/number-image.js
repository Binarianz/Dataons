const selectElement = document.querySelector('#numberInput')

// const output = selectElement.value
selectElement.addEventListener('change', updateImage)
function updateImage () {
    console.log(document.querySelector('#numberInput').value)
    const acuredValue = document.querySelector('#numberInput').value
    const htmlText = '<img src="image/' + acuredValue + '.jpg" alt="number ' + acuredValue + ' Image" />'
    // console.log(htmlText)
    document.getElementById('numberDiv').innerHTML = htmlText
}
