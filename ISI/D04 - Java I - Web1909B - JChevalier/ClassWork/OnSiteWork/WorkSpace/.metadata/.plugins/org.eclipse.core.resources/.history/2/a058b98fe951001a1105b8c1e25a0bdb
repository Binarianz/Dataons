import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.io.Reader;
import java.net.Socket;
import java.util.Scanner;

public class ClientApplication2 {
public static void main(String[] args) 
{
	String message="";
	Scanner scanner = new Scanner(System.in);
	try (
			Socket socket=new Socket("localhost",7777);
			PrintWriter writer =new PrintWriter(socket.getOutputStream());
		)
	{
		
		System.out.println("Enter the message");
		message=scanner.nextLine();
		//write message to server
		writer.println(message);
		writer.flush();
		
	} 
	catch (IOException e) {e.printStackTrace();}
}
}
