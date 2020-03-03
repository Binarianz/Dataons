package com.isi.counter.views;
import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JSlider;

import com.isi.counter.controllers.CounterController;
public class AdvanceControlPanel extends JPanel{

	private static final long serialVersionUID = 1L;

	private CounterController controller;
	private JSlider velocitySlider;
	private JButton resetButton;
	public AdvanceControlPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		velocitySlider=new JSlider();
		velocitySlider.setAlignmentX(0.5f);
		resetButton=new JButton("Reset");
		resetButton.setAlignmentX(0.5f);
		
		this.add(velocitySlider);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(resetButton);
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
