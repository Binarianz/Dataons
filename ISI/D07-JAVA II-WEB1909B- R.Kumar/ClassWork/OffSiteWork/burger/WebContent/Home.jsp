<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="tag" %> 
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
<script src="https://code.jquery.com/jquery-1.12.4.min.js"></script>
<script>
$(document).ready(function(){
    $("select").change(function(){
        $(this).find("option:selected").each(function(){
            var optionValue = $(this).attr("value");
            if(optionValue){
                $(".box").not("." + optionValue).hide();
                $("." + optionValue).show();
            } else{
                $(".box").hide();
            }
        });
    }).change();
});
</script>
</head>
<body>

<h1>Home</h1>
	
	
	<FORM ACTION="Totaldetails" METHOD="POST">
    Select a Category:&nbsp;
    <select name="burgers">
        <tag:forEach items="${allBurgers}" var="burgers">
            <option value="${burgers.name}${burgers.price}">Name: ${burgers.name} Price: ${burgers.price} Maximum Toppings:${burgers.nooftoppings}  </option>
        </tag:forEach>
    </select>
    <br/>
    <br/>
    <div class="red box">You have selected option 1 <strong>Maximum topping allowed : 4</strong> only</div>
    <div class="green box">You have selected option 2<strong>Maximum topping allowed : 2</strong> only</div>
    <div class="blue box">You have selected option 2<strong>Maximum topping allowed : 6</strong> only</div>
    
    
    
    
      Select all Toppings:&nbsp;
     <br/>
     <br/>
        <tag:forEach items="${allToppings}" var="toppings">
           <input type="checkbox" name="topping" value="${toppings.name}${toppings.price}">Topping: ${toppings.name} <br/> ___Price: ${toppings.price}_______<br> </input><br />
        </tag:forEach>
    
    <br/><br/>
    <input type="submit" value="Submit" />
</form><%-- 
	<tag:forEach var="burger" items="${allBurgers}">
		
    		<jsp:param name="content" value="${burger.getName()}"/>
   			<jsp:param name="date" value="${burger.getPrice()}"/>
			<jsp:param name="email" value="${burger.getNooftoppings()}"/>
	</tag:forEach> --%>


</body>
</html>