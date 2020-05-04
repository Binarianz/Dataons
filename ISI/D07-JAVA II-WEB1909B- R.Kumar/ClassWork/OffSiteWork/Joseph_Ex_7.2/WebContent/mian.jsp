<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="tag" %> 
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
<style>
table, th, td {
  border: 1px solid black;
}
</style>
</head>
<body>
<form>
<fieldset>

      Select items:&nbsp;
     <br/>
     <br/>

<table>
<tr>
    <th>Designation</th>
    <th>Stock</th>
    <th>Format</th>
    <th>Price</th>
    <th>Cart</th>
  </tr>
 <tag:forEach items="${allProducts}" var="produts">
 <tr>
 <td><tag:out value="${produts.designation}" /></td>
 <td><tag:out value="${produts.stock}" /></td>
 <td><tag:out value="${produts.format}" /></td>
 <td><tag:out value="${produts.price}" /></td>
 <td><button onclick="increment();return false;"> + </button>
 <input type="number" id="myNumber" value="0">
 <button onclick="decrement();return false;"> - </button></td>
 </tr>
 </tag:forEach>
 </table>
 </fieldset>

    
    <br/><br/>
    <input type="submit" value="Submit" />



</form>
<script>
var inputTime = document.getElementById("myNumber");
function increment() {
	inputTime.stepUp(1);
	//return false;
} 
  function decrement() {
	  inputTime.stepDown(1);

} 
</script>



</body>
</html>