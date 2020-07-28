package com.isi.web.view;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.isi.web.javabean.Student;
import com.isi.web.manager.SessionManager;
import com.isi.web.manager.StudentManager;

/**
 * Servlet implementation class DisplayStudent
 */
@WebServlet("/displayStudent")
public class DisplayStudent extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public DisplayStudent() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();

		ArrayList<Student> students = StudentManager.getAll();
		ArrayList<Student> studentsFromSession = SessionManager.getArrayFromSession(request);

		out.println("<html><head><title>Display Students</title></head><body>");
		out.print("<h1> List of all students</h1>");

		out.print("<table>");
		for (Student s : students) {
			out.print("<tr>");

			out.print("<td>" + s.getId() + "</td>");
			out.print("<td>" + s.getLastName() + "</td>");
			out.print("<td>" + s.getFirstName() + "</td>");
			out.print("<td><a href=\"manageStudent?action=add&id=" + s.getId() + "\">Add </a></td>");
			out.print("</tr>");
		}
		out.print("</table>");

		out.print("<h1> Session Student List </h1>");
		if (studentsFromSession != null && !studentsFromSession.isEmpty()) {
			out.print("<table>");
			for (Student s : studentsFromSession) {
				out.print("<tr>");

				out.print("<td>" + s.getId() + "</td>");
				out.print("<td>" + s.getLastName() + "</td>");
				out.print("<td>" + s.getFirstName() + "</td>");
				out.print("<td><a href=\"manageStudent?action=remove&id=" + s.getId() + "\">Remove</a></td>");
				out.print("</tr>");
			}
			out.print("</table></body></html>");
		}
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
