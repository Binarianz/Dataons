package com.isi.boat.interfaces;

import com.isi.boat.Models.BoatModel.BoatDirection;

public interface IBoatModel {

	boolean boatStart();
	boolean boatStop();
	boolean increaseSpeed();
	boolean decreaseSpeed();
	boolean changeDirection(BoatDirection direction);
	boolean refillFuel();
	void setVelocity(int velocity);
}
