package com.isi.web.quotes;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Quotes
 */
@WebServlet("/Quotes")
public class Quotes extends HttpServlet {
	private static final long serialVersionUID = 1L;
	private int numRefreshes;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public Quotes() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see Servlet#init(ServletConfig)
	 */
	public void init(ServletConfig config) throws ServletException {
		numRefreshes = 0;
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// response.getWriter().append("Served at: ").append(request.getContextPath());

		if (numRefreshes < 10)
			response.setHeader("refresh", "3");

		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		out.println("<html>");
		out.println("<head>");
		out.println("<title>Stock Market Price</title>");
		out.println("</head>");
		out.println("<body>");
		out.println("<h3>Google : " + (double) ((int) (Math.random() * 10000)) / 100 + "</h3>");
		out.println("<h3>Microsoft : " + (double) ((int) (Math.random() * 10000)) / 100 + "</h3>");
		out.println("<h3>ISI : " + (double) ((int) (Math.random() * 10000)) / 100 + "</h3>");
		out.println("</br></br></br>");
		out.println("Refresh Left : " + (10 - numRefreshes++));
		out.println("</body>");
		out.println("</html>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
