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
	private static final int MINIMUM_COUNTER_VALUE = -100;
	private static final int MAXIMUM_COUNTER_VALUE = 100;
	
	private CounterState state;
	private Random random;
	
	private ArrayList<ICounterListener> listeners;
	
	public Counter()
	{
		counterValue = 0;
		velocity = 0;
		changing = false;
		random = new Random(System.currentTimeMillis());
		listeners = new ArrayList<ICounterListener>();
		this.state=CounterState.INERMEDIATE;
	}
	
	public int getCounterValue() { return counterValue; }
	public int getVelocity() { return velocity; }
	public CounterState getState() {return this.state;}
	
	public void setState(CounterState state) {
		
		this.state=state;
	}
	
	
	public void addListener(ICounterListener listener)
	{
		listeners.add(listener);
	}
	
	public boolean removeListener(ICounterListener listener)
	{
		return listeners.remove(listener);
	}
	
	public void setCounterValue(int counterValue,CounterState state)
	{
		if(counterValue<=MINIMUM_COUNTER_VALUE)
			counterValue=MINIMUM_COUNTER_VALUE;
		else {
			counterValue=MAXIMUM_COUNTER_VALUE;
		}
		this.counterValue = counterValue;
		setState(state);
		for (ICounterListener listener : listeners)
			listener.updateCounterValue(counterValue,state);
		if (counterValue<=MINIMUM_COUNTER_VALUE) {
			state=CounterState.MINIMUM;
			setVelocity(-velocity);
		}
		else if(counterValue>=MAXIMUM_COUNTER_VALUE)
		{
			state=CounterState.MAXIMUM;
			setVelocity(-velocity);
		}
		else {
			state=CounterState.INERMEDIATE;
		}
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

	@Override
	public void setCounterValue(int counterValue) {
		// TODO Auto-generated method stub
		
	}
}
