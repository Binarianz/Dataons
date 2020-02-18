package com.isi.counter.interfaces;

import com.isi.counter.models.Counter.CounterState;

public interface ICounterListener
{
	void updateCounterValue(int counterValue,CounterState state);
	void updateVelocity(int velocity);
}
