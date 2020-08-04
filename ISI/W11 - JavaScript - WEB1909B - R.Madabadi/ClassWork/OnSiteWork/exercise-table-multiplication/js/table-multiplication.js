'use strict'

const DIM = {
    min: 1,
    max: 15
}
$.tr
for (var i = 1; i <= 15; i++) {
    $.tr = $('<tr></tr>')
    for (var j = 1; j <= 15; j++) {
        $.tr.append($('<td>' + i * j + '</td>'))
    }
    $('#wrapper').append($.tr)
}
