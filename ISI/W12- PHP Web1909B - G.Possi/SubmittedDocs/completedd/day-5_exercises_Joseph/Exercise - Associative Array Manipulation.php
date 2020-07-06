<?php

function showTitle($title)
{
echo "<br/><b>&#9830; $title</b><br/>";
echo '<hr/>';
}

$users = array(
array(
'id' => 2135,
'first_name' => 'John',
'last_name' => 'Doe',
),
array(
'id' => 3245,
'first_name' => 'Sally',
'last_name' => 'Smith',
),
array(
'id' => 5342,
'first_name' => 'Jane',
'last_name' => 'Jones',
),
array(
'id' => 5623,
'first_name' => 'Peter',
'last_name' => 'Doe',
),
);

showTitle("Exercise 1 (Show first names without iteration)");

// echo implode( $users," ");
$firstName=array();
array_push($firstName,$users[0]['first_name'],$users[1]['first_name'],$users[2]['first_name'],$users[3]['first_name']);
echo implode($firstName,", ");

showTitle('Exercise 2 (Show the value of the different element between the two collections $firstArray and $secondArray without iterating)');
$firstArray = array('a' => 'auto', 'b' => 'moto', 'c' => 'avion');
$secondArray = array('a' => 'auto', 'b' => 'moto');
$result=array_diff($firstArray,$secondArray);
$string = http_build_query($result, '', ',');
echo substr_replace($string,"",0,2);

showTitle('Exercise 3 (Reverse the keys and values of the $firstArray array without iterating)');
$flipped=array_flip($firstArray);
print_r($flipped);