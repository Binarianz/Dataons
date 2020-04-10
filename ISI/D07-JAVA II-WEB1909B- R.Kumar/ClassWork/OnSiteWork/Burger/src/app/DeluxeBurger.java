package app;

public class DeluxeBurger extends Burger {

    public DeluxeBurger() {
        super("Deluxe Burger", 14.23, "White Roll", 2);
        setToppings(new Topping("Chips", 2.20));
        setToppings(new Topping("Bacon", 4.20));
    }

}