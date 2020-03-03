package com.isi.car.models;

public enum CarState
{
	Stopped, Driving, Filling;
	
	
	// Convenience methods: Get driving/filling state
	
	public boolean isDriving()
	{
		return this == CarState.Driving;
	}
	
	public boolean isFilling()
	{
		return this == CarState.Filling;
	}
	
	public String getDrivingState()
	{
		if (isDriving())
			return "Driving";
		else
			return "Stopped";
	}
	
	public String getFillingState()
	{
		if (isFilling())
			return "Filling";
		else 
			return "Not filling";
	}
}
