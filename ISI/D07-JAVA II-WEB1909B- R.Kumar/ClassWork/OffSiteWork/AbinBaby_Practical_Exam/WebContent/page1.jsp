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
<form action="FilterC" method="post">
<fieldset>
<h4>Filter by Country</h4>
    <select name="country">
        <tag:forEach items="${allCountry}" var="country">
            <option value="${country}">${country}</option>
        </tag:forEach>
    </select>
     <input type="submit" value="Display" />
</fieldset>
</form>
<br>
<br>
<br>
<form action="FilterF" method="post">
<fieldset>
<h4>Filter by Farmer</h4>
    <select name="farmer">
        <tag:forEach items="${allFarmer}" var="farmer">
            <option value="${farmer}">${farmer}</option>
        </tag:forEach>
    </select>
     <input type="submit" value="Display" />
</fieldset>
</form>
<br>
<br>
<br>
<table>
<tr>
    <th>Farm Name</th>
    <th>Country</th>
    <th>Farmer Name</th>
    <th>List Animals</th>
  </tr>
 <tag:forEach items="${AllFarms}" var="farms">
 <tr>
 <td><tag:out value="${farms.fname}" /></td>
 <td><tag:out value="${farms.country}" /></td>
 <td><tag:out value="${farms.name}" /></td>
 <td><a onclick="AnimalDetails">Display Animals</a></td>
 </tr>
 </tag:forEach>
 </table>
 <a href="AnimalDetails">Display Animals</a>
 <script>
 function increment() {
		inputTime.stepUp(1);
		//return false;
	} 
 </script>
</body>
</html>