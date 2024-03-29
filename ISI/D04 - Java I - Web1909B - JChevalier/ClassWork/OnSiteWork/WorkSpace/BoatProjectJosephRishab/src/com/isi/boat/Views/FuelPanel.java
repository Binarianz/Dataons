package com.isi.boat.Views;

import java.awt.Dimension;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JToggleButton;

import com.isi.boat.interfaces.IBoatController;

public class FuelPanel extends JPanel  {

	private JProgressBar fuelProgressBar;
	private IBoatController controller;
	public FuelPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.X_AXIS));
		fuelProgressBar =new JProgressBar(0,100);
		fuelProgressBar.setValue(100);
		this.add(fuelProgressBar);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	public void setController(IBoatController controller)
	{
		this.controller = controller;
	}
	public void updateFuelValue(int fuelValue)
	{
		fuelProgressBar.setValue(fuelValue);
	}
	public void updateProgressBar(int x)
	{
		fuelProgressBar.setValue(x);
	}
}
