package servelet;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.Arrays;

import javax.annotation.Resource;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.sql.DataSource;

import db.BillDBUtil;
import db.BurgerDBUtil;

/**
 * Servlet implementation class Totaldetails
 */
@WebServlet("/Totaldetails")
public class Totaldetails extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public Totaldetails() {
        super();
        // TODO Auto-generated constructor stub
    }

	/**
	 * @see Servlet#init(ServletConfig)
	 */
	public void init(ServletConfig config) throws ServletException {
		// TODO Auto-generated method stub
	}
	  @Resource(name="jdbc/social")
	    private DataSource datasource;
	    private BurgerDBUtil burgerdb;
	    private BillDBUtil billdb;
	    
	    
	    
	    @Override
		public void init() throws ServletException {
			// TODO Auto-generated method stub
			super.init();
			
			try {
			
				burgerdb = new BurgerDBUtil(datasource);
				billdb=new BillDBUtil(datasource);
			
			}catch(Exception ex) {
				
				throw new ServletException(ex);
			
			}
			
		}
	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		response.setContentType("text/html"); 
		request.getDispatcherType("");
		
	       PrintWriter out=response.getWriter();
		String selectedBurger=request.getParameter("burgers");
		System.out.println(selectedBurger);
		char last = selectedBurger.charAt(selectedBurger.length() -1);
		System.out.println(last);
		String toppings[]=request.getParameterValues("topping");
		System.out.println(last);
		int maxtot=0;
		String heading="----------Recipet----------";
	       out.print("<h2>" +heading+ "</h2>");
	    out.println("<h2>----------------------------------------</h2>");
	    out.print("<br/>");
	    out.println(selectedBurger.substring(0, selectedBurger.length() - 1)+" - $"+last);
	    out.print("<br/>");
	    out.println("Extras----------------------------------------");
	   // out.println("<h2>----------------------------------------</h2>");
	    out.print("<br/>");
	    for (int i = 0; i < toppings.length; i++) {
	    	out.print("<br/>");
	    	out.println(toppings[i].substring(0, toppings[i].length() - 1)+": $"+toppings[i].charAt(toppings[i].length() -1));
			maxtot=Character.getNumericValue(toppings[i].charAt(toppings[i].length() -1));
			System.out.println(maxtot);
		}
	    out.println("<h2>----------------------------------------</h2>");
	    out.print("<br/>");
	    int finalmaxtot=(maxtot+(int)last);
	    out.println("Total Amount: $"+finalmaxtot);
		int id=1;
		String bname=selectedBurger.substring(0, selectedBurger.length() - 1);
		int bprice=(int)selectedBurger.charAt(selectedBurger.length() -1);
		String tstring=Arrays.toString(toppings);
		int ttotalprice=maxtot;
		int total=(int)1.14*(bprice+ttotalprice);
		try {
			billdb.insertBill(id, bname, bprice, tstring, ttotalprice, total);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
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
