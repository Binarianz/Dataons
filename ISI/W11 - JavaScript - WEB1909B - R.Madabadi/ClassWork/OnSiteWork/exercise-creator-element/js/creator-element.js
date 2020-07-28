function createWithInnerHTML () {
    // document.getElementById('output').innerHTML = 'Hello World'
    const elementSelect = document.getElementById('elementType')
    const selectedText = elementSelect.options[elementSelect.selectedIndex].text
    const tagText = '<' + selectedText + ' class="inner-html">' + document.getElementById('elementContent').value + '</' + selectedText + '>'
    console.log(tagText)
    document.getElementById('output').innerHTML += tagText
}

function createWithCreateElement () {
    const elementSelect = document.getElementById('elementType')
    const selectedText = elementSelect.options[elementSelect.selectedIndex].text
    const para = document.createElement(selectedText)
    const textnode = document.createTextNode(document.getElementById('elementContent').value)
    console.log(textnode)
    para.className = 'create-element'
    para.appendChild(textnode)
    document.getElementById('output').appendChild(para)
}
