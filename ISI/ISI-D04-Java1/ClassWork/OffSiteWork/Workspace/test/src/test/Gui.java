package test;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;

public class Gui extends JFrame implements ActionListener {
JButton button=null;
	private java1 java;
	public Gui(String title) {
		setLayout(null);
		setSize(300, 600);
		setVisible(true);
		setTitle(title);		
		java=new java1();
		 button =new JButton();
		button.setBounds(50, 100, 200, 300);
		button.setText("Jaya");
		button.addActionListener(this);
		button.setActionCommand("Press");
		add(button);
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		// TODO Auto-generated method stub
		switch(e.getActionCommand()){
		case "Press":
			button.setText("krishnan");
			break;
		}
	}
}
