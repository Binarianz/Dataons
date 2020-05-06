package com.isi.web.servlets;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class FormProcessing
 */
@WebServlet("/registerServlet")
public class FormProcessing extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public FormProcessing() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		// doGet(request, response);

		String lastName = request.getParameter("name");
		String firstName = request.getParameter("fname");
		String courseName = request.getParameter("selectCourse");
		String timeOfDay = request.getParameter("sessionRadio");
		String semester[] = request.getParameterValues("sessionCheckBox");

		PrintWriter out = response.getWriter();
		if (lastName == null || lastName.equals("") || firstName == null || firstName.equals("") || timeOfDay == null || semester == null) {
			out.println("<h2>Please Enter All Details...</h2>");
			out.print("<a href=\"javascript:history.back()\">Go Back</a>");
			return;
		}
		out.println("<html>");
		out.println("<head>");
		out.println("<title>Exercise : 3.3 - User Form Result</title>");
		out.println("</head>");
		out.println("<body>");
		out.println("<h3>Information Submitted : </h3>");

		out.println("<p>Semester(s) :");
		if (semester == null)
			out.println("None Selected");
		else {
			out.println(semester[0]);
			if (semester.length == 2)
				out.println(", " + semester[1]);
		}
		out.println(" </p>");

		out.println("<p>Last Name : " + lastName + "</p>");
		out.println("<p>First Name : " + firstName + "</p>");
		out.println("<p>Course Selected : " + courseName + "</p>");
		out.println("<p>Time of Course : " + timeOfDay + "</p>");
		out.print("<a href=\"javascript:history.back()\">Edit Info</a>");
		out.println("</body>");
		out.println("</html>");
	}

}
