package com.isi.boat.Views;

import java.awt.Dimension;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JProgressBar;
import javax.swing.JTextField;


public class MessageAreaPanel extends JPanel {

	private static final long serialVersionUID = 1L;	
	private JTextField messageField;
	
	
	public MessageAreaPanel()
	{
		super();
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		messageField=new JTextField();
		this.add(messageField);
		
		messageField.setAlignmentX(0.5f);
		
	}
}
