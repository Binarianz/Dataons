package com.isi.Views;

import javax.swing.JFrame;
import javax.swing.JPanel;
import java.awt.Dimension;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import javax.swing.JTextField;
public class MasterPanel extends JFrame{

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;
	public BasicViewPanel v;
	public BasicButtonlPanel b;
	public JPanel contentPanel;
	public MasterPanel() {
		addPanelsToContentPane();
		this.pack();
		this.setLocationRelativeTo(null);
		setDefaultCloseOperation(EXIT_ON_CLOSE);

	}
	private void addPanelsToContentPane()
	{
		v=new BasicViewPanel();
		b=new BasicButtonlPanel();
		contentPanel = (JPanel) this.getContentPane();
		contentPanel.setLayout(new BoxLayout(contentPanel, BoxLayout.Y_AXIS));
		contentPanel.setBorder(BorderFactory.createEmptyBorder(50,50,50,50));
		contentPanel.setAlignmentX(0.5f);
		contentPanel.setAlignmentX(JScrollPane.CENTER_ALIGNMENT);


		contentPanel.add(v);
		contentPanel.add(b);
	}

}
