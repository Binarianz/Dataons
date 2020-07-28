package javabean;

public class Student
{
	private int id;
	private String lastName;
	private String firstName;
	
	private String MakeCanonical(String name)
	{
		return name.substring(0, 1).toUpperCase() + name.substring(1).toLowerCase();
	}
	
	public Student() {}
	
	public Student(int id, String lastName, String firstName)
	{
		super();
		this.id = id;
		this.lastName = MakeCanonical(lastName);
		this.firstName = MakeCanonical(firstName);
	}

	public int getId() { return id; }
	public void setId(int id) { this.id = id; }

	public String getLastName() { return lastName; }
	//public void setLastName(String lastName) { this.lastName = MakeCanonical(lastName); }

	public String getFirstName() { return firstName; }
	//public void setFirstName(String firstName) { this.firstName = MakeCanonical(firstName); }
}
