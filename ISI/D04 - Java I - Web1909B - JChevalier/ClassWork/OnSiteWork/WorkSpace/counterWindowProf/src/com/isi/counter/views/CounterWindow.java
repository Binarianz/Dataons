package com.isi.counter.views;

import java.awt.Dimension;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.counter.Controllers.CounterCountroller;

public class CounterWindow extends JFrame
{
	private static final long serialVersionUID = 1L;
	
	private CounterCountroller controller;
	
	private BasicViewPanel basicViewPanel;
	private BasicControlsPanel basicControlsPanel;
	
	private JPanel contentPane;
	
	public CounterWindow()
	{
		super("Counter");
		
		basicViewPanel = new BasicViewPanel();
		basicControlsPanel = new BasicControlsPanel();
		
		basicViewPanel.setAlignmentX(0.5f);
		basicControlsPanel.setAlignmentX(0.5f);
		
		contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.Y_AXIS));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
		
		addComponentsToContentPane();
		 
		this.pack();
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(DISPOSE_ON_CLOSE);
	}
	public void setcontroller(CounterCountroller controller)
	{
		this.controller=controller;
		this.basicControlsPanel.setcontroller(controller);
	}
	private void addComponentsToContentPane()
	{
		contentPane.add(basicViewPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(basicControlsPanel);
	}
	public void updateCounterValue(int counterValue)
	{
		basicViewPanel.updateCounterValue(counterValue);
	}
}
