package com.isi.boat.Models;

import com.isi.boat.interfaces.IBoatModel;

import java.util.ArrayList;

import com.isi.boat.interfaces.IBoatListener;
//import javax.lang.model.util.Elements.Origin;
import com.isi.boat.interfaces.IBoatListener;;
public class BoatModel implements IBoatModel 
{
	 public enum BoatDirection { UP, DOWN,ORGIN, LEFT, RIGHT;}
	 public enum BoatState { OFF, RUNNIG, REFILLING_FUEL, CAPSIZED }
	private int speed;
	private int distanceToShore;
	private int fuelTankLevel;
	private int fuelTankCapacity;
	
	private BoatDirection direction;
	private BoatState state;
	
	private ArrayList<IBoatListener> listeners;
	private boolean changing;
	public BoatModel()
	{
		listeners = new ArrayList<IBoatListener>();
		fuelTankCapacity = 100;
		fuelTankLevel = 50;
		setVelocity(0);
		setDisanceToShore(0);
		setBoatDirection(BoatDirection.ORGIN);
		setBoatState(BoatState.OFF);
	}
	
	//public getter methods	
	public int getFuelTankLevel() { return this.fuelTankLevel; }
	public int getFuelTankCapacity() {return this.fuelTankCapacity;}
	public int getSpeed() {return this.speed;}
	public int getDistanceToShore() {return this.distanceToShore;};
	public BoatDirection getBoatDirection() {return this.direction;}
	public BoatState getBoatState() {return this.state;} 
	
	
	//public setter methods	
	public void setFuelTankLevel(int fuelTankLevel)
	{
		this.fuelTankLevel = fuelTankLevel;
		for (IBoatListener listener : listeners)
			listener.updateFuelValue(fuelTankLevel);
	}
	public void setDisanceToShore(int disatance) {this.distanceToShore=disatance;}
	public void setBoatDirection(BoatDirection direction) {this.direction=direction;}
	public void setBoatState(BoatState state) {this.state=state;}
	
	//listners
	public void addListener(IBoatListener listener)
	{
		listeners.add(listener);
	}
	
	public boolean removeListener(IBoatListener listener)
	{
		return listeners.remove(listener);
	}
	
	public void updateFuelValue(int counterValue)
	{
		this.speed = counterValue;
		for (IBoatListener listener : listeners)
			listener.updateFuelValue(counterValue);
	}
	
	//public action methods
	public boolean boatStart()
	{
		boolean validAction = (state == BoatState.OFF&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			System.out.println("boat starting"); // Message
			state = BoatState.RUNNIG; // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Boat cannot start"); // Error message
		}
		return validAction; // Return Boolean error code		
	}
	public boolean boatStop()
	{
		boolean validAction = (state == BoatState.RUNNIG&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			System.out.println("Boat starting"); // Message
			state = BoatState.OFF; // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Boat cannot start"); // Error message
		}
		return validAction; // Return Boolean error code	
	}
	public boolean increaseSpeed()
	{
		boolean validAction = (state == BoatState.RUNNIG&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			System.out.println("Airplane increasing altitude");
			updateFuelValue(speed+10);
			// Message
			//setAltitude(altitude + ALTITUDE_CHANGE); // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot increase altitude"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	public boolean decreaseSpeed()
	{
		boolean validAction = (state == BoatState.RUNNIG&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			System.out.println("Airplane increasing altitude"); // Message
			//setAltitude(altitude + ALTITUDE_CHANGE); // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot increase altitude"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	public boolean changeDirection(int direction1)
	{
		BoatDirection direction=BoatDirection.ORGIN;
		switch (direction1) {
		case 0:
			direction=BoatDirection.UP;
			break;
		case 1:
			direction=BoatDirection.DOWN;
			break;
		case 2:
			direction=BoatDirection.LEFT;
			break;
		case 3:
			direction=BoatDirection.RIGHT;
			break;

		default:
			break;
		}
		
		boolean validAction = (state == BoatState.RUNNIG&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			this.setBoatDirection(direction);
			System.out.println("Boat chainging direction to :"+direction); // Message
			
		}
		else // Error: Invalid action
		{
			System.out.println("Error: boat cannot change direction"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	public boolean refillFuel()
	{
		boolean validAction = (state == BoatState.OFF&&state==BoatState.CAPSIZED&&this.distanceToShore!=0&&this.fuelTankCapacity!=0);
		if (validAction) // Valid action
		{
			System.out.println("boat is refueling "); // Message
			state = BoatState.REFILLING_FUEL; // Apply the action
			this.fuelTankCapacity=100;
		}
		else // Error: Invalid action
		{
			System.out.println("Error: boat is not able to refuel"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	public void setVelocity(int velocity)
	{
		this.speed = velocity;
		for (IBoatListener listener : listeners)
			listener.updateVelocity(velocity);
		if (!changing)
			new Thread(() -> changeCounter()).start();
	}
	private void changeCounter()
	{
		changing = true;
		
		while (speed != 0)
		{
			speed=speed+10;
			
			try
			{
				Thread.sleep(50);
			}
			catch (InterruptedException e) {}
		}
		
		changing = false;
	}

	@Override
	public boolean changeDirection(BoatDirection direction) {
		// TODO Auto-generated method stub
		return false;
	}
}
