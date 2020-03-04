package com.isi.boat.Models;

public class BoatModel {
	 public enum BoatDirection { UP, DOWN,ORGIN, LEFT, RIGHT;}
	 public enum BoatState { OFF, RUNNIG, REFILLING_FUEL, CAPSIZED }
	private int speed;
	private int distanceToShore;
	
	private BoatDirection direction;
	private BoatState state;
	
	public BoatModel()
	{
		speed=0;
		distanceToShore=0;
		state=BoatState.OFF;
		direction=BoatDirection.ORGIN;
	}
	
	//getter methods
	
	public int getSpeed() {return this.speed;}
	public int getDistanceToShore() {return this.distanceToShore;};
	private BoatDirection getBoatDirection() {return this.direction;}
	private BoatState getBoatState() {return this.state;} 
}
