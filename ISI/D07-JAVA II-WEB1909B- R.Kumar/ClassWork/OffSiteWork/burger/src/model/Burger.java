package model;

public class Burger {

	private String name;
	private int price;
	private  int nooftoppings;
	public Burger(String name, int price, int nooftoppings) {
		//super();
		this.name = name;
		this.price = price;
		this.nooftoppings = nooftoppings;
	}
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getPrice() {
		return price;
	}
	public void setPrice(int price) {
		this.price = price;
	}
	public int getNooftoppings() {
		return nooftoppings;
	}
	public void setNooftoppings(int nooftoppings) {
		this.nooftoppings = nooftoppings;
	}
	
}
