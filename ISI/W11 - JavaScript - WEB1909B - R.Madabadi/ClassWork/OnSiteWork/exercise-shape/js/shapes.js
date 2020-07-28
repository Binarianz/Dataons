'use strict'

let size = 7
drawA(size)
drawB(size)
drawC(size)
drawD(size)
drawE(size)

size = 8
drawNumberA(size)
drawNumberB(size)
drawNumberC(size)
drawNumberD(size)

function drawA (size) {
    size = size - 1
    let text = ''
    for (let i = 0; i < size + 1; i++) {
        for (let j = 0; j < size + 1; j++) {
            if (i === 0 || i === size || j === 0 || j === size) {
                text += '#'
            } else {
                text += ' '
            }
        }
        text += '\n'
    }
    console.log(text)
}
function drawB (size) {
    size = size - 1
    let text = ''
    for (let i = 0; i < size + 1; i++) {
        for (let j = 0; j < size + 1; j++) {
            if (j === i || i === 0 || i === size) {
                text += '#'
            } else {
                text += ' '
            }
        }
        text += '\n'
    }
    console.log(text)
}
function drawC (size) {
    size = size - 1
    let text = ''
    for (let i = 0; i < size + 1; i++) {
        for (let j = 0; j < size + 1; j++) {
            if (j === size - i || i === 0 || i === size) {
                text += '#'
            } else {
                text += ' '
            }
        }
        text += '\n'
    }
    console.log(text)
}
function drawD (size) {
    size = size - 1
    let text = ''
    for (let i = 0; i < size + 1; i++) {
        for (let j = 0; j < size + 1; j++) {
            if (j === size - i || i === 0 || i === size || j === i) {
                text += '#'
            } else {
                text += ' '
            }
        }
        text += '\n'
    }
    console.log(text)
}
function drawE (size) {
    size = size - 1
    let text = ''
    for (let i = 0; i < size + 1; i++) {
        for (let j = 0; j < size + 1; j++) {
            if (j === size - i || i === 0 || i === size || j === i || j === 0 || j === size) {
                text += '#'
            } else {
                text += ' '
            }
        }
        text += '\n'
    }
    console.log(text)
}
function drawNumberA (size) {
    // size = size - 1
    let text = ''
    for (let i = 1; i < size + 1; i++) {
        for (let j = 1; j < i + 1; j++) {
            text += j
        }
        text += '\n'
    }
    console.log(text)
}
function drawNumberB (size) {
    let text = ''
    let i = 0
    let j = 0
    for (i = 1; i < size + 1; i++) {
        for (j = 1; j < size + 2 - i; j++) {
            if (j === 1) {
                for (let k = i; k > 1; k--) {
                    text += ' '
                }
            }

            text += j
            // x++
        }
        j++
        text += '\n'
    }
    console.log(text)
}

function drawNumberC (size) {
    let text = ''
    const text2 = ''
    let j = 0
    for (let i = 1; i < size + 2; i++) {
        for (j = size; j > 0; j--) {
            if (j >= i) {
                text += ' '
            } else {
                text += j
            }
        }
        text += '\n'
    }
    console.log(text.substring(text.indexOf('\n') + 1))
}
function drawNumberD (size) {
    let text = ''
    for (let i = size; i >= 1; i--) {
        for (let j = i; j >= 1; j--) {
            text += j
        }
        text += '\n'
    }
    console.log(text)
}
