package com.isi.counter.views;
import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JPanel;

import com.isi.counter.controllers.CounterController;

public class ModeControllPanel extends JPanel {
	private static final long serialVersionUID = 1L;

	private CounterController controller;
	private JButton modeButton;
	
	public ModeControllPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		modeButton=new JButton("Advance");
		modeButton.setAlignmentX(0.5f);
		
		this.add(modeButton);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	public void setController(CounterController controller)
	{
		this.controller = controller;
		addListeners();
	}
	
	private void addListeners()
	{
		//modeButton.addActionListener((ActionEvent e) -> controller.showComppletewindow());
		}
}
