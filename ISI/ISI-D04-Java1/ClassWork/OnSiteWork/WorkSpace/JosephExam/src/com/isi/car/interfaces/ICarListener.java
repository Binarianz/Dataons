package com.isi.car.interfaces;

import com.isi.car.models.CarState;
import com.isi.car.models.GasLevelEvent;

public interface ICarListener
{
	void updateGasLevel(GasLevelEvent event);
	void updateCarState(CarState carState);
}
