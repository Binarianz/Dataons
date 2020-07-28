<?php
$value = 'PHP';
?>
<!DOCTYPE html>
<html lang="en">

<head>
<meta charset="UTF-8">
<title>Exercise - Variable</title>
</head>

<body>
<h1>HTML produced from variable</h1>
<ol>
<li>
<?php echo $value; ?>
</li>
<li>
<?= $value; ?>
</li>
<li>
<?php  print $value; ?>
</li>
<li>
<?php  print_r ($value); ?>
</li>
<?php  echo "<li>".$value."</li>" ?>
<?php  print "<li>".$value."</li>" ?>
<?php  print_r("<li>".$value."</li>")  ?>
<?php  
    echo"<li>";
    print $value;
    print_r("</li>");
?>
</ol>
</body>

</html>