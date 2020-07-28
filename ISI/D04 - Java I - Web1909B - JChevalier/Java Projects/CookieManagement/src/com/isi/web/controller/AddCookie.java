package com.isi.web.controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.isi.web.util.CookieManagement;

/**
 * Servlet implementation class AddCookie
 */
@WebServlet("/addCookie")
public class AddCookie extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public AddCookie() {
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

		out.println("<html><head><title>Display Users</title></head><body>");
		Cookie[] cookies = request.getCookies();
		if (cookies == null) {
			out.println("There is no Cookies.");
			return;
		}
		for (Cookie c : cookies) {
			var name = c.getValue();
			out.println(c.getName() + " : " + name.replace('_', ' ') + "</br>");
		}
		out.println("</body></html>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		PrintWriter out = response.getWriter();
		int count = 1;
		Cookie[] cookies = request.getCookies();
		if (cookies != null) {
			for (Cookie cookie : cookies) {
				if (cookie.getName().equals("count")) {
					count = Integer.parseInt(cookie.getValue());
				}
			}
		}
		String lastname = request.getParameter("lastName");
		String firstname = request.getParameter("firstName");
		String nameString = lastname + "_" + firstname;
		nameString = nameString.replace(' ', '_');

		Cookie retCookie = CookieManagement.getCookie(request, nameString);
		if (retCookie == null) {
			Cookie name = new Cookie("name_" + count, nameString);
			name.setMaxAge(60 * 60);
			response.addCookie(name);

			count++;
			response.addCookie(new Cookie("count", count + ""));
		} else {
			out.println("Cookie Already Exists..");
		}
		response.sendRedirect("addCookie");
	}

}
