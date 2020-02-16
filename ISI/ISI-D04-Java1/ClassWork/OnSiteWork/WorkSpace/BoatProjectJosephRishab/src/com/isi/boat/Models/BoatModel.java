package com.isi.boat.Models;

//import javax.lang.model.util.Elements.Origin;

public class BoatModel {
	 public enum BoatDirection { UP, DOWN,ORGIN, LEFT, RIGHT;}
	 public enum BoatState { OFF, RUNNIG, REFILLING_FUEL, CAPSIZED }
	private int speed;
	private int distanceToShore;
	private int fuelTankCapacity;
	
	private BoatDirection direction;
	private BoatState state;
	
	public BoatModel()
	{
		setSpeed(0);
		setDisanceToShore(0);
		setBoatDirection(BoatDirection.ORGIN);
		setBoatState(BoatState.OFF);
	}
	
	//public getter methods	
	public int getFuelTankCapacity() {return this.fuelTankCapacity;}
	public int getSpeed() {return this.speed;}
	public int getDistanceToShore() {return this.distanceToShore;};
	public BoatDirection getBoatDirection() {return this.direction;}
	public BoatState getBoatState() {return this.state;} 
	
	
	//public setter methods	
	public void setFuelTankCapacity(int fuelTankCapacity) {this.fuelTankCapacity=fuelTankCapacity;}
	public void setSpeed(int speed){this.speed=speed;}
	public void setDisanceToShore(int disatance) {this.distanceToShore=disatance;}
	public void setBoatDirection(BoatDirection direction) {this.direction=direction;}
	public void setBoatState(BoatState state) {this.state=state;}
	
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
			System.out.println("Airplane increasing altitude"); // Message
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
	public boolean changeDirection(BoatDirection direction)
	{
		boolean validAction = (state == BoatState.RUNNIG&&state!=BoatState.CAPSIZED);
		if (validAction) // Valid action
		{
			System.out.println("Boat chainging direction to :"+direction); // Message
			this.setBoatDirection(direction);
		}
		else // Error: Invalid action
		{
			System.out.println("Error: boat cannot change direction"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	public boolean refillFuel()
	{
		boolean validAction = (state == BoatState.OFF&&state==BoatState.CAPSIZED&&this.distanceToShore!=0);
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
}