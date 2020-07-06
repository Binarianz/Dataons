<?php

function showTitle($title)
{
echo "<br/><b>&#9830; $title</b><br/>";
echo '<hr/>';
}

$colors = array(
'red',
'blue',
'black',
'green',
'grey',
);

showTitle('Exercise 1 (display the colors collection in alphabetical order)');
sort($colors);
foreach($colors as $color){
    echo $color."<br>";
}


showTitle('Exercise 2 (Apply formatting to each element without using for, foreach or while iteration)');
$colorsUpper =array_map('strtoupper',$colors);
echo implode( $colorsUpper,"<br>");

showTitle('Exercise 3 (Add the $otherColors collection to the $colors collection and produce the display without using iteration)');

$otherColors = array(
'green',
'blue',
'black',
);

$afinal=array_merge($colors,$otherColors);
sort($afinal);
echo implode( $afinal," ");