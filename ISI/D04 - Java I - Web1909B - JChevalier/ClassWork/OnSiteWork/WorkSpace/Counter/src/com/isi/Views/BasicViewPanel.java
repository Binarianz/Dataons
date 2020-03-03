package com.isi.Views;

import java.awt.Dimension;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JProgressBar;

public class BasicViewPanel extends JPanel
{
	private static final long serialVersionUID = 1L;
	//super();
	private JLabel labelCounter;
	private JLabel labelDigit;
	private JProgressBar pBar;
	public BasicViewPanel()
	{
		super();
		labelCounter=new JLabel("Counter");
		labelCounter.setAlignmentX(0.5f);
		labelDigit=new JLabel("0");
		labelDigit.setFont(labelDigit.getFont().deriveFont(55f));
		labelDigit.setAlignmentX(0.5f);
		pBar=new JProgressBar();
		pBar.setAlignmentX(0.5f);
		this.add(labelCounter);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		this.add(labelDigit);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		this.add(pBar);
		this.add(Box.createRigidArea(new Dimension(0,20)));
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		//pBar.setPreferredSize( new Dimension (50, 50));
	}
	

}
