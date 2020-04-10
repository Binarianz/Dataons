import java.util.ArrayList;

public class Burger {
	
	
	private String name;
	private Double price; 
	private String roll;
	//private String meat;
	private Integer maxToping;
	private ArrayList <Topping> toppings= new ArrayList<>();
	
	public Burger(String _name,Double _price,String _roll,Integer _maxtopping) {
		this.name=_name;
		this.price=_price;
		this.roll=_roll;
		//this.meat=_meat;
		this.maxToping=_maxtopping;
		
	}
	
	public String getName() {
		return this.name;
	}
	public Double getPrice() {
		return this.price;
	}
	public String getRoll() {
		return this.roll;
	}
//	public String getMeat() {
//		return this.meat;
//	}
	public Integer getMaxToppings() {
		return this.maxToping;
	}
	public ArrayList <Topping> getToppings(){
		return this.toppings;
	}
	public void setToppings(Topping topping)
	{
		this.toppings.add(topping);
	}
	
	@Override
	public String toString()
	{
		return this.name+" with "+this.roll+" :-\n\tCost : $"
				+String.format("%.2f", this.price+" \n\tMaximum topping: "+this.maxToping+"\n");
	}
	
	
	
	
	
	

}
