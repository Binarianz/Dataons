package com.isi.boat.Views;
import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.boat.Controllers.BoatController;
public class StartStopPanel extends JPanel {
	
private static final long serialVersionUID = 1L;
	
	private BoatController controller;
	
	private JButton startButton;
	private JButton stopButton;
	public StartStopPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.X_AXIS));
		
		startButton = new JButton("Start");
		stopButton = new JButton("Stop");
		startButton.setAlignmentY(0.5f);
		stopButton.setAlignmentY(0.5f);
		addListeners();
		this.add(startButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(stopButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	public void setcontroller(BoatController controller)
	{
		this.controller=controller;
	}
	private void addListeners()
	{
		startButton.addActionListener((ActionEvent e) -> controller.start());
		stopButton.addActionListener((ActionEvent e) -> controller.stop());
	}
}
