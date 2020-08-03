$.divs = $('#container').children()
$('#container').children().attr('id', 'mytable')
console.log($('#mytable').find('td:eq(0)').html())
$('#mytable').find('td:eq(0)').children().hide()
$('#mytable').find('td:eq(1)').children().hide('slow')
$('#mytable').find('td:eq(1)').children().show('fast')

$('#mytable').find('td:eq(2)').children().fadeOut(5000)
$('#mytable').find('td:eq(2)').children().fadeIn(4000)

$('#mytable').find('td:eq(3)').children().fadeTo(5000, 0.3, 'swing', function () {})
$('#mytable').find('td:eq(3)').children().fadeout(4000)

$('#mytable').find('td:eq(4)').children().slideUp(4000)
$('#mytable').find('td:eq(4)').children().slideDown(4000)
// console.log($('#mytable').find('td:eq(1)'))
// console.log($('#mytable').find('td:eq(2)'))
// console.log($('#mytable').find('td:eq(3)'))
