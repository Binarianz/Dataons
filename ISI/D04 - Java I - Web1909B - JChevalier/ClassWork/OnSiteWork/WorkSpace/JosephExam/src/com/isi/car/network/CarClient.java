package com.isi.car.network;

import java.io.IOException;
import java.io.PrintWriter;
import java.net.Socket;

import com.isi.car.interfaces.ICarListener;
import com.isi.car.models.CarState;
import com.isi.car.models.GasLevelEvent;
import com.isi.car.models.GasLevelState;

public class CarClient implements ICarListener
{
	// Update listener methods
	// Implementation of ICarListener interface
	
	@Override
	public void updateGasLevel(GasLevelEvent event)
	{
		if(event.gasLevelState==GasLevelState.Empty||event.gasLevelState==GasLevelState.Full)
		{
			try (
				Socket socket=new Socket("localhost",7777);
					PrintWriter writer =new PrintWriter(socket.getOutputStream());
				)
			{
				//write message to server
				writer.println("test");
				writer.flush();
				
			} 
			catch (IOException e) {e.printStackTrace();}
		}
	}

	@Override
	public void updateCarState(CarState carState) { }	// Do nothing
}
