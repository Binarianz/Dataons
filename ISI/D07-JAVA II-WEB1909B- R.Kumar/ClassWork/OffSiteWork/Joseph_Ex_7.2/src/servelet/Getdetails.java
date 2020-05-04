package servelet;

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

import db.SalesDBUtil;
import model.sale;;
/**
 * Servlet implementation class Getdetails
 */
@WebServlet("/Getdetails")
public class Getdetails extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Getdetails() {
        super();
        // TODO Auto-generated constructor stub
    }
    @Resource(name="jdbc/social")
    private DataSource datasource;
    private SalesDBUtil salesdb;
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		ArrayList<sale> allProducts  = new ArrayList<>();	
		try {
			allProducts=salesdb.getAllProducts();
			request.setAttribute("allProducts", allProducts);
			
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			
			RequestDispatcher dispatcher = request.getRequestDispatcher("mian.jsp");
			
			dispatcher.forward(request, response);
			
		}
		
	}
	@Override
	public void init() throws ServletException {
		// TODO Auto-generated method stub
		super.init();
		
		try {
		
			salesdb = new SalesDBUtil(datasource);	
		
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
