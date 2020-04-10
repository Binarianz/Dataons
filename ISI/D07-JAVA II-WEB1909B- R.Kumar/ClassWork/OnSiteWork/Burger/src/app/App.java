package app;

import java.io.Console;
import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {

        // display burgers/ menu

        Restaurant.displayBurgers();

        ArrayList<Topping> selectedToppings = new ArrayList<>();

        // select burger
        Burger selectedBurger = Restaurant.selectBurger();

        // display burgers/ menu

        Restaurant.displayToppings(selectedBurger);

        // select topping

        Restaurant.chooseToppings(selectedBurger, selectedToppings);

        // get bill
       Restaurant.generateBill(selectedBurger, selectedToppings);

    }
}