function createItem (data1) {
    const result = '<li>' + data1 + '</li>'

    return result
}
function createList (data2) {
    let i
    let text = '<ul>'
    for (i = 0; i < data2.length; i++) {
        text += '<li>' + data2[i] + '</li>'
    }
    text += '</ul>'
    return text
}
