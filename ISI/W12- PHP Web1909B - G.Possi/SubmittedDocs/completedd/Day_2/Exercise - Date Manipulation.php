<?php

function showTitle($title)
{
echo "<br/><b>&#9830; $title</b><br/>";
echo '<hr/>';
}

showTitle('Exercise 1');
echo date("D, j M Y G:i:s T"); 

showTitle('Exercise 2');
echo date("j"); 

showTitle('Exercise 3');
echo date("m")."<br>".date("F");  

showTitle('Exercise 4');
echo date("Y"); 

showTitle('Exercise 5');
echo date("j , n, Y")."<br>".date("j, F, Y"); 

showTitle('Exercise 6 (Add 1 month to the constant date)');
$currentDate=date("D, j M Y G:i:s T");
$time = strtotime($currentDate);
$final = date("D, j M Y G:i:s T", strtotime("+1 month", $time));
echo $final;

showTitle('Exercise 7 (Number of days since 31 December 1973)');
$now = time();
$your_date = strtotime("1973-12-31");
$datediff = $now - $your_date;
$ans=$datediff/(60*60*24);
echo (integer)($datediff/(60*60*24));
showTitle('Exercise 8');
setlocale(LC_ALL, 'de_AT.utf-8');
echo strftime("%A, %e %B %Y");