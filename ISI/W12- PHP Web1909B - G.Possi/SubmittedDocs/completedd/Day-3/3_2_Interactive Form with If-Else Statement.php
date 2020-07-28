<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
<form method="post" action="<?php echo $_SERVER['PHP_SELF'];?>">
        <h2>Favorite City</h2>
        <label for="fname">Please enter your favorute city:</label><br>
        <input type="text" name="cityName"><br><br>
        <button type="submit" value="submit">Go</button>
    </form>
    <?php
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        $name=$_POST['cityName'];
        if(empty($name)){
            echo "<h1>City name is empty</h1>";
        }else{
            echo "Your favorite city is ".$name.".";
        }
    }
    ?>
</body>
</html>