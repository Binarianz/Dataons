'use strict'

const COMMA = ', '
const BOARD = [
    'beautiful Marquise',
    'your beautiful eyes',
    'make me die',
    'of love'
]
const B1 = [
    'your beautiful eyes',
    'beautiful Marquise',
    'make me die',
    'of love'
]
const B2 = [
    'of love',
    'make me die',
    'beautiful Marquise',
    'your beautiful eyes'

]
const B3 = [
    'make me die',
    'beautiful Marquise',
    'of love',
    'your beautiful eyes'

]

let text

document.write('<ul>')
document.write(gneratorForItems(BOARD))
document.write(gneratorForItems(B1))
document.write(gneratorForItems(B2))
document.write(gneratorForItems(B3))
document.write('</ul>')

function gneratorForItems (BOARD) {
    text = ''
    text += '<li>'
    for (let index = 0; index < BOARD.length; index++) {
        const ending = BOARD.length - 1 === index ? '.' : COMMA
        text += BOARD[index] + ending
    }
    text += '</li>'
    return text
}
