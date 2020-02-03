package com.isi.airplane;

import java.io.IOException;

public class Main
{
	public static void main(String[] args) throws IOException
	{
		Airplane airplane = new Airplane();
		AirplaneController controller = new AirplaneController(airplane);
		controller.start();
	}
}
