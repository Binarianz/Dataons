package com.isi.counter.models;

import java.util.Random;

public class Counter
{
	private int counterValue;
	private Random random;
	
	public Counter()
	{
		counterValue = 0;
		random = new Random(System.currentTimeMillis());
	}
	
	public int getCounterValue() { return counterValue; }
	
	public void increment()
	{
		counterValue += 10;
	}
	
	public void decrement()
	{
		counterValue -= 10;
	}
	
	public void random()
	{
		counterValue = random.nextInt(201) - 100;
	}
}
