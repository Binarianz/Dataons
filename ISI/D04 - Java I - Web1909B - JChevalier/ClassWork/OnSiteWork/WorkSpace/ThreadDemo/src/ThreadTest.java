
public class ThreadTest {

	private int value;
	private synchronized int getValue(){	return this.value;}
	private synchronized void setValue(int value){this.value=value;}
	
	private synchronized void incrementValue() {
		int presentValue=getValue();
		setValue(value+1);
		presentValue=getValue();
		System.out.println("Threadtest : Value="+value);
	}
	public ThreadTest()
	{
		System.out.println("ThreadTest() constructor begeninig");
		
		setValue(0);
		
		Runnable runnable=new Runnable() {
			
			@Override
			public void run() {
				for (int i = 0; i <10; i++) {
					
					synchronized (this) {
						int presentValue=getValue();
						setValue(value+1);
						presentValue=getValue();
						System.out.println("Threadtest : Value="+value);
					}
					
					try {
						Thread.sleep(1000);
					} catch (InterruptedException e) {
						e.printStackTrace();
					}
				}
				
			}
		};
		System.out.println("thread initialising");
		Thread thread1=new Thread(runnable);
		Thread thread2=new Thread(runnable);
		thread1.start();
		thread2.start();
	}
}
