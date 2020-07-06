<?php

function showTitle($title)
{
echo "<br/><b>&#9830; $title</b><br/>";
echo '<hr/>';
}

const SENTENCE = 'Une phrase qui doit être affiché en mettant un mot par ligne';

showTitle('Exercice 1');
$sentenceArray=explode(" ",SENTENCE);
foreach($sentenceArray as $element){
    echo $element."<br>";
}

showTitle('Exercice 2');
$sentenceArray=explode(" ",SENTENCE);

foreach(array_reverse($sentenceArray) as $element){
    echo $element."<br>";
}


showTitle('Exercice 3');
echo "Nombre de mot: ".sizeof($sentenceArray);

showTitle('Exercice 4');
echo "Nombre de mot: ".strlen(SENTENCE);

showTitle('Exercice 5');
echo "Nombre de caractre sans les espaces: ".strlen(str_replace(" ", "", SENTENCE));

showTitle('Exercice 6');
echo strtoupper(SENTENCE);

showTitle('Exercice 7');
echo ucwords(SENTENCE);

showTitle('Exercice 8');
echo str_replace("e", "f", SENTENCE);