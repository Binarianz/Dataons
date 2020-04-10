package app;

import java.util.ArrayList;
import java.util.Scanner;

public class Restaurant {

    private static Fridge fridge = new Fridge();
    private static Scanner input;

    public static void displayBurgers() {
        System.out.println("\n\t Burgers");
        System.out.println("\n\t -------");

        int i = 1;

        for (Burger burger : fridge.getBurgers()) {
            System.out.println(i + ".\t" + burger);
            System.out.println("\t----------------------------------");

            i++;
        }
    }

    public static void displayToppings(Burger selectedBurger) {
        System.out.println("\n-----------------------");
        System.out.println("Please add some toppings");
        System.out.println(" -----------------------\n");

        int i = 1;

        for (Topping topping : selectedBurger.getToppings()) {
            System.out.println(i + ".\t" + topping);
            System.out.println("\t----------------------------------");

            i++;
        }

        System.out.println("0. \tThats all\n");
    }

    public static Burger selectBurger() {
        Burger tempBurger;

        System.out.print("Select: ");

        try {
            input = new Scanner(System.in);
            int choice = input.nextInt();

            if (choice > 3 || choice < 1) {
                System.out.print("Please select the correct option: ");
                tempBurger = selectBurger();
            } else {
                tempBurger = fridge.getBurgers().get(choice - 1);
            }

        } catch (Exception e) {
            System.out.print("Please select the correct option: ");
            tempBurger = selectBurger();
        }

        return tempBurger;
    }

    public static void chooseToppings(Burger selectedBurger, ArrayList<Topping> selectedToppings) {
	        System.out.print("\nChoose any " + selectedBurger.getMaxToppings() + " toppings : ");
        try {
            input = new Scanner(System.in);
            int choice = input.nextInt();

            if (choice == 0) {
                return;
            } else if (choice > selectedBurger.getMaxToppings()) {
                System.out.println("Please select the correct topping: ");
                chooseToppings(selectedBurger, selectedToppings);
            } else {
                selectedToppings.add(selectedBurger.getToppings().get(choice - 1));
            }

        } catch (Exception e) {
            System.out.println("Please select the correct topping: ");
            chooseToppings(selectedBurger, selectedToppings);
        }

        if (selectedBurger.getMaxToppings() != selectedToppings.size()) {
            chooseToppings(selectedBurger, selectedToppings);
        }

    }




public static void generateBill(Burger selectedBurger, ArrayList<Topping> selectedToppings)
{
	 double total=selectedBurger.getPrice();
	 int j=1;
	 double taxamount;
	 String[] burgerNameStrings=selectedBurger.getName().split(" ");
	 System.out.println("\n\t Recipet");
     System.out.println("\n\t -------");
     
     System.out.println(j + ". " + burgerNameStrings[0]+" - "+selectedBurger.getPrice());
     System.out.println("\nExtras :");
     System.out.println("\n-------");     
     for (int i = 0; i <selectedToppings.size(); i++) {
		System.out.println(i+1+". "+selectedToppings.get(i).getName()+" : "+selectedToppings.get(i).getPrice());
		total+=selectedToppings.get(i).getPrice();
	}
     taxamount=total*(.14975);     
     System.out.println("--------------------------------------");
     System.out.println("Amount: "+String.format("%.2f ", total)+"$ + (Tax: "+String.format("%.2f", taxamount)+"$)");
     System.out.println("--------------------------------------");
     System.out.println("Total: "+String.format("%.2f ", (taxamount+total))+"$");
     System.out.println("\n");
}

}