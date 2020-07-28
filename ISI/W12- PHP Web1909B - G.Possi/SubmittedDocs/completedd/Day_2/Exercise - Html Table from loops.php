<?php

const USERS = array(
array('Pierre', 22, '123 rue A', 'aa@ser.com', array('programming' => 5, 'teaching' => 2)),
array('Julie', 65, '123 rue B', 'bb@ser.com', array('electronics' => 46)),
array('Martin', 45, '123 rue C', 'cc@ser.com', array('programming' => 21, 'teaching' => 1)),
array('Melanie', 41, '123 rue D', 'dd@ser.com', array('welding' => 12, 'nutrition' => 6, 'restoration' => 1)),
);

// Black color when age is exactly equal to reference age, green when upper and blue when lower
const AGE_REFERENCE = 45;

// Yellow color when the years of experience is equal to or greater than MINIMUM_EXPERIENCE
const MINIMUM_EXPERIENCE = 5;

$total=array();

?>

<!DOCTYPE html>
<html lang="en">

<head>
<meta charset="UTF-8">
<title>Exercise - Table</title>

<style>
table,
td,
th {
border: 1px solid black;
margin: auto;

}
td{
    height:70px;
}
#tdlast{
    height:20px;
}
ul {
list-style-type: none;
padding: 5px;
}

.age-reference {
background-color: black;
color: white;
}

.age-over {
background-color: green;
color: white;
}

.age-under {
background-color: blue;
color: white;
}

.experience-invalid {
background-color: white;
color: black;
}

.experience-valid {
background-color: yellow;
color: black;
font-weight: bold;
}
</style>
</head>

<body>
<table>
<thead>
<tr>
<th>Nom</th>
<th>Age</th>
<th>Adresse</th>
<th>Courriel</th>
<th>Emplois</th>
</tr>
</thead>

<tbody>
<?php

        $valid="experience-valid ";
        $invalid="experience-invalid";
        foreach (USERS as $subAray)
        {
            ?>
            <tr class="<?php 
            if($subAray[1]<AGE_REFERENCE){
                echo "age-under";
            }elseif($subAray[1]>AGE_REFERENCE){
                echo "age-over";
            }else{
                echo "age-reference";
            }
            
            
            ?>">
                <td><?php echo $subAray[0]; ?></td>
                <td><?php 
                    array_push($total,$subAray[1]);
                    echo $subAray[1];
                 ?></td>
                <td><?php echo $subAray[2]; ?></td>
                <td><?php echo $subAray[3]; ?></td>
                <td><?php
                     foreach($subAray[4] as $x => $x_value)
                     {
                         $finalvalid=(($x_value>=MINIMUM_EXPERIENCE)?$valid:$invalid);
                        echo "<span class=".$finalvalid."> ". $x.": ".$x_value." ans <br>"."</span>";
                     }
                 ?></td>
                
            </tr>
            <?php
        }
        
        
        // echo "<br>count : ".($total/$counter);
        ?>
        <td id="tdlast">Moyenne</td>
        <td id="tdlast"><?php echo array_sum($total)/sizeof($total)?></td>
        
</tbody>
<span></span>
<tfoot>

</tfoot>
</table>

</body>

</html>