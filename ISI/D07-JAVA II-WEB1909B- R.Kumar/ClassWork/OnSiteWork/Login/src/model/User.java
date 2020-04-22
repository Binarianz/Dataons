package model;

public class User {

	
	private String email;
	private String fname;
	private String lname;	
	private String pass;
	
	
	public User(String email, String fname, String lname, String pass) {
		super();
		this.email = email;
		this.fname = fname;
		this.lname = lname;
		this.pass = pass;
	}


	public User(String email, String pass) {
		super();
		this.email = email;
		this.pass = pass;
	}


	public String getEmail() {
		return email;
	}


	public String getFname() {
		return fname;
	}


	public String getLname() {
		return lname;
	}


	public String getPass() {
		return pass;
	}

	
	public Boolean login()
	{
		
		
		
		
		
		
		
		
		return true;
	}
	
	
	

	@Override
	public String toString() {
		return "User [email=" + email + "]";
	}
	
	
	
	
}
