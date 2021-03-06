package com.isi.boat.Views;
import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.boat.Controllers.BoatController;
public class NavigationPanel extends JPanel {

	private JButton upButton;
	private JButton downButton;
	private JButton leftButton;
	private JButton rightButton;
	private BoatController controller;
	private static final long serialVersionUID = 1L;
	public NavigationPanel()
	{
		upButton = new JButton("up");
		upButton.setAlignmentY(0.5f);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		
		downButton = new JButton("down");
		downButton.setAlignmentY(0.5f);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		
		leftButton = new JButton("left");
		leftButton.setAlignmentY(0.5f);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		
		rightButton = new JButton("right");
		rightButton.setAlignmentY(0.5f);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		
        addListeners();
        this.add(upButton);
        this.add(Box.createRigidArea(new Dimension(0, 10)));
        this.add(downButton);
        this.add(Box.createRigidArea(new Dimension(0, 10)));
        this.add(leftButton);
        this.add(Box.createRigidArea(new Dimension(0, 10)));
        this.add(rightButton);
        this.add(Box.createRigidArea(new Dimension(0, 10)));
	}
	public void setcontroller(BoatController controller)
	{
		this.controller=controller;
	}
	private void addListeners()
	{
		upButton.addActionListener((ActionEvent e) -> controller.changeDirection(0));
		downButton.addActionListener((ActionEvent e) -> controller.changeDirection(1));
		leftButton.addActionListener((ActionEvent e) -> controller.changeDirection(2));
		rightButton.addActionListener((ActionEvent e) -> controller.changeDirection(3));
	}
}
