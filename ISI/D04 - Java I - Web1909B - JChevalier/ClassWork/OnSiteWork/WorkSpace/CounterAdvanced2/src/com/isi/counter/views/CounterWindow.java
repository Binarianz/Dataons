package com.isi.counter.views;

import java.awt.Dimension;
import java.awt.event.ActionEvent;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.counter.interfaces.ICounterController;
import com.isi.counter.interfaces.ICounterListener;

public class CounterWindow extends JFrame implements ICounterListener
{
	private static final long serialVersionUID = 1L;

	private BasicViewPanel basicViewPanel;
	private BasicControlsPanel basicControlsPanel;
	private AdvancedViewPanel advancedViewPanel;
	private AdvancedControlsPanel advancedControlsPanel;
	
	private JButton advancedModeButton;
	
	private JPanel advancedComponentsPanel;
	private JPanel contentPane;
	
	private boolean advancedMode;

	public CounterWindow()
	{
		super("Counter");

		advancedMode = false;
		
		setupBasicComponents();
		setupAdvancedComponents();
		setupContentPane();
		addBasicComponentsToContentPane();
		
		this.setMinimumSize(new Dimension(275, this.getMinimumSize().height));		
		this.pack();
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(DISPOSE_ON_CLOSE);
	}
	
	private void setupBasicComponents()
	{
		basicViewPanel = new BasicViewPanel();
		basicControlsPanel = new BasicControlsPanel();
		
		advancedModeButton = new JButton();
		advancedModeButton.addActionListener((ActionEvent e) -> toggleAdvancedMode());
		updateAdvancedModeButton(advancedMode);
		
		basicViewPanel.setAlignmentX(0.5f);
		basicControlsPanel.setAlignmentX(0.5f);
		advancedModeButton.setAlignmentX(0.5f);
	}
	
	private void setupAdvancedComponents()
	{
		advancedViewPanel = new AdvancedViewPanel();
		advancedControlsPanel = new AdvancedControlsPanel();
		
		advancedComponentsPanel = new JPanel();
		advancedComponentsPanel.setLayout(new BoxLayout(advancedComponentsPanel, BoxLayout.Y_AXIS));
		
		advancedComponentsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		advancedComponentsPanel.add(advancedViewPanel);
		advancedComponentsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		advancedComponentsPanel.add(advancedControlsPanel);
		
		advancedViewPanel.setAlignmentX(0.5f);
		advancedControlsPanel.setAlignmentX(0.5f);
		advancedComponentsPanel.setAlignmentX(0.5f);
	}
	
	private void setupContentPane()
	{
		contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.Y_AXIS));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
	}

	public void setController(ICounterController controller)
	{
		basicControlsPanel.setController(controller);
		advancedControlsPanel.setController(controller);
	}
	
	private void toggleAdvancedMode()
	{
		setAdvancedMode(!advancedMode);
	}

	private void setAdvancedMode(boolean advancedMode)
	{
		if (this.advancedMode == advancedMode)
			return;

		this.advancedMode = advancedMode;
		
		if (advancedMode)
			addAdvancedComponentsToContentPane();
		else
			removeAdvancedPanelsFromContentPane();
		
		updateAdvancedModeButton(advancedMode);
	}
	
	private void updateAdvancedModeButton(boolean advancedMode)
	{
		// This shows the button's present functionality,
		// which is to activate the opposite of the present mode
		advancedModeButton.setText((advancedMode) ? "Basic mode" : "Advanced mode");
	}

	private void addBasicComponentsToContentPane()
	{
		contentPane.add(basicViewPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(basicControlsPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(advancedModeButton);
	}

	private void addAdvancedComponentsToContentPane()
	{
		contentPane.add(advancedComponentsPanel);
		this.pack();
	}

	private void removeAdvancedPanelsFromContentPane()
	{
		contentPane.remove(advancedComponentsPanel);
		this.pack();
	}
	
	@Override // ICounterListener
	public void updateCounterValue(int counterValue)
	{
		basicViewPanel.updateCounterValue(counterValue);
	}
	
	@Override // ICounterListener
	public void updateVelocity(int velocity)
	{
		advancedViewPanel.updateVelocity(velocity);
	}
}
