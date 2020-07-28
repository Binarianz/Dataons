package controller;

import java.io.IOException;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class Verification
 */
@WebServlet("/verification")
public class Verification extends HttpServlet {

	private static final long serialVersionUID = 1L;

	/**
	 * @see HttpServlet#HttpServlet()
	 */
	public Verification() {
		super();
		// TODO Auto-generated constructor stub
	}

	/**
	 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		request.getRequestDispatcher("WEB-INF/error.html").forward(request, response);
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse
	 *      response)
	 */
	@Override
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String returnUrl = "error.html";
		String name = request.getParameter("name");
		String age = request.getParameter("age");
		String sex = request.getParameter("sex");
//		if (name == null || age == null || sex == null) {
//			request.getRequestDispatcher(returnUrl).forward(request, response);
//			return;
//		}
		if (!name.equals("") && !age.equals("") && sex != null) {
			try {
				int ageConvertion = Integer.parseInt(age);
				if (ageConvertion >= 18) {
					returnUrl = "display";
					request.setAttribute("name", name);
					request.setAttribute("sex", sex);
				} else {
					returnUrl = "errorage.html";
				}
			} catch (Exception e) {
				e.printStackTrace();
				throw new NumberFormatException("Couldn't parse age");
			} finally {
				System.out.println("Done processing request");
			}
		}
		request.getRequestDispatcher(returnUrl).forward(request, response);
	}

}
