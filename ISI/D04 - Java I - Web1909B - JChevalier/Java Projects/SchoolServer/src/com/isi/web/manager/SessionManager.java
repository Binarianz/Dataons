package com.isi.web.manager;

import java.util.ArrayList;
import java.util.Enumeration;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpSession;

import com.isi.web.javabean.Student;

public class SessionManager {

	public static void add(HttpServletRequest req, Student toAdd) {
		HttpSession session = req.getSession();
		session.setAttribute(Integer.toString(toAdd.getId()), toAdd);
	}

	public static void removeById(HttpServletRequest req, String id) {
		HttpSession session = req.getSession(false);
		if (session != null) {
			session.removeAttribute(id);
		}
	}

	public static ArrayList<Student> getArrayFromSession(HttpServletRequest req) {
		ArrayList<Student> students = new ArrayList<>();

		HttpSession session = req.getSession(false);
		if (session != null) {
			Enumeration<String> ids = session.getAttributeNames();
			if (ids != null) {
				while (ids.hasMoreElements()) {
					String id = ids.nextElement();
					Student student = (Student) session.getAttribute(id);
					students.add(student);
				}
			}
		}
		return students;
	}

}