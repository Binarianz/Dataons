<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<title>Insert title here</title>
</head>
<body>
<form method="post" action="StudentSubmit">
<fieldset>
<legend align="right">Registration </legend>
<label> You can register via this form </label>

<table>

<tr>
<td> Last Name : </td>
<td><input type="text" name="name" ></td>
</tr>

<tr>
<td> First Name : </td>
<td><input type="text" name="fname"></td>
</tr>

<tr>
<td> Course : </td>
<td>
<select name="selectCourse">
  <option value="Java3">Java 3</option>
  <option value="Java Basics">Java Basics</option>
  <option value="Java2">Java2</option>
</select>
</td>

<td>
<input type="radio" name="sessionRadio" value="Evening"> Evening
</td>

<td>
<input type="radio" name="sessionRadio" value="Day"> Day 
</td>

<td>
<input type="checkbox" name="sessionCheckBox" value="Winter"> Session Winter
</td>

<td>
<input type="checkbox" name="sessionCheckBox" value="Summer"> Session Summer
</td>

</tr>
</table>

<input type="submit" name="register" value="Register">

</fieldset>
</form>
</body>
</html>