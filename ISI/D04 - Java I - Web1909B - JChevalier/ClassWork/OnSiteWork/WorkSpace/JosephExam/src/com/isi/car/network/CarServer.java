package com.isi.car.network;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;
import java.text.DecimalFormat;
import java.util.Calendar;

public class CarServer
{
	private static final DecimalFormat timeFormat = new DecimalFormat("00");
	
	public static void main(String[] args)
	{
		try (ServerSocket serverSocket = new ServerSocket(7777))
		{
			while (true)
			{
				try
				{
					Socket clientSocket = serverSocket.accept();
					Thread clientThread = new Thread(() -> handleClient(clientSocket));
					clientThread.start();
				}
				catch (IOException e) { displayError(e); }
			}
		}
		catch (IOException e) { displayError(e); }
	}

	private static void handleClient(Socket clientSocket)
	{
		try
		{
			Calendar now = Calendar.getInstance();
			String date = now.get(Calendar.YEAR) + "-"
					+ timeFormat.format(now.get(Calendar.MONTH) + 1) + "-"
					+ timeFormat.format(now.get(Calendar.DATE));
			String time = (timeFormat.format(now.get(Calendar.HOUR_OF_DAY)) + ":" + timeFormat.format(now.get(Calendar.MINUTE)));
			
			BufferedReader in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));
			String message = in.readLine();

			System.out.println("Car server notification:");
			System.out.println(date + "  " + time);
			System.out.println(message);
			System.out.println();
		}
		catch (IOException e) { displayError(e); }
	}
	
	private static void displayError(Throwable e)
	{
		System.out.println("Car server error:  " + e.getMessage());
		System.out.println();
	}
}
