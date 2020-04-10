package app;

import java.util.ArrayList;

public class Burger {

    private String name;
    private Double price;
    private String rollType;
    private Integer maxTopping;
    private ArrayList<Topping> toppings = new ArrayList<>();

    public Burger(String name, Double price, String rollType, Integer maxTopping) {
        this.name = name;
        this.price = price;
        this.rollType = rollType;
        this.maxTopping = maxTopping;
    }

    public String getName() {
        return this.name;
    }

    public Double getPrice() {
        return this.price;
    }

    public String getRollType() {
        return this.rollType;
    }

    public Integer getMaxToppings() {
        return this.maxTopping;
    }

    public ArrayList<Topping> getToppings() {
        return this.toppings;
    }

    public void setToppings(Topping topping) {
        this.toppings.add(topping);
    }

    @Override
    public String toString() {
        return this.name + " with " + this.rollType + " :- \n\tCost: $ " + String.format("%.2f ", this.price)
                + "\n\tMaximum toppings: " + this.maxTopping + "\n";
    }

}