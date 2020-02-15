package atmPackage;

public class Main
{
	public static void main(String[] args)
	{
		AccountClass account=new AccountClass("john", 2000);
		ATMWindow window = new ATMWindow("Atm");
		window.setVisible(true);
		//System.out.println(account.accountDescription());
	}
}
