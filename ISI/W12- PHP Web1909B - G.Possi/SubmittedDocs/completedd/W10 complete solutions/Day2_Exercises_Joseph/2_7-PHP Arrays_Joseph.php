 <?php
        echo "Question 1: ";
        echo"<br>";        
        $fruits = array("Apple", "Banana", "Orange");
        echo "Number of items in an array is: ".sizeof($fruits);
        echo"<br>";
        echo"<br>";
        echo "Question 2: ";
        echo"<br>";        
        $fruits = array("Apple", "Banana", "Orange");
        echo "Second item of the array is: ".$fruits[1];
        echo"<br>";
        echo"<br>";
        echo "Question 3 to Question 5: ";
        echo"<br>";        
        $age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
        echo "The age of ben is: ".$age["Ben"]."<br>";
        echo "The key and values pairs are : <br>";
        foreach($age as $values=>$value){
            echo"Key is: ".$values." and Value is: ".$value."<br>";
        }
        echo"<br>";        
        echo "Question 6: ";
        echo"<br>";        
        $colors = array ("red", "green", "blue", "yellow");
        echo "Orginal array is: <br>";
        foreach($colors as $element){
            echo $element."<br>";
        }
        echo "The sorted array by descending alphabetically: <br>";
        sort($colors);
        foreach($colors as $element){
            echo $element."<br>";
        }
        echo"<br>";
        echo"<br>";
        echo "Question 7: ";
        echo"<br>";        
        $colors = array ("red", "green", "blue", "yellow");
        echo "Orginal array is: <br>";
        foreach($colors as $element){
            echo $element."<br>";
        }
        echo "The sorted array by descending alphabetically: <br>";
        rsort($colors);
        foreach($colors as $element){
            echo $element."<br>";
        }
        echo"<br>";
        echo"<br>";
        echo "Question 8: ";
        echo"<br>";        
        $age = array("Peter"=>"35", "Ben"=>"37", "Joe"=>"43");
        echo "Orginal array is: <br>";
        foreach($age as $values=>$value){
            echo"key: ".$values." and value: ".$value."<br>";
        }
        
        echo "The sorted array is: <br>";
        asort($age);
        foreach($age as $values=>$value){
            echo"key: ".$values." and value: ".$value."<br>";
        }        
        echo"<br>";
        echo"<br>";
        echo "Question 9: ";
        echo"<br>";        
        $month = array(  "January"=>"1","February"=>"2","March"=>"3","April"=>"4",
         "May"=>"5","June"=>"6","July"=>"7","August"=>"8","September"=>"9","October"=>"10",
         "November"=>"11","December"=>"12");
        echo "Orginal array is: <br>";
        foreach($month as $values=>$value){
            echo$values." => ".$value."<br>";
        }        
        echo "The  array after removing July is: <br>";
        $deleted="July";
        unset($month[$deleted]);
        foreach($month as $values=>$value){
            echo$values." => ".$value."<br>";
        }        
        echo"<br>";
        echo"<br>";