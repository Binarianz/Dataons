package com.isi.airplane;

public class Airplane
{
	// Enum type definition
	public enum AirplaneState { OFF, RUNNING, FLYING, EXPLODED }
	
	// Instance constants
	private final double ALTITUDE_CHANGE = 1000;
	private final double EXPLOSION_ALTITUDE = 12000;
	private final double DANGER_ALTITUDE = 10000;
	private final double LANDING_ALTITUDE = 0;

	
	// Instance variables
	private double altitude = 0;
	private AirplaneState state = AirplaneState.OFF;
	
	// Private setter method
	private void setAltitude(double altitude)
	{
		if (altitude < LANDING_ALTITUDE)
			altitude = LANDING_ALTITUDE;
		
		this.altitude = altitude;
		
		if (altitude >= EXPLOSION_ALTITUDE)
			explode();
		else if (altitude >= DANGER_ALTITUDE)
			danger();
		else if (altitude <= LANDING_ALTITUDE)
			land();
		
		System.out.println("Airplane altitude = " + altitude);
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
	
	public boolean start()
	{
		boolean validAction = (state == AirplaneState.OFF);
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
		boolean validAction = (state == AirplaneState.FLYING);
		if (validAction) // Valid action
		{
			System.out.println("Airplane decreasing altitude"); // Message
			setAltitude(altitude - ALTITUDE_CHANGE); // Apply the action
		}
		else // Error: Invalid action
		{
			System.out.println("Error: Airplane cannot decrease altitude"); // Error message
		}
		return validAction; // Return Boolean error code
	}
}
