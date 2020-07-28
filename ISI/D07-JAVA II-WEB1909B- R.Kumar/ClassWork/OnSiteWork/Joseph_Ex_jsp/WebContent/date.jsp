
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%@ page import="java.util.*,java.text.*,hello.hello,hello.datestring,hello.person" %>
    <%@ include file = "hello.jsp"%>
    <%@ page session="false" %>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>Today is 
<h1>1.1</h1>
<%= new java.util.Date() %>
<br>
<h1>2.1
</h1>
<%
java.util.Date date=new java.util.Date();
out.println(date);
%>
<h1>2.2</h1>
<%
Integer num=5;
out.println("<table border=1px>");
for(int i=1;i<=5;i++)
{
	out.println("<tr>");
		out.println("<td>Number</td>");
		out.println("<td>"+i+"</td>");
	out.println("</tr>");
}
out.println("</table>");
%>
<h1>2.3</h1>
<% 
Boolean statuser=false;
int x = (int)(Math.random()*((1-0)+1))+0;
if(x==0)
	out.println("<h1>welcome</h1>");
else
	out.println("<h1>goodbye</h1>");
%>
<h1>3</h1>
<% 
Date date2=new java.util.Date();
out.println(date2);

%>
<h1>3.2</h1>
<%
hello h=new hello();
out.println("<h1>"+h.poster()+"</h1>") ;
%>
<%
datestring d=new datestring();
out.println("<h1>"+d.getDate()+"</h1>");
%>

<h1>6</h1>

<%-- <jsp:forward page="hello.jsp"/> --%>
<form action="savename.jsp"> 
<input type="text" name="fname" placeholder="first name"> <br><br>
<input type="text" name="lname" placeholder="last name"> <br><br>
<input type="text" name="address" placeholder="address"> <br><br>
<input type="text" name="age" placeholder="age"> <br><br>
<input type="text" name="rstatus" placeholder="relation status"> <br><br>
<input type="submit" value="submit"><br/> 
</form> 
<%
    Integer[] numbers = {4, 3, 1, 9};
%>
...

<%----------------------This is a JSP Comment --%>
<span><%= numbers.length %> - 1</span>
<span><%= numbers[3] %></span>
<span><%= numbers[2] %></span>
<%-- This is a JSP Comment --%>
----------------

<%
    char[] letters = {'J', 'A', 'V', 'A'};
%>
...
<% if (letters.length > 4) { %>
<span><%= letters[3] + "pple " + letters[0] + "uice" %></span>
<% } else { %>
<span><%= letters%><%= " " + letters[0] + "uice" %></span>
<% } %>


-----------------------------





=====================================


</body>
</html>