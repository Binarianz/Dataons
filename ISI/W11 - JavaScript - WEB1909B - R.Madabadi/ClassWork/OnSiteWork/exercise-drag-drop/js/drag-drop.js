window.addEventListener('DOMContentLoaded', () => {
    const dragItems = document.getElementsByClassName('item')
    for (let i = 0; i < dragItems.length; i++) {
        if (dragItems[i].getAttribute('draggable') === 'true') {
            dragItems[i].setAttribute('id', i)
            dragItems[i].addEventListener('dragstart', (event) => {
                event.dataTransfer.setData('Text', i)
            })
        }
    }
})
document.addEventListener('dragover', function (event) {
    event.preventDefault()
})

document.addEventListener('drop', function (event) {
    event.preventDefault()
    if (event.target.id === 'dropArea') {
        const elemntTaget = event.dataTransfer.getData('Text')
        console.log(elemntTaget)
        event.target.appendChild(document.getElementById(elemntTaget))
    }
})
