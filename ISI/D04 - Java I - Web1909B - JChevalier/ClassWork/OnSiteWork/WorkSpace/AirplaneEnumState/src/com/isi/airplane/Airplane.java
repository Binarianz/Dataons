package com.isi.airplane;

public class Airplane
{
	// Enum type definition
		public enum AirplaneState { OFF, RUNNING, FLYING, EXPLODED,LANDING_MODE }
	private static int airplaneIdGenerator=0;
	// Instance constants
	private double ALTITUDE_CHANGE ;
	private double EXPLOSION_ALTITUDE;
	private double DANGER_ALTITUDE;
	private double LANDING_ALTITUDE;

	
	// Instance variables
	private double altitude ;
	private AirplaneState state;
	private int planeId;
	Airplane(double a,double b,double c)
	{
		airplaneIdGenerator++;
		this.planeId=airplaneIdGenerator;
		this.ALTITUDE_CHANGE=a;
		this.EXPLOSION_ALTITUDE=b;
		this.DANGER_ALTITUDE=c;
		this.LANDING_ALTITUDE=0;
		altitude = 0;
		state = AirplaneState.OFF;
	}
	
	
	// Private setter method
	private void setAltitude(double altitude)
	{
	if (altitude < LANDING_ALTITUDE)
	altitude = LANDING_ALTITUDE;

	this.altitude = altitude;

	if (altitude >= EXPLOSION_ALTITUDE || (this.altitude == 0 && this.state != AirplaneState.LANDING_MODE))
	explode();
	else if (altitude >= DANGER_ALTITUDE)
	danger();
	else if (altitude <= LANDING_ALTITUDE)
	land();

	System.out.println("You are currently at " + this.altitude + " altitude");
	}
	// Private action method

	private void explode()
	{
		System.out.println("Airplane exploding"); // Message
		state = AirplaneState.EXPLODED; // Apply the action
	}

	private void danger()
	{
		System.out.println("Airplane is in danger zone");
	}
	
	// Private action method
	private void land()
	{
		System.out.println("Airplane landing"); // Message
		state = AirplaneState.RUNNING; // Apply the action
	}
	
	
	// Public action methods
	
	public boolean enterLandingMode() 
	{
		boolean validAction = (state == AirplaneState.FLYING);
		if (validAction) 
		{
			System.out.println("Entering to Landing mode ");
			this.altitude=0;
			state=AirplaneState.LANDING_MODE;
			System.out.println("Airplane is Landed");
			System.out.println("Airplane altitude = " + altitude);
		}
		else
		{
			System.out.println("Error: Airplane cannot go to landing mode");
		}
		return true;
	}
	public boolean start()
	{
		boolean validAction = (state == AirplaneState.OFF||state==AirplaneState.LANDING_MODE);
		if (validAction) // Valid action
		{
			System.out.println("Airplane starting"); // Message
			state = AirplaneState.RUNNING; // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot start"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	
	public boolean stop()
	{
		boolean validAction = (state == AirplaneState.RUNNING);
		if (validAction) // Valid action
		{
			System.out.println("Airplane stopping"); // Message
			state = AirplaneState.OFF; // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot stop"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	
	public boolean takeOff()
	{
		boolean validAction = (state == AirplaneState.RUNNING);
		if (validAction) // Valid action
		{
			System.out.println("Airplane taking off"); // Message
			state = AirplaneState.FLYING; // Apply the action
			increaseAltitude();
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot take off"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	
	public boolean increaseAltitude()
	{
		boolean validAction = (state == AirplaneState.FLYING);
		if (validAction) // Valid action
		{
			System.out.println("Airplane increasing altitude"); // Message
			setAltitude(altitude + ALTITUDE_CHANGE); // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot increase altitude"); // Error message
		}
		return validAction; // Return Boolean error code
	}
	
	public boolean decreaseAltitude()
	{
		boolean validAction = (state == AirplaneState.FLYING ||state==AirplaneState.LANDING_MODE);
		if (validAction) // Valid action
		{
			System.out.println("Airplane decreasing altitude"); // Message
			setAltitude(altitude - ALTITUDE_CHANGE); // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane Exploded!!!"); // Error message
		}
		return validAction; // Return Boolean error code
	}
}
