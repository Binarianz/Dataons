'use strict'

const MONTHS = ['January', 'February', 'March', 'April', 'May', 'June', 'July', 'August', 'September', 'October', 'November', 'December']

const SALES = [120, 500, 350, 400, 600, 890, 450, 100, 250, 300, 650, 450]

let total = 0 // SALES total

// Creation of a vertical HTML table
document.write('<h2>Vertical Table</h2>')
document.write('<table><tbody>')
for (let index = 0; index < MONTHS.length; index++) {
    total += SALES[index]
    document.write(
        '<tr> <td>' + MONTHS[index] + '</td>       <td>' + SALES[index] + '</td> </tr>'
    )
}
document.write('<tr> <td><strong>Total</strong> </td>       <td><strong>' + total + '</strong> </td> </tr>')
document.write('</tbody></table>')
document.write('<h2>Horizontal Table</h2>')
document.write('<table><tbody><tr>')
for (let index = 0; index < MONTHS.length; index++) {
    total += SALES[index]
    document.write(
        '<td>' + MONTHS[index] + '</td>'
    )
}
document.write('<td><strong>Total</strong> </td></tr>')
for (let index = 0; index < MONTHS.length; index++) {
    total += SALES[index]
    document.write(
        '<td>' + SALES[index] + '</td>'
    )
}
document.write('<td><strong>' + total + '</strong> </td> ')
document.write('</tr></tbody></table>')
