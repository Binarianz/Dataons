package com.isi;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class cookielogin
 */
@WebServlet("/cookielogin")
public class cookielogin extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public cookielogin() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#init(ServletConfig)
	 */
	public void init(ServletConfig config) throws ServletException {
		// TODO Auto-generated method stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		
	    //we get "name" parameter from html
		  String name = request.getParameter("name");

		  //we check, if "RememberMe" parameter is not null,
		  //then set above "name" value accordingly
		  if(request.getParameter("rememberRadio") != null){  
		   Cookie c = new Cookie("cookieName", name);
		   c.setMaxAge(5);
		   response.addCookie(c);
		  }else{
		   Cookie c = new Cookie("cookieName", "anonymous User");
		   c.setMaxAge(5);
		   response.addCookie(c);
		  }

		  //we forward the altered response object to "View.jsp"
		  RequestDispatcher view = request.getRequestDispatcher("index.jsp");
		  view.forward(request, response);
		
		
		
		
//		HttpSession session = request.getSession(true);
//
//		session.setAttribute("name", request.getParameter("name"));
		//session.setAttribute("password", request.getParameter("password"));

//		// to get the username and password
//		String userName = session.getAttribute("userName");
//		String password = session.getAttribute("password");
		
		
		
		
//		PrintWriter pw=response.getWriter();		
//		Cookie[] cookies=request.getCookies();
//		for(Cookie cookie : cookies){
//			request.setAttribute("name","Joseph");
//				//request.setAttribute("name",cookies[0].getName());
//			}
		}


	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
