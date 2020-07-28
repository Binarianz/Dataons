package model;

public class Bill {
	private int id;
	private String bname;
	private int bprice;
	private String tstring;
	private  int ttotalprice;
	private int total;
	
	public Bill(int id, String bname, int bprice, String tstring, int ttotalprice, int total) {
		//super();
		this.id = id;
		this.bname = bname;
		this.bprice = bprice;
		this.tstring = tstring;
		this.ttotalprice = ttotalprice;
		this.total = total;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getBname() {
		return bname;
	}
	public void setBname(String bname) {
		this.bname = bname;
	}
	public int getBprice() {
		return bprice;
	}
	public void setBprice(int bprice) {
		this.bprice = bprice;
	}
	public String getTstring() {
		return tstring;
	}
	public void setTstring(String tstring) {
		this.tstring = tstring;
	}
	public int getTtotalprice() {
		return ttotalprice;
	}
	public void setTtotalprice(int ttotalprice) {
		this.ttotalprice = ttotalprice;
	}
	public int getTotal() {
		return total;
	}
	public void setTotal(int total) {
		this.total = total;
	}
	

}
