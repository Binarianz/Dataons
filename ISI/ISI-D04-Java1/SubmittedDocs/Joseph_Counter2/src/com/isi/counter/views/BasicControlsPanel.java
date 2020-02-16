package com.isi.counter.views;

import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JPanel;

import com.isi.counter.controllers.CounterController;

public class BasicControlsPanel extends JPanel
{
	private static final long serialVersionUID = 1L;
	
	private CounterController controller;
	
	private JButton incrementButton;
	private JButton decrementButton;
	private JButton randomButton;
	
	public BasicControlsPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		
		incrementButton = new JButton("Increment");
		decrementButton = new JButton("Decrement");
		randomButton = new JButton("Random");
		
		incrementButton.setAlignmentX(0.5f);
		decrementButton.setAlignmentX(0.5f);
		randomButton.setAlignmentX(0.5f);
		
		this.add(incrementButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(decrementButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(randomButton);
	}
	
	public void setController(CounterController controller)
	{
		this.controller = controller;
		addListeners();
	}
	
	private void addListeners()
	{
		incrementButton.addActionListener((ActionEvent e) -> controller.increment());
		decrementButton.addActionListener((ActionEvent e) -> controller.decrement());
		randomButton.addActionListener((ActionEvent e) -> controller.random());
	}
}