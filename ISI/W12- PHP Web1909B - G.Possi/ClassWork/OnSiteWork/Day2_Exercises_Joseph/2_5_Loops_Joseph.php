<?php
echo "Question 1:";
echo"<br>";
$i=0;
echo "The starting number given is: ".$i."<br>";
while($i<6){
    echo "The number is: ".$i."<br>";
    $i++;
}
echo"<br>";
echo"<br>";
echo "Question 2:";
echo"<br>";
$i=0;
echo "The starting number given is: ".$i."<br>";
do{
    echo "The number is: ".$i."<br>";
    $i++;
}while($i<6);
echo"<br>";
echo"<br>";
echo "Question 3:";
echo"<br>";

for($i=0;$i<10;$i++){
    echo "running from ".$i."<br>";
}
echo"<br>";
echo"<br>";
echo "Question 4:";
echo"<br>";
$colors = array("red", "green", "blue", "yellow");
foreach($colors as $var){

    echo "color is :".$var."<br>";
}
echo"<br>";
echo"<br>";
echo "Question 5:";
echo"<br>";
$array = array (1, 2, 3, 4, 5);
foreach($array as $var){

    echo "Value is :".$var."<br>";
}
echo"<br>";
echo"<br>";