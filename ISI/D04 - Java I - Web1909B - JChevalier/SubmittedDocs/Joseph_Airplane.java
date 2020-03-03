package com.isi.airplane;

import java.util.Random; 
public class Airplane
{
	public enum AirplaneState{OFF,RUNNING,FLYING,EXPLODED}
	private boolean started;
	private boolean stoped;
    private boolean landed;
    private double altitude;
    private  int altiIncrease;
    public boolean getStarted()
    {
    	return this.started;
    }
    public boolean getStoped()
    {
    	return this.stoped;
    }
    public boolean getLanded()
    {
    	return this.landed;
    }
    public double getAltitude()
    {
    	return this.altitude;
    }
    public final int altiIncrease()
    {
    	return this.altiIncrease;
    }
    private void setAltitude(double altitude)
    {
    	System.out.println("Airplane increasing altitude : "+this.getAltitude());
    	this.altitude=altitude;
		System.out.println("Altitude current status : "+this.getAltitude());
    	
    }
    @Override
    public String toString() 
    {
    	return "stated :"+this.started+"stoped :"+this.stoped+"landed :"+this.landed+"altitude :"+this.altitude;
    }
    Airplane()
    {
    	this.started=false;
    	this.stoped=true;
    	this.landed=true;
    	this.setAltitude(0);
    }
	public boolean start()
	{
		if(this.landed &&this.stoped)//valid action
		{
		this.started=true;
		this.stoped=false;
		System.out.println("Airplane started");
		return true;
		}
		System.out.println("Error! Airplane not started becouse it is already started");
		return false;
	}
	
	public boolean stop()
	{
		if(this.landed==true&&this.started==true)
		{
		this.started=false;
		this.stoped=true;
		this.altitude=0;
		return true;
		}
		System.out.println("Error");
		return false;
	}
	
	public boolean takeOff()
	{
		if(this.landed==true&&this.started==true)
		{
			landed=false;
			System.out.println("Airplane taking off");
			increaseAltitude();
			return true;
			}
			System.out.println("Error! Airplane not taking off becouse it is already started");
			return false;
	}
	
	public boolean increaseAltitude()
	{
		Random r=new Random();
		altiIncrease=r.nextInt(1000);
		if(this.started==true&&this.landed==false)
		{
			if(this.getAltitude()>12000) {
				System.out.println("“Airplane exploded!”");
				System.exit(0);
				//return false;
			}
			else if(this.getAltitude()>=10000)
			{
				System.out.println("\n“Dangerous altitude!”");
				this.setAltitude(getAltitude()+this.altiIncrease);
				return false;
			}
			else if (this.getAltitude()<=0) {
				System.out.println("Airplane landed");
				return this.landed=true;
			}
			
			else {
				System.out.println("Airplane increasing altitude : "+this.getAltitude());
				this.setAltitude(getAltitude()+this.altiIncrease);
				System.out.println("Altitude current status : "+this.getAltitude());
				return true;
			}
		}
		System.out.println("Error");
		return false;
	}
	
	public boolean decreaseAltitude()
	{
		if(this.started==true&&this.landed==false)
		{
			this.stop();
			return false;
		}
		else if (this.getAltitude()<=0) {
			return this.landed=true;
		}
		else {
			System.out.println("Airplane decreasing altitude : "+this.getAltitude());
			this.setAltitude(getAltitude()-this.altiIncrease);
			System.out.println("Altitude current status : "+this.getAltitude());
			return true;
		}
	}
}
