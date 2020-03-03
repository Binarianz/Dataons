import java.util.ArrayList;

public class Observable
{
	private int value;
	private ArrayList<IObserver> observers; // Listeners
	
	public Observable()
	{
		value = 0;
		observers = new ArrayList<IObserver>();
	}
	
	public void addObserver(IObserver observer)
	{
		observers.add(observer);
	}
	
	public boolean removeObserver(IObserver observer)
	{
		return observers.remove(observer);
	}
	
	public void startThread()
	{
		new Thread(() ->
		{
			for (int i = 0; i < 10; i++)
			{
				setValue(value + 1);
				System.out.println();
				
				try
				{
					Thread.sleep(1000);
				}
				catch (InterruptedException e) { e.printStackTrace(); }
			}
		}).start();
	}
	
	private void setValue(int value)
	{
		this.value = value;
		
		for (IObserver observer : observers)
			observer.updateValue(value);
	}
}
