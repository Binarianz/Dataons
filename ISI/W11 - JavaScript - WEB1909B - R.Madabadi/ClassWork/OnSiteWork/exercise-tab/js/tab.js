$.tab1Text = $('#tabs-1').text()
$.tab2Text = $('#tabs-2').text()
$.tab3Text = $('#tabs-3').text()
$.liElems = $('li')
// $.liElems[0]
console.log($.liElems.eq(0).children().click())
$($.liElems.eq(0).children()).click(function () {
    $('#info').css('height', '175px')
    $('#tabs-2').empty()
    $('#tabs-3').empty()
})
$($.liElems.eq(1).children()).click(function () {
    $('#info').css('height', '200px')
    $('#tabs-1').empty()
    $('#tabs-3').empty()
    $('#tabs-2').html($.tab2Text)
})
$($.liElems.eq(2).children()).click(function () {
    $('#info').css('height', '350px')
    $('#tabs-1').empty()
    $('#tabs-2').empty()
    $('#tabs-3').html($.tab3Text)
})
