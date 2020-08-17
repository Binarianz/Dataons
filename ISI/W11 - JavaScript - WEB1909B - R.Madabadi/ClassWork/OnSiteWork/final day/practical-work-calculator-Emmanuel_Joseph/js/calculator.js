let value1 = document.getElementById('value1')
let value2 = document.getElementById('value2')
let bodyCal = document.getElementById('message')
let firstNumber = 0
let secondNumber = 0
document.getElementById('openButton').onclick = function () {
    openFunction()
}
// document.getElementById('calculator').onclick = function () {
//     document.getElementById('message').innerHTML = ''
// }
document.getElementById('closeButton').onclick = function () {
    value1 = document.getElementById('value1')
    value2 = document.getElementById('value2')
    bodyCal = document.getElementById('message')
    firstNumber = 0
    secondNumber = 0
    closeFunction()
}
value1.onclick = function () {
    const x = value1.value
    if (x === '') {
        document.getElementById('message').innerHTML = 'enter the first numeric value'
    }
}
value1.onkeyup = function () {
    value1Print()
}

value2.onclick = function () {
    const x = value2.value
    if (x === '') {
        document.getElementById('message').innerHTML = 'enter the second numeric value'
    }
}
value2.onkeyup = function () {
    value2Print()
}
document.getElementById('equalButton').onclick = function () {
    if ((Number.isInteger(value1.value) && Number.isInteger(value1.value)) || (value1.value === '' && value2.value === '')) {
        document.getElementById('message').innerHTML = 'Error !'
        document.getElementById('result').value = 'Error!'
    } else {
        document.getElementById('result').value = firstNumber + secondNumber
    }
}
function openFunction () {
    document.getElementById('openButton').style.visibility = 'hidden'
    document.getElementById('calculator').style.visibility = 'visible'
    document.getElementById('calculator').style.display = 'block'
    // document.getElementById('calculator').classList.remove('.show')
}
function closeFunction () {
    console.log('final test')
    document.getElementById('value1').value = ' '
    document.getElementById('value2').value = ' '
    document.getElementById('message').innerHTML = ' '
    document.getElementById('result').value = ' '
    document.getElementById('openButton').style.visibility = 'visible'
    document.getElementById('calculator').style.visibility = 'hidden'
    // document.getElementById('calculator').style.display = 'block'

    // document.getElementById('calculator').classList.remove('.show')
}
function value1Print () {
    const x = value1.value
    if (x === '') {
        document.getElementById('message').innerHTML = 'enter the first numeric value'
    } else {
        let results = parseInt(x)
        results = Number.isInteger(results)
        let message
        if (results) {
            message = ' '
            firstNumber = parseInt(x)
            document.getElementById('value1').classList.remove('invalid')
        } else {
            document.getElementById('value1').classList.add('invalid')
            message = 'Error!'
        }
        document.getElementById('message').innerHTML = message
    }
}

function value2Print () {
    const x = value2.value
    if (x === '') {
        document.getElementById('message').innerHTML = 'enter the second numeric value'
    } else {
        let results = parseInt(x)
        results = Number.isInteger(results)
        let message
        if (results) {
            message = ' '
            secondNumber = parseInt(x)
            document.getElementById('value2').classList.remove('invalid')
        } else {
            message = 'Error!'
            document.getElementById('value2').classList.add('invalid')
        }
        document.getElementById('message').innerHTML = message
    }
}
