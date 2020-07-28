package manager;

import java.util.ArrayList;
import java.util.Enumeration;

import javabean.Student;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

public class SessionManager
{
	public static void add(HttpServletRequest req, Student toAdd)
	{
		HttpSession session = req.getSession();
		session.setAttribute("" + toAdd.getId(), toAdd);
	}
	
	public static void removeById(HttpServletRequest req, String id )
	{
		HttpSession session = req.getSession(false);
		if (session != null)
		{
			session.removeAttribute(id);
		}
	}
	
	public static boolean isIdInSession(HttpSession session, int id)
	{
		return (session.getAttribute("" + id) != null);
	}
	
	public static ArrayList<Student> getArrayFromSession(HttpServletRequest req)
	{
		ArrayList<Student> studentsFromSession = new ArrayList<>();
		
		HttpSession session = req.getSession(false);
		if (session != null)
		{
			Enumeration<String> ids = session.getAttributeNames();
			if (ids != null)
			{
				while (ids.hasMoreElements())
				{
					String id = ids.nextElement();
					Student s = (Student)session.getAttribute(id);
					studentsFromSession.add(s);
				}
			}
		}
		
		return studentsFromSession;
	}
}
