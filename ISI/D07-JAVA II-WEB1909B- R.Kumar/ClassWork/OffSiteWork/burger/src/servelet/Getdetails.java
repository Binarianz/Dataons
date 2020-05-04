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
import javax.servlet.http.HttpSession;
import javax.sql.DataSource;

import db.BurgerDBUtil;
import db.ToppingDBUtil;
import model.Burger;
import model.Topping;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

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
    private BurgerDBUtil burgerdb;
    private ToppingDBUtil toppingdb;
	/**
	 * @see Servlet#init(ServletConfig)
	 */
    @Override
	public void init() throws ServletException {
		// TODO Auto-generated method stub
		super.init();
		
		try {
		
			burgerdb = new BurgerDBUtil(datasource);	
			toppingdb=new ToppingDBUtil(datasource);
		
		}catch(Exception ex) {
			
			throw new ServletException(ex);
		
		}
		
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		
		ArrayList<Burger> allBurgers = new ArrayList<>();
		ArrayList<Topping> allToppings = new ArrayList<>();
		try {
			allBurgers=burgerdb.getAllBurgers();
			allToppings=toppingdb.getAllToppings();
			request.setAttribute("allBurgers", allBurgers);
			request.setAttribute("allToppings", allToppings);
			
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}finally {
			
			RequestDispatcher dispatcher = request.getRequestDispatcher("TotalDetails");
			
			dispatcher.forward(request, response);
			
		}
		
		
		
		
		// TODO Auto-generated method stub
		response.getWriter().append("Served at: ").append(request.getContextPath());
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
