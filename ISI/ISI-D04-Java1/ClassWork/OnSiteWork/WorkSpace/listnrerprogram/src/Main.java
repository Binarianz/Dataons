
public class Main
{
	public static void main(String[] args)
	{
		Account account = new Account();
		MyWindow window = new MyWindow(account, "Window");
		window.setVisible(true);
	}
}
