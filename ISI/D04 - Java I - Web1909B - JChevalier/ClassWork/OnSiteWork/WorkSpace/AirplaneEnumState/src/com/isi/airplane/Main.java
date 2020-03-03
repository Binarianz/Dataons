package com.isi.airplane;

public class Main
{
	public static void main(String[] args)
	{
		Airplane airplane = new Airplane(1000,12000,10000);
		AirplaneController controller = new AirplaneController(airplane);
		controller.start();
	}
}
