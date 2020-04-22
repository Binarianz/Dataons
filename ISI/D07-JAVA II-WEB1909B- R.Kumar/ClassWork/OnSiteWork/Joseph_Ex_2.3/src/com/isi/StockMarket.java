package com.isi;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Random;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class StockMarket
 */
@WebServlet("/StockMarket")
public class StockMarket extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public StockMarket() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#init(ServletConfig)
	 */
	public void init(ServletConfig config) throws ServletException {
		double rand = Math.random(); 
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		response.setHeader("refresh", "3");
		int max = 50; 
        int min = 12; 
        int range = max - min + 1; 
		PrintWriter out = response.getWriter();
		 int rand = (int)(Math.random() * range) + min;
		 int rand1 = (int)(Math.random() * range) + min;
		 int rand2 = (int)(Math.random() * range) + min;
	      out.println( "Sun Microsysytems : "+(double)rand+"<br/>");
	      out.println( "\nMicrosoft : "+(double)rand1+"<br/>");
	      out.println( "\nCheckpoint Software : "+(double)rand2+"<br/>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
