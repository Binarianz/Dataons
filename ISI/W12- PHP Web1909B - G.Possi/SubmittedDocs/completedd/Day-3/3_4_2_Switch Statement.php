<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <h1>Pick a Day</h1>
    <?php
        $name=$_POST['dayName'];
        switch($name){
            case("Monday"):echo "Laugh on Monday, laugh for danger.";break;
            case("Tuesday"):echo "Laugh on Tuesday, kiss a stranger.";break;
            case("Wednesday"): echo "Laugh on Wednesday, laugh for a letter.";break;
            case("Thursday"): echo "Laugh on Thursday, something better.";break;
            case("Friday"): echo "Laugh on Friday, laugh for sorrow.";break;
            case("Saturday"): echo "Laugh on Saturday, joy tomorrow.";break;
            default: echo "Not a valid day to sing a song!!";
        }
    ?>
    <br>
    <br>
    <button onclick="goBack()">Back</button>
    <script>
    function goBack() {
    window.history.back();
    }
</script>
</body>
</html>