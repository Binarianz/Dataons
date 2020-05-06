package com.isi.web.controller;

import java.io.IOException;
import java.util.ArrayList;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

import com.isi.web.javabean.Student;
import com.isi.web.manager.SessionManager;
import com.isi.web.manager.StudentManager;

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
		switch (action) {
		case "add":
			String id = request.getParameter("id");
			Student eToAdd = StudentManager.getById(Integer.parseInt(id));
			SessionManager.add(request, eToAdd);
			break;
		case "remove":
			String rid = request.getParameter("id");
			SessionManager.removeById(request, rid);
			break;
		case "create":
			HttpSession session = request.getSession(true);

			ArrayList<Student> students = StudentManager.getAll();
			break;
		default:
			break;
		}
		response.sendRedirect("displayStudent");
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
