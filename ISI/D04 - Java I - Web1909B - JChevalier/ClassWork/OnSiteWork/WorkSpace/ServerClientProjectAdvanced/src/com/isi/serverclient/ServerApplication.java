package com.isi.serverclient;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.*;
public class ServerApplication {
	
	public static void main(String [] args)
	{
		try(ServerSocket serverSocket=new ServerSocket(7777))
		{
			while(true)
			{
				try {
					Socket socket = serverSocket.accept();
					new Thread(() -> handleClient(socket)).start();
					//handleClient(socket);
				}
				catch (IOException e) {
					e.printStackTrace();

				}
			}
			
		}
		catch (IOException e) {
			e.printStackTrace();
		}
	}
	
	private static void handleClient(Socket socket)
	{
		try(BufferedReader reader =  new BufferedReader(new InputStreamReader(socket.getInputStream())))
		{
			while (true)
			{
				while (!reader.ready()) {}
				while (reader.ready())
				{
					String message = reader.readLine();
					System.out.println("Server received message from the client:");
					System.out.println(message);
				}
			}
		}
		
		catch (Exception e) {
			// TODO: handle exception
		}
	}

}
