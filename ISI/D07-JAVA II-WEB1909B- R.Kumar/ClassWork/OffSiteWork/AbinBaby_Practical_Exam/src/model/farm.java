package model;

public class farm {
	public String fname;
	public String country;
	public String name;
	public farm(String fname, String country, String name) {
		super();
		this.fname = fname;
		this.country = country;
		this.name = name;
	}
	public String getFname() {
		return fname;
	}
	public void setFname(String fname) {
		this.fname = fname;
	}
	public String getCountry() {
		return country;
	}
	public void setCountry(String country) {
		this.country = country;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	
	

}
