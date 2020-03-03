package com.isi.counter.views;
import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;

import com.isi.counter.controllers.CounterController;
public class AdvanceViewPanel extends JPanel {
	private static final long serialVersionUID = 1L;

	private CounterController controller;
	private JLabel velocityLabel;
	private JLabel velocityCounter;
	
	public AdvanceViewPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		velocityLabel=new JLabel("Velocity");
		velocityLabel.setAlignmentX(0.5f);
		velocityCounter=new JLabel("0");
		velocityCounter.setAlignmentX(0.5f);
		
		this.add(velocityLabel);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(velocityCounter);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	public void setController(CounterController controller)
	{
		this.controller = controller;
		addListeners();
	}
	
	private void addListeners()
	{
		//modeButton.addActionListener((ActionEvent e) -> controller.showComppletewindow());	}
}
}