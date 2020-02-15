package com.isi.counter.views;

import java.awt.Dimension;

import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JProgressBar;

public class BasicViewPanel extends JPanel
{
	private static final long serialVersionUID = 1L;
	
	private JLabel counterTitleLabel;
	private JLabel counterValueLabel;
	private JProgressBar counterProgressBar;
	
	private JPanel counterLabelsPanel;
	
	public BasicViewPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		
		counterTitleLabel = new JLabel("Counter");
		counterValueLabel = new JLabel("999");
		counterValueLabel.setFont(counterValueLabel.getFont().deriveFont(24f));
		counterProgressBar = new JProgressBar(-100, 100);
		
		counterLabelsPanel = new JPanel();
		counterLabelsPanel.setLayout(new BoxLayout(counterLabelsPanel, BoxLayout.Y_AXIS));
		counterLabelsPanel.add(counterTitleLabel);
		counterLabelsPanel.add(counterValueLabel);
		
		counterTitleLabel.setAlignmentX(0.5f);
		counterValueLabel.setAlignmentX(0.5f);
		
		counterProgressBar.setAlignmentX(0.5f);
		counterLabelsPanel.setAlignmentX(0.5f);

		this.add(counterLabelsPanel);
		this.add(Box.createRigidArea(new Dimension(0, 10)));
		this.add(counterProgressBar);
	}
	
	public void updateCounterValue(int counterValue)
	{
		counterValueLabel.setText(Integer.toString(counterValue));
		counterProgressBar.setValue(counterValue);
	}
}
