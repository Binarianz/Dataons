package com.isi.counter.controllers;

import com.isi.counter.models.Counter;
import com.isi.counter.views.CounterWindow;

public class CounterController
{
	private Counter counter; // Model
	private CounterWindow window; // View
	
	public CounterController(Counter counter, CounterWindow window)
	{
		this.counter = counter;
		this.window = window;
		updateView();
	}
	
	private void updateView()
	{
		window.updateCounterValue(counter.getCounterValue());
	}
	
	public void increment()
	{
		counter.increment();
		updateView();
	}
	
	public void decrement()
	{
		counter.decrement();
		updateView();
	}
//	public void showComppletewindow() {
//		window.show();
//	}
	public void random()
	{
		counter.random();
		updateView();
	}
}
