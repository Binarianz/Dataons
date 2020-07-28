package app;

public class HealthyBurger extends BasicBurger {

    public HealthyBurger() {
        super("Healthy Burger", 5.43, "Brown rye roll", 6);
        setToppings(new Topping("Egg", 5.43));
        setToppings(new Topping("Lentils", 3.12));
    }

}