package com.isi.web.manager;

import java.util.ArrayList;

import com.isi.web.javabean.Student;

public class StudentManager {

	private static ArrayList<Student> students;

	public static ArrayList<Student> getAll() {
		if (students == null) {
			students = new ArrayList<>();

			students.add(new Student(1, "mamno", "yvette"));
			students.add(new Student(12, "boulali", "sofiane"));
			students.add(new Student(56, "gilbert", "pascal"));
			students.add(new Student(789, "adipietro", "jason"));
		}
		return students;
	}

	public static Student getById(int id) {
		for (Student s : students) {
			if (s.getId() == id) { return s; }
		}
		return null;
	}

}