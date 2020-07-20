const englishDays = ['Monday', 'Tuesday', 'Wednesday', 'Thursday', 'Friday', 'Saturday', 'Sunday']
const frenchDays = ['Lundi', 'Mardi', 'Mercredi', 'Jeudi', 'Vendredi', 'Samedi', 'Dimanche']

document.addEventListener('DOMContentLoaded', function () {
    const selectElement = document.querySelector('#dayNumber')
    selectElement.addEventListener('change', updateDay)
})
function updateDay () {
    console.log(document.querySelector('#dayNumber').value)
    const labelElm = document.getElementsByTagName('label')
    labelElm[1].innerHTML = document.getElementById('language').checked ? englishDays[document.querySelector('#dayNumber').value] : frenchDays[document.querySelector('#dayNumber').value]
    // labelElm[1].innerHTML = englishDays[document.querySelector('#dayNumber').value]
}
