package com.isi.boat.Controllers;
//import com.isi.boat.interfaces.ICounterController;
//import com.isi.boat.interfaces.ICounterListener;
//import com.isi.boat.models.Counter;

import com.isi.boat.Models.BoatModel;
import com.isi.boat.Views.MasterPanel;
import com.isi.boat.interfaces.IBoatController;
import com.isi.boat.interfaces.IBoatListener;

public class BoatController implements IBoatListener,IBoatController{

	private BoatModel model;//model
	private MasterPanel window;
	private IBoatListener view;//view
	
	public BoatController( BoatModel model,MasterPanel window)
	{
		this.model=model;
		this.window=window;
		//this.view=view;
		updateView();
	}

	private void updateView() {
		//window.setvlaue, //TODO_
		
	}
	public void start()
	{
		if(model.boatStart())
			window.updateMessageText("Boat is starting");
		else {
			window.updateMessageText("Boat cannot start, its already stated");
		}
	}
	public void stop()
	{
		if(model.boatStop())
			window.updateMessageText("Boat is stoped");
		else {
			window.updateMessageText("Boat cannot stop, its already stoped");
		}
	}
	public void changeDirection(int direction)
	{
		if(model.changeDirection(direction))
			window.updateMessageText("Boat is moving in  "+model.getBoatDirection());
		else {
			window.updateMessageText("Boat cannot change direction");
		}
	}
	
	// User action, coming from slider, going to model
	public void setVelocity(int velocity)
	{
		model.setVelocity(velocity);
		window.updateMessageText("Boat is setting velocity to "+ velocity);
		window.updateProgressbar(velocity);
		//updateVelocity();		// Unnecessary with active model
	}

	// 
	@Override
	public void updateVelocity(int velocity) {
		window.updateVelocity(velocity);
	}

	@Override
	public void updateFuelValue(int fuelValue) {
		window.updateFuelValue(fuelValue);
	
		
	}

	@Override
	public void increment() {
		model.increaseSpeed();
	
		
	}

	@Override
	public void decrement() {
		model.decreaseSpeed();
		
	}
}
