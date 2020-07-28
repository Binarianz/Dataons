function addNewLiElement () {
    const text = document.getElementById('textBox').value
    console.log(text)
    const para = document.createElement('li')
    const textnode = document.createTextNode(text)
    console.log(textnode)
    para.appendChild(textnode)
    document.getElementById('list').appendChild(para)
}
function deleteLastLiElement () {
    const size = document.getElementById('list').getElementsByTagName('li').length
    const list = document.getElementById('list')
    console.log(size)
    list.removeChild(list.childNodes[size - 1])
}
