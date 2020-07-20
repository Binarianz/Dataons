let text = ''
document.addEventListener('DOMContentLoaded', function () {
    for (let index = 0; index < 12; index++) {
        console.log(index)
        text += '<li>product nummer: ' + index + '</li>'
    }
    document.getElementById('listContainer').innerHTML = text
    // document.getElementById('listContainer').addEventListener('click', myFunction)

    var ul = document.getElementById('listContainer')
    ul.onclick = function (event) {
        let targetText = event.target.innerHTML
        targetText = targetText[targetText.length - 1]
        document.getElementById('output').innerHTML = 'Product number: ' + targetText + '(ID=product_no_' + targetText + ')'
    }
})
