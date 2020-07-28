'use strict'

// Age to be considered an adult
const MAJOR = 18

// Four groups of ages
const AGES = [
    [25, 39, 51, 22, 15, 44],
    [25, 39, 51, 22, 55, 44],
    [25],
    [15]
]

AGES.forEach(function (ages, index) {
    const counter = 0
    document.write(
        '<tr> <td>Group ' + index + '</td>       <td>are ' + isTrueElements(ages) + ' adults</td> </tr>'
    )
})
function isTrueElements (ages) {
    let returnValue = true
    for (let index = 0; index < ages.length; index++) {
        if (ages[index] < MAJOR) {
            returnValue = false
        }
    }
    return returnValue ? 'all' : 'not all'
}
