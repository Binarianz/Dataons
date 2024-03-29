package com.isi.counter.controllers;

import com.isi.counter.interfaces.ICounterController;
import com.isi.counter.interfaces.ICounterListener;
import com.isi.counter.models.Counter;
import com.isi.counter.models.Counter.CounterState;

public class CounterController
	implements ICounterController, ICounterListener
{
	private Counter counter;		// Model
	private ICounterListener view;	// View
	
	public CounterController(Counter counter, ICounterListener view)
	{
		this.counter = counter;
		this.view = view;
		updateCounterValue(0,CounterState.MINIMUM);
		updateVelocity();
	}
	
	// Passive model: Controller calls model getter method
	private void updateCounterValue()
	{
		view.updateCounterValue(counter.getCounterValue(),counter.getState());
	}
	
	// Passive model: Controller calls model getter method
	private void updateVelocity()
	{
		view.updateVelocity(counter.getVelocity());
	}
	
	
	//// ICounterListener interface implementation
	
	// Active model: Model calls this update method
	@Override // ICounterListener
	public void updateCounterValue(int counterValue,CounterState state)
	{
		view.updateCounterValue(counterValue,state);
	}
	
	// Active model: Model calls this update method
	@Override // ICounterListener
	public void updateVelocity(int velocity)
	{
		view.updateVelocity(velocity);
	}
	
	
	//// ICounterController interface implementation
	
	@Override // ICounterController
	public void increment()
	{
		counter.increment();
		//updateCounterValue();	// Unnecessary with active model
	}
	
	@Override // ICounterController
	public void decrement()
	{
		counter.decrement();
		//updateCounterValue();	// Unnecessary with active model
	}
	
	@Override // ICounterController
	public void random()
	{
		counter.random();
		//updateCounterValue();	// Unnecessary with active model
	}
	
	@Override // ICounterController
	public void setVelocity(int velocity)
	{
		counter.setVelocity(velocity);
		//updateVelocity();		// Unnecessary with active model
	}
}
