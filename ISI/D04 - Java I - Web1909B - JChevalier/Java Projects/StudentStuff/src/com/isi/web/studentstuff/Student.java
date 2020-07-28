/**
 * 
 */
package com.isi.web.studentstuff;

/**
 * @author cthomas
 *
 */
public class Student {

	/**
	 * 
	 */
	public Student() {
		// TODO Auto-generated constructor stub
	}

	public Student(String lastName, String firstName, int age) {
		this.lastName = lastName;
		this.firstName = firstName;
		this.age = age;
	}

	// attribute
	private String lastName;
	private String firstName;
	private int age;

	// getter setter
	public String getLastName() { return lastName; }

	public void setLastName(String lastName) { this.lastName = lastName; }

	public String getFirstName() { return firstName; }

	public void setFirstName(String firstName) { this.firstName = firstName; }

	public int getAge() { return age; }

	public void setAge(int age) { this.age = age; }

}
