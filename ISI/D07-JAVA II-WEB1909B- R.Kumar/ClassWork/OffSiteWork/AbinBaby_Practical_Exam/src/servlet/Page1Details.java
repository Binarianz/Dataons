package servlet;


import java.io.IOException;
import java.util.ArrayList;

import javax.annotation.Resource;
import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.sql.DataSource;

import db.FarmDBUtil;
import model.farm;
import model.animal;
/**
 * Servlet implementation class Page1Details
 */
@WebServlet("/Page1Details")
public class Page1Details extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Page1Details() {
        super();
        // TODO Auto-generated constructor stub
    }
    @Resource(name="jdbc/social")
    private DataSource datasource;
    private FarmDBUtil farmdb;
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		ArrayList<farm> AllFarms  = new ArrayList<>();	
		ArrayList<String> allCountry=null;
		ArrayList<String> allFarmer=null;
		try {
			AllFarms=farmdb.getAllFarmDetails();
			allCountry=farmdb.getAllCountry();
			allFarmer=farmdb.getAllFarmer();
			request.setAttribute("AllFarms", AllFarms);
			request.setAttribute("allCountry", allCountry);
			request.setAttribute("allFarmer", allFarmer);
			
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			
			RequestDispatcher dispatcher = request.getRequestDispatcher("page1.jsp");
			
			dispatcher.forward(request, response);
			
		}
	}
	@Override
	public void init() throws ServletException {
		// TODO Auto-generated method stub
		super.init();
		
		try {
		
			farmdb = new FarmDBUtil(datasource);	
		
		}catch(Exception ex) {
			
			throw new ServletException(ex);
		
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
