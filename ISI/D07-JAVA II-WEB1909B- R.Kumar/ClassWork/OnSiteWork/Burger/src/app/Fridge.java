package app;

import java.util.ArrayList;

public class Fridge {

    private ArrayList<Burger> allBurgers = new ArrayList<>();
    private ArrayList<Topping> allToppings = new ArrayList<>();

    public ArrayList<Burger> getBurgers() {
        return this.allBurgers;
    }

    // public ArrayList<Topping> getTopping() {
    // return this.allToppings;
    // }

    public Fridge() {

        Burger basicBurger = new BasicBurger();
        Burger healthyBurger = new HealthyBurger();
        Burger deluxeBurger = new DeluxeBurger();

        allBurgers.add(basicBurger);
        allBurgers.add(healthyBurger);
        allBurgers.add(deluxeBurger);

        // this.allToppings.addAll(healthyBurger.getToppings());
        // this.allToppings.addAll(deluxeBurger.getToppings());
    }

}