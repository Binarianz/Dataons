<?php
echo "Question 1:";
echo"<br>";
$a=10;
$b=9;
echo "a=".$a." and b=".$b;
echo "<br>";
if($a>$b){
    echo "Hello World";
}
echo "<br>";
echo "<br>";
echo "Question 2:";
echo"<br>";
$a=10;
$b=9;
echo "a=".$a." and b=".$b;
echo "<br>";
if($a!=$b){
    echo "Hello World";
}
echo "<br>";
echo "<br>";
echo "Question 3:";
echo"<br>";
$a=10;
$b=9;
echo "a=".$a." and b=".$b;
echo "<br>";
if($a==$b){
    echo "Yes";
}else{
    echo "No";
}
echo "<br>";
echo "<br>";
echo "Question 4:";
echo"<br>";
$a=10;
$b=9;
echo "a=".$a." and b=".$b;
echo "<br>";
if($a==$b){
    echo "1";
}elseif($a>$b){
    echo "2";
}else{
    echo "3";
}
echo "<br>";
echo "<br>";
echo "Question 6:";
echo"<br>";
$day=date('D');
if($day=="Fri"){
    echo "Have a nice weekend!";
}else{
    echo "Have a nice day!";
}
echo "<br>";
echo "<br>";
echo "Question 7:";
echo"<br>";
$day=date('D');
if($day=="Fri"){
    echo "Have a nice weekend!";
}elseif($day=="Sun"){
    echo "Have a nice Sunday!";    
}else{
    echo "Have a nice day!";
}

echo "<br>";
echo "<br>";

echo "Question 7:";
echo"<br>";
$digit=4.5;
if($digit<0){
    echo "negative number";
}elseif($digit>0){
    echo "positive number";
}else{
    echo "given number is zero";
}
echo "<br>";
if(is_numeric($digit)){
    echo "given number is numeric";
}else{
    echo "given number is not a numeric value";
}
echo "<br>";
echo "<br>";

echo "Question 8:";
echo"<br>";
$age=19;
echo "Given age is: ".$age;
echo"<br>";
echo "The person is ";
echo ($age>=18)? "eligible for ":"not eligible for ";
echo "vote";
echo "<br>";
echo "<br>";
