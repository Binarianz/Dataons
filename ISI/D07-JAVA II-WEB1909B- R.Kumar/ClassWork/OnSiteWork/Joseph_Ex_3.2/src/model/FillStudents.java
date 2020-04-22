package model;
import java.util.ArrayList;
public class FillStudents {
	public FillStudents() {
	}

	public static ArrayList<Student> getAllStudents() {
		ArrayList<Student> Students = new ArrayList<Student>();
		Students.add(new Student("Joseph", "Emmanuel", 23));
		Students.add(new Student("John", "Thomas", 22));
		Students.add(new Student("Bilal", "John", 22));
		Students.add(new Student("Mathew", "jose", 22));
		Students.add(new Student("Rajan", "koshiy", 22));

		return Students;
	}

}
