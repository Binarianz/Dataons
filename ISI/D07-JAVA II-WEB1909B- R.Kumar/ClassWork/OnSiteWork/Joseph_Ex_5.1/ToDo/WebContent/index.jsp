<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix="tag" %>

<%@ page import="java.util.*" %>
    
<%


	ArrayList<String> todos = (ArrayList<String>) session.getAttribute("todos");


%>    

    
    
<!DOCTYPE html>
<html>
<head>
	<meta charset="ISO-8859-1">
	<title>Insert title here</title>
	<link rel="stylesheet" href="./css/index.css">
</head>
<body>

	


	<form method="POST" action="Create">
		<input type="text" name="todo" placeholder="Write Todo">
		<button type="submit">Create</button>
	</form>
	
	
	
	<tag:forEach var="todo" items="${todos}">
			
		<!--  Each Todo has done property   -->
		
		<!--  
		
			if(${done})_{
				<h1 class="checked">${todo}</h1>
			}else{
				<h1>${todo}</h1>		
			}
		
		
		  -->
		  
		  
		  <!-- Requirements
		  
		  1. checkbox
		  2. use classes
		  3. delete todo
		  4. clear all todos;
		  
		  -->  
		  
		
<%-- 		<h1> ${todo} </h1> --%>
		  
		<jsp:include page="list.jsp" >
    		<jsp:param name="todo" value="${todo}"/>
		</jsp:include> 
	
	</tag:forEach>

</body>
</html>