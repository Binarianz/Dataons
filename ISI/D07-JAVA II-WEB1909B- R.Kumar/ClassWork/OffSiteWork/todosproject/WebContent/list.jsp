<%-- <h1>${param.todo}</h1> --%>
<form action="change" method="post">
<tr>
<td> <input type="checkbox" name="chkBox" value="${param.todo}"></td>
<td><label class="strikethrough">${param.todo}</label>}</td><br><br>
<td><button type="submit">update</button></td>
</tr>
</form>