package com.isi;

public class loginpojo {
	//private String email;

	public Boolean checkLohin(String email,String pass)
	{
		
		return (email.contains("student@gmail.com")&pass.contains("isi")?true:false);
		
		/*
		 * 
		 * Boolean k=false; k=((email=="student@gmail.com")&&(pass=="isi")); return k;
		 * 
		 * if (email=="student@gmail.com") { if (pass=="isi") { return true; } return
		 * false; } return false;
		 */
	}
	
}
