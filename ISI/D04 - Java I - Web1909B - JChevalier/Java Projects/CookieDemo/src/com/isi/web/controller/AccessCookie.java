package com.isi.web.controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class AccessCookie
 */
@WebServlet("/AccessCookie")
public class AccessCookie extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public AccessCookie() {
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
		Cookie[] cookies = request.getCookies();
		if (cookies == null) {
			out.println("No Cookies.");
		} else {
			out.println("Found " + cookies.length + " Cookies." + "</br></br>");
			for (Cookie c : cookies) {
				out.println("Cookie Key is : " + c.getName() + " , Cookie Value is :" + c.getValue() + "</br>");
				c.setMaxAge(10);
				response.addCookie(c);
			}
			response.setHeader("refresh", "10");
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
