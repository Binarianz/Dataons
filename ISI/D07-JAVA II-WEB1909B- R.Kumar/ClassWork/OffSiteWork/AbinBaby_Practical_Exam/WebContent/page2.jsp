<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

<table>
<tr>
    <th>Animal Id</th>
    <th>Animal Name</th>
    <th>Animal Price</th>
    <th>Animal Type</th>
  </tr>
 <tag:forEach items="${AllFarms}" var="farms">
 <tr>
 <td><tag:out value="${farms.fname}" /></td>
 <td><tag:out value="${farms.country}" /></td>
 <td><tag:out value="${farms.name}" /></td>
 </tr>
 </tag:forEach>
 </table>
 <br>
 <br>
<br>
<a href="Page1Details">Display farms</a>

</body>
</html>