<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Days of the week</h1>
    <?php
        $name=$_POST['dayName'];
        if($name=="Monday"){
            echo "Laugh on Monday, laugh for danger.";
        }elseif($name=="Tuesday"){
            echo "Laugh on Tuesday, kiss a stranger.";
        }elseif($name=="Wednesday"){
            echo "Laugh on Wednesday, laugh for a letter.";
        }elseif($name=="Thursday"){
            echo "Laugh on Thursday, something better.";
        }elseif($name=="Friday"){
            echo "Laugh on Friday, laugh for sorrow.";
        }elseif($name=="Saturday"){
            echo "Laugh on Saturday, joy tomorrow.";
        }else{
            echo "Not a valid day to sing a song!!";
        }
    ?>
</body>
</html>