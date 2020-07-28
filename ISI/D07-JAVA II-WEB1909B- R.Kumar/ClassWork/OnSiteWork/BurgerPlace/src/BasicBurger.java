
public class BasicBurger extends Burger{
	public BasicBurger() {
		super("Basic Burger", 3.56, "White roll", 4);
		Burger burger=new Burger("name", 21.1, "roll",3);
    	setToppings(new Topping("tommoto", 2.67));
    	setToppings(new Topping("carrot", 2.67));
    	setToppings(new Topping("bacon", 2.67));
    	setToppings(new Topping("tommoto", 2.67));
	}
    	public BasicBurger(String _name,Double _price,String _roll,Integer _maxtopping) {
    		//this()
    		super(_name, _price, _roll, _maxtopping);
    	}
	

}
