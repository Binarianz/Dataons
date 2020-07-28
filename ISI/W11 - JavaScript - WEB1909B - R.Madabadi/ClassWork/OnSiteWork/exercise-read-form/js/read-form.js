function readForm () {
    const lastName = document.getElementById('lastName').value
    const FirstName = document.getElementById('firstName').value
    printData(lastName)
    printData(FirstName)
}
function printData (textInput) {
    const para = document.createElement('p')
    const textnode = document.createTextNode(textInput)
    console.log(textnode)
    para.appendChild(textnode)
    document.getElementById('output').appendChild(para)
}
