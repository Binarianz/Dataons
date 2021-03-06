package com.isi.counter.models;

import java.util.ArrayList;
import java.util.Random;

import com.isi.counter.interfaces.ICounter;
import com.isi.counter.interfaces.ICounterListener;

public class Counter implements ICounter
{
	private int counterValue;
	private int velocity;
	private boolean changing;
	
	private Random random;
	
	private ArrayList<ICounterListener> listeners;
	
	public Counter()
	{
		counterValue = 0;
		velocity = 0;
		changing = false;
		random = new Random(System.currentTimeMillis());
		listeners = new ArrayList<ICounterListener>();
	}
	
	public int getCounterValue() { return counterValue; }
	public int getVelocity() { return velocity; }
	
	public void addListener(ICounterListener listener)
	{
		listeners.add(listener);
	}
	
	public boolean removeListener(ICounterListener listener)
	{
		return listeners.remove(listener);
	}
	
	public void setCounterValue(int counterValue)
	{
		this.counterValue = counterValue;
		for (ICounterListener listener : listeners)
			listener.updateCounterValue(counterValue);
	}
	
	public void setVelocity(int velocity)
	{
		this.velocity = velocity;
		for (ICounterListener listener : listeners)
			listener.updateVelocity(velocity);
		if (!changing)
			new Thread(() -> changeCounter()).start();
	}
	
	private void changeCounter()
	{
		changing = true;
		
		while (velocity != 0)
		{
			setCounterValue(counterValue + (velocity));
			
			try
			{
				Thread.sleep(50);
			}
			catch (InterruptedException e) {}
		}
		
		changing = false;
	}
	
	public void increment()
	{
		setCounterValue(counterValue + 10);
	}
	
	public void decrement()
	{
		setCounterValue(counterValue - 10);
	}
	
	public void random()
	{
		setCounterValue(random.nextInt(201) - 100);
	}
}
