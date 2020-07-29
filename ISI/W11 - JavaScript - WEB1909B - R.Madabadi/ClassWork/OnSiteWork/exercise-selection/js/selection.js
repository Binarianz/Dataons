'use strict'

console.log('Salut jQuery !')

// (1) Display in the console the innerHTML of the id div "first"
const content = $('#first').html()
console.log(content)
// (2) Display in the console the number of CSS class elements "info"
console.log($('.info').length)
// (3) Display in the console the total number of images on the page
console.log($('img').length)
// (4) Display in the console the number of images contained in the id div "first"
console.log($('#first img').length)
// (5) Display in the console the number of images whose source has a path that contains the word "gallery"
console.log($('img[src*="gallery"]').length)
// (6) Declare a jQ variable named firstDiv that contains the id element "first"
$.firstDiv = 'first'
console.log($.firstDiv)
// (7) Display in the console the number of images of this element #first and whose source contains the substring "gallery"
console.log($('#first img[src*="gallery"]').length)
// (8) Declare a firstDivById variable that contains the "first" id DOM element (the same as above), use document.getElementById
$.firstDivById = document.getElementById($.firstDiv)
console.log($.firstDivById)
// (9) "jQuerisez" this variable firstDivById (DOM element), ie pass it in the function $ (), and display the number of direct children of type p it contains
console.log($('#' + $.firstDivById.id + ' p').length)
