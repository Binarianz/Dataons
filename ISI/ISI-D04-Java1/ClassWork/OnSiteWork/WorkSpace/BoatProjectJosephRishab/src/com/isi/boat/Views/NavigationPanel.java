package com.isi.boat.Views;
import java.awt.Dimension;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.JToggleButton;
public class NavigationPanel extends JPanel {

	private JToggleButton[] buttons;
	private static final long serialVersionUID = 1L;
	public NavigationPanel()
	{
		buttons = new JToggleButton[4];
        buttons[0] = new JToggleButton("up");
        buttons[1] = new JToggleButton("down");
        buttons[2] = new JToggleButton("left");
        buttons[3] = new JToggleButton("right");
        
        this.add(buttons[0]);
        this.add(buttons[1]);
        this.add(buttons[2]);
        this.add(buttons[3]);
        

	}
}
