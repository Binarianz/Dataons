package com.isi.counter.views;

import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JPanel;
import javax.swing.JSlider;
import javax.swing.event.ChangeEvent;

import com.isi.counter.interfaces.ICounterController;

public class AdvancedControlsPanel extends JPanel
{
	private static final long serialVersionUID = 1L;
	
	private ICounterController controller;
	
	private JSlider counterVelocitySlider;
	private JButton stopButton;
	
	public AdvancedControlsPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		
		counterVelocitySlider = new JSlider(-10, 10);
		stopButton = new JButton("Stop");
		
		counterVelocitySlider.setAlignmentX(0.5f);
		stopButton.setAlignmentX(0.5f);
		
		this.add(counterVelocitySlider);
		this.add(Box.createRigidArea(new Dimension(0, 20)));
		this.add(stopButton);
	}
	
	public void setController(ICounterController controller)
	{
		this.controller = controller;
		addListeners();
	}
	public void upadateVelocity(int velocity)
	{
		counterVelocitySlider.setValue(velocity);
	}
	private void addListeners()
	{
		counterVelocitySlider.addChangeListener((ChangeEvent e) ->
		{
			controller.setVelocity(counterVelocitySlider.getValue());
		});
		
		stopButton.addActionListener((ActionEvent e) -> 
		{
			controller.setVelocity(0);
			counterVelocitySlider.setValue(0);
			counterVelocitySlider.setValueIsAdjusting(false);
		});
	}
}
