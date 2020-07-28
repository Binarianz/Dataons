<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%
   Cookie firstName = new Cookie("first_name", request.getParameter("first_name"));
   firstName.setMaxAge(60*60*24); 
   response.addCookie( firstName );
%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
         <h1>Setting Cookies</h1>
      <ul>
         <li><p><b>First Name:</b>
            <%= request.getParameter("first_name")%>
         </p></li>
      </ul>
   
</body>
</html>