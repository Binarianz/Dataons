package com.isi.boat.Views;

import java.awt.Dimension;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.boat.Controllers.BoatController;
import com.isi.boat.interfaces.IBoatListener;
public class MasterPanel extends JFrame implements IBoatListener{
	private MessageAreaPanel messageAreaPanel;
	private StartStopPanel startStopPanel;
	private NavigationPanel navigationPanel;
	private FuelPanel fuelPanel;
	private SpeedRefuelPanel speedRefuelPanel;
	private BoatController controller;
	private JPanel contentPane;
	public MasterPanel()
	{
		super("Boat View");
		setupBasicComponents();
		setupContentPane();
		addBasicComponentsToContentPane();
		
		
		this.setMinimumSize(new Dimension(225, this.getMinimumSize().height));		
		this.pack();
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(DISPOSE_ON_CLOSE);
	}
	public void setupBasicComponents()
	{
		messageAreaPanel=new MessageAreaPanel();
		messageAreaPanel.setAlignmentX(0.5f);
		
		startStopPanel=new StartStopPanel();
		startStopPanel.setAlignmentX(0.5f);
		
		
		navigationPanel=new NavigationPanel();
		navigationPanel.setAlignmentX(0.5f);
		
		fuelPanel=new FuelPanel();
		fuelPanel.setAlignmentX(0.5f);
		
		speedRefuelPanel=new SpeedRefuelPanel();
		speedRefuelPanel.setAlignmentX(0.5f);
		
	}
	public void setupContentPane()
	{
		contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.Y_AXIS));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
	}
	public void  addBasicComponentsToContentPane()
	{
		contentPane.add(messageAreaPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		
		contentPane.add(startStopPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		
		contentPane.add(navigationPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		
		contentPane.add(fuelPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		
		contentPane.add(speedRefuelPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		
	}
	public void setcontroller(BoatController controller)
	{
		this.controller=controller;
		this.startStopPanel.setcontroller(controller);
		this.navigationPanel.setcontroller(controller);
		this.speedRefuelPanel.setController(controller);
		this.fuelPanel.setController(controller);
	}
	
	//message are updater
	public void updateProgressbar(int x)
	{
		fuelPanel.updateFuelValue(x);
	}
	public void updateMessageText(String message)
	{
		messageAreaPanel.updateMessageText(message);
	}
	@Override
	public void updateVelocity(int velocity) {
		//	
	}
	@Override
	public void updateFuelValue(int fuelValue) {
		
		fuelPanel.updateFuelValue(fuelValue);
		
	}
}
