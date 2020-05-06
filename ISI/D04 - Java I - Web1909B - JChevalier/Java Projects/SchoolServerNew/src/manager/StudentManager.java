package manager;

import java.util.ArrayList;

import javax.servlet.http.HttpSession;

import javabean.Student;

public class StudentManager {

	private static ArrayList<Student> students;

	private enum StatusSortState {
		NOT_ORDERED, ADDED, ADD_TO_SESSION
	}

	private enum NormalSortState {
		NOT_ORDERED, ASCENDING, DESCENDING
	}

	private static StatusSortState statusSortState = StatusSortState.NOT_ORDERED;
	private static NormalSortState idSortState[] = { NormalSortState.NOT_ORDERED, NormalSortState.NOT_ORDERED };
	private static NormalSortState firstSortState[] = { NormalSortState.NOT_ORDERED, NormalSortState.NOT_ORDERED };
	private static NormalSortState lastSortState[] = { NormalSortState.NOT_ORDERED, NormalSortState.NOT_ORDERED };

	private static void clearAllSortStates() {
		statusSortState = StatusSortState.NOT_ORDERED;
		idSortState[0] = NormalSortState.NOT_ORDERED;
		idSortState[1] = NormalSortState.NOT_ORDERED;
		firstSortState[0] = NormalSortState.NOT_ORDERED;
		firstSortState[1] = NormalSortState.NOT_ORDERED;
		lastSortState[0] = NormalSortState.NOT_ORDERED;
		lastSortState[1] = NormalSortState.NOT_ORDERED;
	}

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

	public static void sortById(HttpSession session, boolean inSession) {
		int stateIdx = inSession ? 1 : 0;

		boolean ascending = idSortState[stateIdx] != NormalSortState.ASCENDING;

		int numStudents = students.size();
		if (inSession) {
			numStudents = 0;
			for (Student s : students) {
				if (SessionManager.isIdInSession(session, s.getId()))
					numStudents++;
			}
		}
		int[] ids = new int[numStudents];
		int[] ordered = new int[numStudents];
		int currentIdx = 0;
		for (Student s : students) {
			if (inSession && !SessionManager.isIdInSession(session, s.getId()))
				continue;
			ids[currentIdx] = s.getId();
			currentIdx++;
		}
		for (int i = 0; i < numStudents; i++) {
			for (int j = i; j < numStudents; j++) {
			}
		}
	}

	public static void sortByName(HttpSession session, boolean byFirstName, boolean inSession) {
	}

	public static void sortByStatus(HttpSession session) {
		ArrayList<Student> ordered = new ArrayList<>();
		while (!students.isEmpty()) {
			Student s = students.remove(0);
			boolean inSession = SessionManager.isIdInSession(session, s.getId());
			boolean addFirst = ((inSession
					&& ((statusSortState == StatusSortState.NOT_ORDERED) || (statusSortState == StatusSortState.ADD_TO_SESSION)))
					|| (!inSession && (statusSortState == StatusSortState.ADDED)));
			if (addFirst) {
				ordered.add(0, s);
			} else {
				ordered.add(s);
			}
		}
		students = ordered;
		if (statusSortState == StatusSortState.ADDED) {
			clearAllSortStates();
			statusSortState = StatusSortState.ADD_TO_SESSION;
		} else {
			clearAllSortStates();
			statusSortState = StatusSortState.ADDED;
		}
	}

	public static void addNew(Student newStudent) {
		students.add(newStudent);
	}

	public static int generateUniqueId() {
		boolean foundUnique = false;
		int id = -1;
		while (!foundUnique) {
			// Generate a random integer between 0 and 999
			id = (int) (Math.random() * 1000.0);

			// Assume it is unique; if it already exists, boolean will be set to false
			foundUnique = true;

			// See if id already exists
			for (Student s : students) {
				if (s.getId() == id) {
					foundUnique = false;
					break;
				}
			}
		}
		return id;
	}

	public static Student getById(int id) {
		for (Student s : students) {
			if (s.getId() == id) { return s; }
		}
		return null;
	}

}
