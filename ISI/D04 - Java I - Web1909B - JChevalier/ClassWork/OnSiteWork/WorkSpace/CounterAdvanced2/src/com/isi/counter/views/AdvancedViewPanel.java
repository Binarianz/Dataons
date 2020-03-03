package com.isi.counter.views;

import javax.swing.BoxLayout;
import javax.swing.JLabel;
import javax.swing.JPanel;

public class AdvancedViewPanel extends JPanel
{
	private static final long serialVersionUID = 1L;
	
	private JLabel velocityTitleLabel;
	private JLabel velocityValueLabel;
	
	public AdvancedViewPanel()
	{
		super();
		
		this.setLayout(new BoxLayout(this, BoxLayout.Y_AXIS));
		
		velocityTitleLabel = new JLabel("Velocity");
		velocityValueLabel = new JLabel("0");
		velocityValueLabel.setFont(velocityValueLabel.getFont().deriveFont(24f));
		
		velocityTitleLabel.setAlignmentX(0.5f);
		velocityValueLabel.setAlignmentX(0.5f);
		
		this.add(velocityTitleLabel);
		this.add(velocityValueLabel);
	}
	
	public void updateVelocity(int velocity)
	{
		velocityValueLabel.setText(Integer.toString(velocity));
	}
}
