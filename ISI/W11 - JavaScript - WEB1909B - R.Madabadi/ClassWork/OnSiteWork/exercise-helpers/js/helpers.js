'use strict'

const numbers = [45, 33, 9, 67, 22]
console.log('Numbers are', numbers)
console.log('Get First Number:', getFirst(numbers))
console.log('Get Last Number:', getLast(numbers))
console.log('Average is', getAverage(numbers))
console.log('Minimum is', getMinimum(numbers))
console.log('Maximum is', getMaximum(numbers))
console.log('Total is', getTotal(numbers))

function getFirst (input) {
    return input[0]
}
function getLast (input) {
    return input[input.length - 1]
}
function getAverage (input) {
    return getTotal(input) / input.length
}
function getMinimum (input) {
    return Math.min(...input)
}
function getMaximum (input) {
    return Math.max(...input)
}
function getTotal (input) {
    let sum = 0
    for (let i = 0; i < input.length; i++) {
        sum += input[i]
    }
    return sum
}
