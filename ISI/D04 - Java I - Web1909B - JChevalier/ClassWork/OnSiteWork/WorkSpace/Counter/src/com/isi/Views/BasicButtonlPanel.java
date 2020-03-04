package com.isi.Views;

import java.awt.Dimension;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JPanel;

public class BasicButtonlPanel extends JPanel{
	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	private JButton inButton;
	private JButton deButton;
	private JButton ranButton;
	public BasicButtonlPanel()
	{
		super();	
		inButton=new JButton("Increase");
		inButton.setAlignmentX(0.5f);
		deButton=new JButton("Decrease");
		deButton.setAlignmentX(0.5f);
		ranButton=new JButton("Random");
		ranButton.setAlignmentX(0.5f);
		this.add(inButton);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		this.add(deButton);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		this.add(ranButton);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
	}

}
