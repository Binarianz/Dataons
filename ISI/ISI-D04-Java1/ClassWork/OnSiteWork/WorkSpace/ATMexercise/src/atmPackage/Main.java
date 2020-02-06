package atmPackage;

public class Main
{
	public static void main(String[] args)
	{
		AccountClass account = new AccountClass("Joseph",3000);
		ATMView window = new ATMView(account);
		window.setVisible(true);
	}
}
