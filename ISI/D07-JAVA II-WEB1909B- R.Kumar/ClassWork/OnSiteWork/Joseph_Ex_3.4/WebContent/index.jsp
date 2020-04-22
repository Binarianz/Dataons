<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>

<form action="ConvertServlet" method="post">
<fieldset>
<legend>Conversion</legend>
<label>Canadian dollar amount</label>
<input type="text" name="inputValue"><br>
<input type="radio" name="exchange" value="us">US
<input type="radio" name="exchange" value="fr">FR
<input type="submit" name="btnConvert" value="Convert"> 
</fieldset>
</form>
</body>
</html>