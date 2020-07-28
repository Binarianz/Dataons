<?php
echo "Question 1:";
echo"<br>";
$color="red";
echo "The given color given is: ".$color."<br>";

switch($color){
    case("red"):echo "Hello";break;
    case("green"):echo "welcome";break;    
}
echo"<br>";
echo"<br>";
echo "Question 2:";
echo"<br>";
$color="yellow";
echo "The given color given is: ".$color."<br>";

switch($color){
    case("red"):echo "Hello";break;
    case("green"):echo "welcome";break; 
    default:   echo "Neither";
}