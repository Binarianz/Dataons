<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php
        
        echo "Question 1 to Question 4:";
        echo"<br>";
        echo "fname is:Joseph and lname is Emmanuel<br>";
        function myFunction($fname, $lname){
            echo "first name is: ".$fname."<br>";
            return $lname;
        }
        $name=myFunction("Joseph","Emmanuel");
        echo "last name is: ".$name."<br>";
        echo"<br>";
        echo "Question 5";
        echo"<br>";
        function additionFn($a,$b){
            echo "Sum of the two numbers is: ".($a+$b);
        }
        additionFn(20,10);
        echo"<br>";
        echo"<br>";
        echo "Question 6";
        echo"<br>";
        function additionFnrtn($a,$b){
            return ($a+$b);
        }
        echo "Returned value from the function: ".additionFnrtn(20,10);
        echo"<br>";
        echo"<br>";
    ?>
</body>
</html>