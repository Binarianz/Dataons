<%@page import="javabean.Student"%>
<%@page import="java.util.ArrayList"%> 
<%@page import="manager.SessionManager"%>
<%@page import="manager.StudentManager"%>
<%
	ArrayList<Student> students = StudentManager.getAll();
	ArrayList<Student> studentsFromSession = SessionManager.getArrayFromSession(request);
%>

<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>

<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Display Student JSP</title>
</head>
<body>
<form action="manageStudent?action=addNew" method="post">
  <fieldset>
    <legend>New Student</legend>
    First Name: <input type="text" name="firstName"><br>
    Last Name: <input type="text" name="lastName"><br>
    <input type="submit" value="Submit">
  </fieldset>
</form>
<br>
<h1> List of all students</h1>
<table border="1">
	<tr>
		<th style="width:50px">
			<a href="manageStudent?action=sort&type=id">ID</a></th>
		<th style="width:120px"> Last Name</th>
		<th style="width:120px">First Name</th>
		<th style="width:120px"><a href="manageStudent?action=sort&type=status">Status</a></th>
	</tr>
	<% for (Student s : students) { %>
   <tr>
	   <td style="text-align:right"><%= s.getId() %></td>
	   <td style="text-align:center"><%= s.getLastName() %></td>
	   <td style="text-align:center"><%= s.getFirstName() %></td>
	   <td style="text-align:center">
	   <% if (!SessionManager.isIdInSession(session, s.getId())) { %>
	   <a href="manageStudent?action=add&id=<%= s.getId() %>">Add to Session</a>
	   <% } else { %>
	   Added
	   <% } %>
	   </td>
   </tr>
   <% } %>
</table>
<h1> Session Student List </h1>
<% if (studentsFromSession != null && !studentsFromSession.isEmpty()) { %>
<table border="1">
	<tr>
		<th style="width:50px">
			<a href="manageStudent?action=sort&type=id&insession">ID</a></th>
		<th style="width:120px"> Last Name</th>
		<th style="width:120px">First Name</th>
		<th style="width:120px">Status</th>
	</tr>
	<% for (Student s: studentsFromSession) { %>
   <tr>
	   <td style="text-align:right"><%= s.getId() %></td>
	   <td style="text-align:center"><%= s.getLastName() %></td>
	   <td style="text-align:center"><%= s.getFirstName() %></td>
	   <td style="text-align:center">
	       <a href="manageStudent?action=remove&id=<%= s.getId() %>">Remove</a></td>
   </tr>
   <% } %>
</table>
<% } else { %>
	<p>No Students in current Session</p>
<% } %>
</body>
</html>