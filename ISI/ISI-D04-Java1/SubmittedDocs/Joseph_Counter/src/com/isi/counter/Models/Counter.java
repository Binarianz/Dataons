package com.isi.counter.Models;

import java.util.Random;

public class Counter {

	private int countervalue;
	private Random random;
	public Counter()
	{
		countervalue=0;
		random=new Random(System.currentTimeMillis());
	}
	public int getcouCounterValue() {return countervalue;}
	public void increment()
	{
		countervalue++;
	}
	public void decrement() {
		countervalue--;
	}
	public void random() {
		countervalue=random.nextInt(201) - 100;
	}
}
