function shiftLeft () {
    const getDivId = document.getElementById('cards')
    const images = getDivId.getElementsByTagName('img')
    const srcs = new Array(images.length)
    for (let index = 0; index < images.length; index++) {
        srcs[index] = document.images[index].src
    }
    // for (let index = 0; index < srcs.length; index++) {
    //     console.log(srcs[index])
    // }
    const tempArray = new Array(images.length)
    for (let index = 0; index < tempArray.length; index++) {
        tempArray[index] = srcs[index + 1]
    }
    tempArray[tempArray.length - 1] = srcs[0]
    printArray(tempArray)
    // for (let index = 0; index < tempArray.length; index++) {
    //     console.log(tempArray[index])
    // }
}
function shiftRight () {
    const getDivId = document.getElementById('cards')
    const images = getDivId.getElementsByTagName('img')
    const srcs = new Array(images.length)
    for (let index = 0; index < images.length; index++) {
        srcs[index] = document.images[index].src
    }
    const tempArray = new Array(images.length)
    tempArray[0] = srcs[tempArray.length - 1]
    for (let index = 1; index < tempArray.length; index++) {
        tempArray[index] = srcs[index - 1]
    }

    printArray(tempArray)
    // for (let index = 0; index < tempArray.length; index++) {
    //     console.log(tempArray[index])
    // }
}
function printArray (array) {
    const myNode = document.getElementById('cards')
    myNode.innerHTML = ''
    for (let index = 0; index < array.length; index++) {
        // console.log(array[index])
    }
    for (let index = 0; index < array.length; index++) {
        const tagText = '<img src="' + array[index] + '" alt="first cards" />'

        console.log(tagText)
        document.getElementById('cards').innerHTML += tagText
    }
}
