import java.util.ArrayList;

public class Fridge {
	
	
	private ArrayList<Burger>allBurgers=new ArrayList<Burger>();
	private ArrayList<Topping>allToppings=new ArrayList<Topping>();
	
	
	
	
	public ArrayList<Burger>getBurgers(){
		return this.allBurgers;
	}
	public ArrayList<Topping>getToppingss(){
		return this.allToppings;
	}
	public Fridge()
	{
		Burger bBurger=new BasicBurger();
		Burger hBurger=new HealthyBurger();
		Burger dBurger=new DeluxeBurger();
		
		
		allBurgers.add(bBurger);
		allBurgers.add(hBurger);
		allBurgers.add(dBurger);
		
		
		
		
//		this.allToppings.addAll(hBurger.getToppings());
//		this.allToppings.addAll(dBurger.getToppings());
		
		
	}
	

}
