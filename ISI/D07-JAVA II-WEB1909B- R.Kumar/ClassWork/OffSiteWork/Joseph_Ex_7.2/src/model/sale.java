package model;

public class sale {
	 private int id;
	 private String designation;
	 private int price;
	 private int stock;
	 private String format;
	public sale(int id, String designation, int price, int stock, String format) {
		super();
		this.id = id;
		this.designation = designation;
		this.price = price;
		this.stock = stock;
		this.format = format;
	}
	public int getId() {
		return id;
	}
	public void setId(int id) {
		this.id = id;
	}
	public String getDesignation() {
		return designation;
	}
	public void setDesignation(String designation) {
		this.designation = designation;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public int getStock() {
		return stock;
	}
	public void setStock(int stock) {
		this.stock = stock;
	}
	public String getFormat() {
		return format;
	}
	public void setFormat(String format) {
		this.format = format;
	}
	 
	 
	 
	 

}
