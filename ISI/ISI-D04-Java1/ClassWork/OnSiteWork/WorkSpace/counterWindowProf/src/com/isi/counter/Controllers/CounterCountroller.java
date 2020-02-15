package com.isi.counter.Controllers;

import com.isi.counter.Models.Counter;
import com.isi.counter.views.CounterWindow;

public class CounterCountroller {

	private Counter counter;
	private CounterWindow window;
	public CounterCountroller(Counter counter,CounterWindow window) {
		this.counter=counter;
		this.window=window;
		updateView();
	}
	private void updateView() {
		window.updateCounterValue(counter.getcouCounterValue());
	}
	public void increment() {
		//do validation
		//apply action model
		//update view by accessing new model
		counter.increment();
		updateView();
	}
	public void decrement() 
	{
		counter.decrement();
		updateView();
	}
	public void random() 
	{
		counter.random();
		updateView();
	}
}