<?php
echo "Question 1:";
echo "<br>";
echo " The string is: ".$strVar="Hello World!";
echo"<br>";
echo "the length of string is: ". strlen($strVar);
echo "<br>";
echo "<br>";
echo "Question 2:";
echo "<br>";
echo " The string is: ".$strVar="Hello World!";
echo"<br>";
echo "the reversed string is: ". strrev($strVar);
echo "<br>";
echo "<br>";
echo "Question 3:";
echo "<br>";
echo " The string is: ".$v1="Hello World!";
echo"<br>";
echo " The replace string is: ".$v2="Dolly";
echo"<br>";
echo "the replaced string is: ". str_replace("World",$v2,$v1);
echo "<br>";
echo "<br>";
echo "Question 4:";
echo "<br>";
echo " The string is:".$v1="This is ISI Class, learn programming here.";
echo "<br>";
echo "the number of words in the string is: ". str_word_count($v1);
echo "<br>";
echo "<br>";
echo "Question 5:";
echo "<br>";
echo " The string is:".$v1="This is ISI Class, learn programming here.";
echo "<br>";
echo "the number of words in the string is: ". strtoupper($v1);
echo "<br>";
echo "<br>";
echo "Question 6:";
echo "<br>";
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="data.php" method="post">
        <label for="fname">select a name:</label><br>
        <select name="name">
            <option value="Joseph">Joseph</option>
            <option value="Alex">Alex</option>
            <option value="George">George</option>
        </select><br>
        <label for="lanme">select a color:</label><br>
        <select name="color[]" multiple>
            <option value="red">red</option>
            <option value="green">green</option>
            <option value="yellow">yellow</option>
            <option value="blue">blue</option>
            <option value="gray">gray</option>
        </select><br><br>
        <input type="submit" name='submit'/>
    </form>
</body>
</html>

