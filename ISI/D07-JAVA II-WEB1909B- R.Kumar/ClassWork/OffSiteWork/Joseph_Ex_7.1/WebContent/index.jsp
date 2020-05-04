
<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
	pageEncoding="ISO-8859-1"%>
<%@page import="automobile.*"%>
<%@page import="java.util.ArrayList"%>
<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta name="viewport" content="width=device-width, initial-scale=1.0" />
<meta name="author" content="Joseph emmanuel">
<meta name="id" content="3172">
<title>Database auto</title>
<link rel="stylesheet" href="css/style.default.css" type="text/css" />
<link rel="stylesheet" href="css/responsive-tables.css">

<script type="text/javascript" src="js/jquery-1.9.1.min.js"></script>
<script type="text/javascript" src="js/jquery-migrate-1.1.1.min.js"></script>
<script type="text/javascript" src="js/jquery-ui-1.9.2.min.js"></script>
<script type="text/javascript" src="js/bootstrap.min.js"></script>
<script type="text/javascript" src="js/jquery.uniform.min.js"></script>
<script type="text/javascript" src="js/jquery.dataTables.min.js"></script>
<script type="text/javascript" src="js/jquery.cookie.js"></script>
<script type="text/javascript" src="js/modernizr.min.js"></script>
<script type="text/javascript" src="js/responsive-tables.js"></script>
<script type="text/javascript" src="js/custom.js"></script>
<script type="text/javascript">
    jQuery(document).ready(function(){
        // dynamic table
        jQuery('#dyntable').dataTable({
            "sPaginationType": "full_numbers",
            "aaSortingFixed": [[0,'asc']],
            "fnDrawCallback": function(oSettings) {
                jQuery.uniform.update();
            }
        });
        
        jQuery('#dyntable2').dataTable( {
            "bScrollInfinite": true,
            "bScrollCollapse": true,
            "sScrollY": "300px"
        });
        
    });
</script>
</head>
<body>
	<div class="mainwrapper">
		<table id="dyntable" class="table table-bordered responsive">
			<colgroup>
				<col class="con1" />
				<col class="con0" />
				<col class="con1" />
				<col class="con0" />
				<col class="con1" />
			</colgroup>
			<thead>
				<tr>
					<th class="head0">No. of Vehicle</th>
					<th class="head1">Model</th>
					<th class="head2">Year</th>
					<th class="head3">Price</th>

				</tr>

			</thead>
			<tbody>

				<%
                    String brandName=request.getParameter("brandName");
            	    ArrayList<BrandDetail> brands=DBConnection.getBrandDetails(brandName);
                    for(BrandDetail brandDetail:brands){
                    out.print("<tr>");	
                    out.print("<td>"+brandDetail.getNb()+"</td>");
                    out.print("<td>"+brandDetail.getModel()+"</td>");
                    out.print("<td>"+brandDetail.getYr()+"</td>");
                    out.print("<td>"+brandDetail.getPrice()+"</td>");
                    out.print("</tr>");
                    }
                    %>
			</tbody>
		</table>
	</div>
</body>
</html>