'use strict'

// Reference ISO
// http://www.lingoes.net/en/translator/langcode.htm

function show (description, result) {
    document.writeln('<tr><td>' + description + '</td><td>' + result + '</td></tr>')
}

const DD = new Date()
const MS = DD.getTime()
show(
    'Todays date, automatically translated', DD
)
show(
    'Number of ms elapsed since 01/01/1970 at 00:00:00', MS)

show(
    'The current months name', DD.toLocaleString('default', { month: 'long' })
)
const ops = { month: 'long', day: 'numeric', year: 'numeric', date: 'long' }
const AR = new Intl.DateTimeFormat('ar-MA', ops).format(new Date())
show(
    'Localization in Arabic of todays date', AR
)

show(
    'Offset date of today in minutes with UTC', DD.getTimezoneOffset()
)
const aTime = new Date(1969, 6, 20, 20, 17, 40, 0)
show(
    'Mission Apollo11: Date of landing on the Moon July 20, 1969 at 20 h 17 min 40 s UTC',
    aTime
)
