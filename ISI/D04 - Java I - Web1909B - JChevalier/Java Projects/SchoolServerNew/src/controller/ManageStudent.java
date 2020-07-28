package controller;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import javabean.Student;
import manager.SessionManager;
import manager.StudentManager;

/**
 * Servlet implementation class ManageStudent
 */
@WebServlet("/manageStudent")
public class ManageStudent extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public ManageStudent() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String action = request.getParameter("action");
		String id = request.getParameter("id");
		switch (action) {
		case "add":
			Student toAdd = StudentManager.getById(Integer.parseInt(id));
			SessionManager.add(request, toAdd);
			break;
		case "remove":
			SessionManager.removeById(request, id);
			break;
		case "addNew":
			String firstName = request.getParameter("firstName");
			String lastName = request.getParameter("lastName");
			Student s = new Student(StudentManager.generateUniqueId(), lastName, firstName);
			StudentManager.addNew(s);
			break;
		case "sort":
			String columnToSort = request.getParameter("type");
			switch (columnToSort) {
			case "status":
				StudentManager.sortByStatus(request.getSession());
				break;
			case "id":
				StudentManager.sortById(request.getSession(), request.getParameter("insession") != null);
				break;
			case "name":
				StudentManager.sortByName(request.getSession(), request.getParameter("first") != null, request.getParameter("insession") != null);
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
		response.sendRedirect("displayStudent2.jsp");
	}

	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}

}
