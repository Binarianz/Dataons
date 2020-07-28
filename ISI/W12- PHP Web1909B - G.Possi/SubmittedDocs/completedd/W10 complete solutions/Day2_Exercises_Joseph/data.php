<?php

$name=$_POST["name"];
$colors=$_POST["color"];
$count=count($colors);
echo $name."'s favourite colors are ".$count." option";
echo ($count>1)?"s<br>":"<br>";
foreach($colors as $color){
    echo "<br>".$color."<br>";
}