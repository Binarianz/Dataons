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
			"Start",
			"Stop",
			"Take off",
			"Increase altitude",
			"Decrease altitude",
			"Enter landing mode",
			"Repair",
			"Exit"
		};
		
		while (true)
		{
			displayMenu(options);
			
			int selection = getUserSelection(options.length);
			System.out.println();
			
			executeUserAction(selection);
			System.out.println();
		}
	}
	
	private void displayMenu(String[] options)
	{
		System.out.println("----------------");
		System.out.println("Airplane menu");
		System.out.println();
		for (int i = 0; i < options.length; i++)
			System.out.println("    " + (i + 1) + " - " + options[i]);
		System.out.println();
	}
	
	private int getUserSelection(int optionsCount)
	{
		return ConsoleInput.getInt("Select action:", 1, optionsCount);
	}
	
	private void executeUserAction(int selection)
	{
		try {
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
				airplane.beginLanding();
				break;
			case 7:
				airplane.repair();
				break;
			case 8:
				exitApplication();
				break;
			}
			
		} catch (RuntimeException e) {
			System.out.println(e.getMessage());
		}
	}
	
	private void exitApplication()
	{
		System.out.println("Exiting application");
		System.exit(0);
	}
}
