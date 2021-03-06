package com.isi.serverclient;

import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;
import java.io.PrintWriter;
import java.net.*;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JTextField;

public class ClientApplication extends JFrame {
	
	JTextField clientTextField;
	JButton Send;
	
	public ClientApplication() {
		
		clientTextField = new JTextField();
		Send = new JButton("SEND");
		
		Send.addActionListener((ActionEvent e)->{

			sendMessage();
		});
		

		this.getContentPane().setLayout(new BoxLayout(this.getContentPane(), BoxLayout.X_AXIS));
		this.getContentPane().add(clientTextField);
		this.getContentPane().add(Box.createRigidArea(new Dimension(0,10)));
		this.getContentPane().add(Send);
		this.getContentPane().add(Box.createRigidArea(new Dimension(0,10)));
		this.pack();
	}
	
	
	
	public static void main(String[] args)
	{
		ClientApplication clientApplication=new ClientApplication();
		clientApplication.setVisible(true);
	}

	public void sendMessage()
	{
		try(
				Socket socket = new Socket("localhost",7777);
				PrintWriter writer = new PrintWriter(socket.getOutputStream())
		   )
		{
			String message=clientTextField.getText();
			writer.println(message);
			writer.flush();
		}
		catch (IOException e1) {
			e1.printStackTrace();
		}
	}
}
