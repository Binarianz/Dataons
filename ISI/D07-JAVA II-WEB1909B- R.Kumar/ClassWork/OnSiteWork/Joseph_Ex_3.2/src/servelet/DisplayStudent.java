package servelet;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import model.FillStudents;
import model.Student;

/**
 * Servlet implementation class DisplayStudent
 */
@WebServlet("/DisplayStudent")
public class DisplayStudent extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public DisplayStudent() {
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
		PrintWriter out = response.getWriter();
		out.println("<html>");
		out.println("<head>");
		out.println("<title>Students List</title>");
		out.println("</head>");
		out.println("<body>");
		int i = 1;
		for (Student st : FillStudents.getAllStudents()) {
			out.println("<ul>");
			out.println("<li>Student Number : " + i + "</li>");
			out.println("<li> Last Name : " + st.getLastName() + "</li>");
			out.println("<li>First Name :" + st.getFirstName() + "</li>");
			out.println("<li>Age : " + st.getAge() + "</li>");
			i++;
			out.println("</ul>");
		}
		out.println("</body>");
		out.println("</html>");
	}

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		// TODO Auto-generated method stub
		doGet(request, response);
	}

}
