
public class Topping {

	String nameString;
	double price;
	public Topping(String name,double price) {
		this.nameString=name;
		this.price=price;
	}
	public String getName()
	{
		return this.nameString;
	}
	public double getPrice()
	{
		return this.price;
	}
	@Override
	public String toString() {
		return this.nameString+ " :$"+String.format("%.2f", this.price+"\n");
	}
}
