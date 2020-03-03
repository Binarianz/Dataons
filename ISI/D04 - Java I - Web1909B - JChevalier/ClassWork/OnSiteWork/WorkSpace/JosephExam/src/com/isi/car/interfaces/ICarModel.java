package com.isi.car.interfaces;

import com.isi.car.models.CarState;
import com.isi.car.models.GasLevelState;

public interface ICarModel
{
	// Getter methods
	double getGasLevel();
	double getGasCapacity();
	GasLevelState getGasLevelState();
	CarState getCarState();
	
	// User action methods
	void startDriving();
	void stopDriving();
	void startFillingGas();
	void stopFillingGas();
}
