package com.isi.web.studentdata;

import java.util.ArrayList;

import com.isi.web.studentstuff.Student;

public class FillStudent {

	public FillStudent() {
	}

	public static ArrayList<Student> getAllStudents() {
		ArrayList<Student> Students = new ArrayList<Student>();
		Students.add(new Student("Thomas", "Christy", 23));
		Students.add(new Student("Elisha", "Sciana", 22));
		Students.add(new Student("Kaur", "Karampreet", 22));

		return Students;
	}

}
