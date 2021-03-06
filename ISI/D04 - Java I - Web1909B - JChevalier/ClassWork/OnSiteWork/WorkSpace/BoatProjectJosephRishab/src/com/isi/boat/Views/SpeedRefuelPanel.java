package com.isi.boat.Views;


import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JSlider;
import javax.swing.event.ChangeEvent;


import com.isi.boat.interfaces.IBoatController;

public class SpeedRefuelPanel extends JPanel{

	private JSlider speedSlider;
	private JButton refuelButton;
	private IBoatController controller;
	public SpeedRefuelPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.X_AXIS));
		speedSlider=new JSlider(0,100);
		refuelButton = new JButton("Refuel");
		this.add(speedSlider);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(refuelButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	
	
	public void setController(IBoatController controller)
	{
		this.controller = controller;
		addListeners();
	}
	public void updateFuelValue(int fuelValue)
	{
		controller.updateFuelValue(fuelValue);
	}
	
	private void addListeners()
	{
		speedSlider.addChangeListener((ChangeEvent e) ->
		{
			controller.setVelocity(speedSlider.getValue());
		});
		refuelButton.addActionListener((ActionEvent e) -> 
		{
			//controller.updateFuelValue(80);
			controller.updateFuelValue(100);
			speedSlider.setValue(0);
		});
		
	}
}
