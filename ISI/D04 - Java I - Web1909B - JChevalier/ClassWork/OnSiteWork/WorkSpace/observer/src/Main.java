
public class Main
{
	public static void main(String[] args)
	{
		Observable observable = new Observable();
	
		// Observer: Normal class that implements IObserver
		Observer observer = new Observer();
		observable.addObserver(observer);
		
		// Anonymous inner class that implements IObserver
		observable.addObserver(new IObserver()
		{
			@Override
			public void updateValue(int value)
			{
				System.out.println("Observer 2: Received update from Observable: Value = " + value);
			}
		});
		
		// Lambda expression that implements IObserver
		observable.addObserver((int value) ->
		{
			System.out.println("Observer 3: NEW VALUE = " + value);
		});
		
		observable.startThread();
	}
}
