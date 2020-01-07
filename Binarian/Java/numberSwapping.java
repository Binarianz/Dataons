/**
 * numberSwapping
 */
import java.util.Scanner;
public class numberSwapping {

    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        int number1,number2,number3;
        System.out.println("Enter the first number \n");
        number1= input.nextInt();
        System.out.print("Enter the second number \n");
        number2=input.nextInt();
        System.out.println("Enter the third number \n");
        number3=input.nextInt();
        number1=number2;
        number2=number3;
        number3=number1;
        System.out.println("The first number now is: "+number1);
        System.out.println ("The second number now is: "+number2);
        System.out.println("The Third number now is: "+number3);
        System.out.print("Enter a new number \n");
        number3=Integer.parseInt(System.console().readLine());
        System.out.println("the new number enterd is: "+number3);
        


    }
}