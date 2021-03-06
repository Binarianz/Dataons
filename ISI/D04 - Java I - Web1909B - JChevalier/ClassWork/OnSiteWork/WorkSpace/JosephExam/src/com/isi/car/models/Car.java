package com.isi.car.models;

import java.util.ArrayList;

import com.isi.car.interfaces.ICarListener;
import com.isi.car.interfaces.ICarModel;

public class Car implements ICarModel, Runnable
{	
	// Static constants

	public static final double MINIMUM_CAPACITY = 35;
	public static final double MAXIMUM_CAPACITY = 95;
	public static final double DRIVING_DELTA = -2.3d;
	public static final double FILLING_DELTA = 3.6d;


	// Instance variables

	private double gasLevel;
	private double gasCapacity;
	private GasLevelState gasLevelState;
	private CarState carState;
	
	private boolean changing;
	
	private ArrayList<ICarListener> listenersList;

	
	// Getter methods
	// Implementation of ICarModel interface

	@Override
	public double getGasLevel() { return this.gasLevel; }					// TODO
	@Override
	public double getGasCapacity() { return this.gasCapacity; }				// TODO
	@Override
	public GasLevelState getGasLevelState() { return this.gasLevelState; }	// TODO
	@Override
	public CarState getCarState() {  return this.carState; }				// TODO


	// Constructor

	public Car(double gasCapacity)//throws CapacityException
	{
		/*
		 * if(gasCapacity>MAXIMUM_CAPACITY) throw new CapacityException(gasCapacity,
		 * MINIMUM_CAPACITY, MAXIMUM_CAPACITY);
		 */
		this.gasCapacity=gasCapacity;
		this.gasLevel=0;
		this.gasLevelState=GasLevelState.Empty;
		this.carState=CarState.Stopped;
		this.changing = false;
		listenersList = new ArrayList<ICarListener>();
	}


	// Public methods for adding/removing listeners
	
	public void addCarListener(ICarListener listener)
	{
		listenersList.add(listener);
	}

	public void removeCarListener(ICarListener listener)
	{
		 listenersList.remove(listener);
	}

	
	// Private setter methods for gas level and car state

	private synchronized void setGasLevel(double gasLevel)
	{
		//GasLevelEvent event =new GasLevelEvent(this);
		if(gasLevel<=0)
		{
			this.gasLevel=0;
			this.gasLevelState=GasLevelState.Empty;
			
			
		}
		else if (gasLevel>=gasCapacity) 
		{
			this.gasLevel=gasCapacity;
			this.gasLevelState=GasLevelState.Full;
		}
		else
		{
			this.gasLevel=gasLevel;
			this.gasLevelState=GasLevelState.Partial;
		}
		for (ICarListener listener :listenersList)
			listener.updateGasLevel(new GasLevelEvent(this));
		if (getGasLevelState()==GasLevelState.Empty)
		{
			this.stopDriving();
		}
		else if (getGasLevelState()==GasLevelState.Full) {
			this.stopFillingGas();
		}
	}

	private synchronized void setCarState(CarState carState)
	{
		if(getCarState()==CarState.Filling)
			this.carState=CarState.Stopped;
		else if(getCarState()==CarState.Driving)
			this.carState=CarState.Stopped;
		else {
			this.carState=carState;
		}
//		if (getCarState()!=carState) 
//			this.carState=carState;
		for (ICarListener listener :listenersList)
			listener.updateCarState(carState);
		if (!changing)
			new Thread(() -> run()).start();
		//setGasLevel(20);
	}
	
	
	// User action methods
	// Implementation of ICarModel interface

	@Override
	public void startDriving()
	{
		setCarState(CarState.Driving);
	}

	@Override
	public void stopDriving()
	{
		setCarState(CarState.Stopped);
	}

	@Override
	public void startFillingGas()
	{
		setCarState(CarState.Filling);
	}

	@Override
	public void stopFillingGas()
	{
		setCarState(CarState.Stopped);
	}
	
	@Override
	public void run()
	{
		changing = true;
		while(getCarState()==CarState.Driving||getCarState()==CarState.Filling)
		{
			if(getCarState()==CarState.Driving)
			{
				setGasLevel(0);
			}
			else if (getCarState()==CarState.Filling) 
			{
				setGasLevel(this.gasCapacity);
				
			}
			else
			{
				try
				{
					Thread.sleep(1000);
				}
				catch (InterruptedException e) {}
			}
		}
		changing = false;
	}
}
