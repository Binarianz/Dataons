package com.isi;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class Login
 */
@WebServlet("/Login")
public class Login extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Login() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		HttpSession session = request.getSession();	
		loginpojo lpg=new loginpojo();
		String email = request.getParameter("email");
		String pass = request.getParameter("pass");
		session.setAttribute("user", email);
		if (!lpg.checkLohin(email, pass)) {
			RequestDispatcher dispatcher = getServletContext()
	                .getRequestDispatcher("/WEB-INF/error.jsp");
	        dispatcher.forward(request, response);
		}
		else {
			RequestDispatcher dispatcher = getServletContext()
	                .getRequestDispatcher("/WEB-INF/portal.jsp");
	        dispatcher.forward(request, response);
			
		}
		}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
