package app;

public class BasicBurger extends Burger {

    public BasicBurger() {
        super("Basic Burger", 3.56, "White roll", 4);

        setToppings(new Topping("Tomato", 0.27));
        setToppings(new Topping("Lettuce", 0.72));
        setToppings(new Topping("Cheese",1.13));
        setToppings(new Topping("Carrot", 2.75));
    }

    public BasicBurger(String name, Double price, String rollType, Integer maxTopping) {
        super(name, price, rollType, maxTopping);

        setToppings(new Topping("Tomato", 0.27));
        setToppings(new Topping("Lettuce", 0.54));
        setToppings(new Topping("Cheese", 0.47));
        setToppings(new Topping("Carrot", 0.37));

    }

}