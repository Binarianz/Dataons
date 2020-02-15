package com.isi.airplane;

public class Airplane
{
	// Enum type definition
	public enum AirplaneState { OFF, RUNNING, FLYING, LANDING, EXPLODED }
	
	// Static variable
	private static int airplanesCreated = 0;
	
	// Instance constants
	private final double ALTITUDE_CHANGE;
	private final double EXPLOSION_ALTITUDE;
	private final double DANGER_ALTITUDE;
	private final double LANDING_ALTITUDE = 0;

	
	// Instance variables
	private final int id;
	private double altitude;
	private AirplaneState state;
	
	
	public Airplane(double explosionAltitude)
	{
		airplanesCreated++;
		
		this.id = airplanesCreated;
		this.altitude = 0;
		this.state = AirplaneState.OFF;
		
		this.ALTITUDE_CHANGE = 1000;
		this.EXPLOSION_ALTITUDE = explosionAltitude;
		this.DANGER_ALTITUDE = EXPLOSION_ALTITUDE - 2000;
	}
	
	
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
		{
			if (state == AirplaneState.LANDING)
				land();
			else if (state == AirplaneState.FLYING)
				explode();
		}
		
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
		boolean validAction = (state == AirplaneState.LANDING);
		if (validAction)
		{
			System.out.println("Airplane landing"); // Message
			state = AirplaneState.RUNNING; // Apply the action
		}
	}
	/*public void startException() {
		boolean validAction = (state == AirplaneState.OFF);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot start");
			System.out.println("Airplane starting"); // Message
			state = AirplaneState.RUNNING; // Apply the action
		
	}*/
	
	// Public action methods
	
	public void start() throws RuntimeException
	{

		boolean validAction = (state == AirplaneState.OFF);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot start");
			System.out.println("Airplane starting"); // Message
			state = AirplaneState.RUNNING; // Apply the action
	}
	
	public void stop()throws RuntimeException
	{

		boolean validAction = (state == AirplaneState.RUNNING);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot stop");
		System.out.println("Airplane stopping"); // Message
		state = AirplaneState.OFF; // Apply the action
		
	}
	
	public void takeOff()throws RuntimeException
	{
		boolean validAction = (state == AirplaneState.RUNNING);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot take off");
			System.out.println("Airplane taking off"); // Message
			state = AirplaneState.FLYING; // Apply the action
	}
	
	public void increaseAltitude()throws RuntimeException
	{
		boolean validAction = (state == AirplaneState.FLYING);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot increase altitude");
			System.out.println("Airplane increasing altitude"); // Message
			setAltitude(altitude + ALTITUDE_CHANGE); // Apply the action
	}
	
	public void decreaseAltitude()throws RuntimeException
	{
		boolean validAction = (state == AirplaneState.FLYING || state == AirplaneState.LANDING);
		if (!validAction) // Valid action
			throw new RuntimeException("Error: Airplane cannot decrease altitude");
			System.out.println("Airplane decreasing altitude"); // Message
			setAltitude(altitude - ALTITUDE_CHANGE); // Apply the action
	}
	
	public void beginLanding()throws RuntimeException
	{
		boolean validAction = (state == AirplaneState.FLYING);
		if (!validAction)
			throw new RuntimeException("Error: Airplane cannot enter landing mode");
			System.out.println("Airplane entering landing mode"); // Message
			state = AirplaneState.LANDING;
	}
	
	public void repair()throws RuntimeException
	{
		boolean validAction = (state == AirplaneState.EXPLODED);
		if (!validAction)
			throw new RuntimeException("Error: Airplane cannot be repaired");
			System.out.println("Repairing airplane"); // Message
			state = AirplaneState.OFF;
			altitude = 0;
	}
}
