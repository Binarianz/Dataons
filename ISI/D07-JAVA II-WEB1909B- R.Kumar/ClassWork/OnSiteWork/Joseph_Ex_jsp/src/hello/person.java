package hello;

public class person {
	public String fname;
	public String lname;
	public String address;
	public String rstatus;
	public int age;
	public String getFname() {
		return fname;
	}
	public void setFname(String fname) {
		this.fname = fname;
	}
	public String getLname() {
		return lname;
	}
	public void setLname(String lname) {
		this.lname = lname;
	}
	public String getAddress() {
		return address;
	}
	public void setAddress(String address) {
		this.address = address;
	}
	public String getRstatus() {
		return rstatus;
	}
	public void setRstatus(String rstatus) {
		this.rstatus = rstatus;
	}
	public person(String fname, String lname, String address, String rstatus, int age) {
		super();
		this.fname = fname;
		this.lname = lname;
		this.address = address;
		this.rstatus = rstatus;
		this.age = age;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}


}
