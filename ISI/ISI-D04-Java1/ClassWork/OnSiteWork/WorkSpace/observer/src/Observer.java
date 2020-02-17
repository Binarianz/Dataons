
public class Observer implements IObserver
{
	public void updateValue(int value)
	{
		System.out.println("Observer 1: Received update from Observable: Value = " + value);
	}
}
