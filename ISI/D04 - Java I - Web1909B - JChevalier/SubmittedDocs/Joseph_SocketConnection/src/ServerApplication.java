
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.net.ServerSocket;
import java.net.Socket;

public class ServerApplication {

	public static void main(String[] args)
	{
		try(ServerSocket serverSocket=new ServerSocket(7777))
		{
			while (true) {
			try {
				Socket socket=serverSocket.accept();
				new Thread(()->handleClient(socket)).start();
				} 
			catch (IOException e) {e.printStackTrace();}
			
			}
			
		} catch (IOException e) {e.printStackTrace();}
	}
	private static void handleClient(Socket socket) {
		
		try(BufferedReader reader=new BufferedReader
				(new InputStreamReader(socket.getInputStream())))
		{
			
			String messString=reader.readLine();
			System.out.println("Message recived from the client");
			System.out.println(messString);
			//read message from client
			
		} 
		catch (IOException e) {e.printStackTrace();}
	}
}
 