package com.isi.airplane;

import com.isi.utility.ConsoleInput;

public class AirplaneController
{
	private Airplane airplane;
	
	public AirplaneController(Airplane airplane)
	{
		this.airplane = airplane;
	}
	
	public void start()
	{
		String[] options =
		{
			"1 - Start",
			"2 - Stop",
			"3 - Take off",
			"4 - Increase altitude",
			"5 - Decrease altitude",
			"6 - Exit"
		};
		
		while (true)
		{
			displayMenu(options);
			int selection = ConsoleInput.getInt("Select action:", 1, options.length);
			System.out.println();
			
			switch (selection)
			{
			case 1:
				airplane.start();
				break;
			case 2:
				airplane.stop();
				break;
			case 3:
				airplane.takeOff();
				break;
			case 4:
				airplane.increaseAltitude();
				break;
			case 5:
				airplane.decreaseAltitude();
				break;
			case 6:
				System.out.println("Exiting application");
				System.exit(0);
				break;
			}
			
			System.out.println();
		}
	}
	
	private void displayMenu(String[] options)
	{
		String separator = "----------------";
		System.out.println(separator);
		System.out.println("Airplane menu");
		System.out.println();
		for (int i = 0; i < options.length; i++)
		{
			System.out.print("    ");
			System.out.println(options[i]);
		}
		System.out.println();
	}
}
