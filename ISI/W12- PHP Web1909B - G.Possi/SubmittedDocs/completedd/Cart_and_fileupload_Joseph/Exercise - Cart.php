<?php 
session_start();
$noapple=$nopear=$nobanana=0;
$_SESSION['noapple']=0;
$_SESSION['nopear']=0;
$_SESSION['nobanana']=0;
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<style>
table,
tr ,td{
    border-collapse: collapse;
    border: 1px solid #333;
}
.long{
    text-align:center;
}

</style>

<body>
<table>
    <thead>
        <tr>
            <th>Add to basket</th>
            <th>Remove from basket</th>
            <th>To take off</th>
            <th>Number</th>
        </tr>
    </thead>
    <tbody>
        <tr>
            <td><a href="">Add Apples</a></td>
            <td><a href="">Remove Apple</a></td>
            <td><a href="">Remove all Apples</a></td>
            <td>Number of apples : <?php echo $noapple?></td>
        </tr>
        <tr>
            <td><a href="">Add Pear</a></td>
            <td><a href="">Remove Pear</a></td>
            <td><a href="">Remove all Pears</a></td>
            <td>Number of Pears : <?php echo $_SESSION['nopear'] ?></td>
        </tr>
        <tr>
            <td><a href="">Add Banana</a></td>
            <td><a href="">Remove Banana</a></td>
            <td><a href="">Remove all Bananas</a></td>
            <td>Number of Bananas : <?php echo $_SESSION['nobanana'] ?></td>
        </tr>
        <tr>
        <td  class ="long" colspan="4"><a href="">Clear the basket</a></td>
        </tr>
    </tbody>
</table>
<?php
    if($_SERVER["REQUEST_METHOD"]=="POST"){
        $_SESSION['noapple']+1;
        $noapple++;
        echo  $noapple;
    }
    ?>
</body>
</html>