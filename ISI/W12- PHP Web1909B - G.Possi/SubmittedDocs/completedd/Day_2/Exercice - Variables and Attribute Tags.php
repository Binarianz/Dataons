<?php
const HOME = 'Home';
const PRODUCT = 'Products';
const ABOUT = 'About Us';
const IDEA = 'Gift Ideas';
//The name of the menu item that should be active
$selected = IDEA;

?>

<!DOCTYPE html>
<html lang="en">

<head>
<meta charset="utf-8">
<title>Variable Attributes</title>
<style>
#navigation ul {
width: 150px;
}

.menu-item {
background-color: #e1f4f3;
color: #0000cc;
}

.selected {
background-color: #fea799;
}
</style>
</head>

<body>
<h1>Displaying an active item from the menu</h1>
<nav id="navigation">
<ul class="menu-item">
<li class="<?php echo ($selected==HOME)?"selected":HOME?>"><a href=""><?php echo ($selected==HOME)?$selected:HOME?></a></li>
<li class="<?php echo ($selected==PRODUCT)?"selected":PRODUCT?>"><a href=""><?php echo ($selected==PRODUCT)?$selected:PRODUCT?></a></li>
<li class="<?php echo ($selected==ABOUT)?"selected":ABOUT?>"><a href=""><?php echo ($selected==ABOUT)?$selected:ABOUT?></a></li>
<li class="<?php echo ($selected==IDEA)?"selected":IDEA?>"><a href=""><?php echo ($selected==IDEA)?$selected:IDEA?></a></li>
</ul>
</nav>
</body>

</html>