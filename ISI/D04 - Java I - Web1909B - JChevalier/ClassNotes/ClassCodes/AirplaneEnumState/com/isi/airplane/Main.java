package com.isi.airplane;

public class Main
{
	public static void main(String[] args)
	{
		Airplane airplane = new Airplane();
		AirplaneController controller = new AirplaneController(airplane);
		controller.start();
	}
}
