package com.isi.counter.views;

import java.awt.Dimension;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.BoxLayout;
import javax.swing.JFrame;
import javax.swing.JPanel;

import com.isi.counter.controllers.CounterController;

public class CounterWindow extends JFrame
{
	private static final long serialVersionUID = 1L;

	private BasicViewPanel basicViewPanel;
	private BasicControlsPanel basicControlsPanel;
	private ModeControllPanel modeControllPanel;
	private AdvanceViewPanel advanceViewPanel;
	private AdvanceControlPanel advanceControlPanel;

	private JPanel contentPane;

	public CounterWindow()
	{
		super("Counter");

		setupBasicComponents();
		setupContentPane();
		addBasicComponentsToContentPane();

		this.setMinimumSize(new Dimension(225, this.getMinimumSize().height));		
		this.pack();
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(DISPOSE_ON_CLOSE);
	}

	private void setupBasicComponents()
	{
		basicViewPanel = new BasicViewPanel();
		basicControlsPanel = new BasicControlsPanel();
		modeControllPanel=new ModeControllPanel();		
		advanceViewPanel=new AdvanceViewPanel();
		advanceControlPanel=new AdvanceControlPanel();
		basicViewPanel.setAlignmentX(0.5f);
		basicControlsPanel.setAlignmentX(0.5f);
		modeControllPanel.setAlignmentX(0.5f);
		advanceViewPanel.setAlignmentX(0.5f);
		advanceControlPanel.setAlignmentX(0.5f);
	}

	private void setupContentPane()
	{
		contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.Y_AXIS));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
	}

	public void setController(CounterController controller)
	{
		this.basicControlsPanel.setController(controller);
	}

	private void addBasicComponentsToContentPane()
	{
		contentPane.add(basicViewPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(basicControlsPanel);
		contentPane.add(modeControllPanel);

		contentPane.add(advanceViewPanel);
		contentPane.add(advanceControlPanel);
	}
	//	public void show() {
	//
	//		contentPane.add(advanceViewPanel);
	//		contentPane.add(advanceControlPanel);
	//	}


	public void updateCounterValue(int counterValue)
	{
		basicViewPanel.updateCounterValue(counterValue);
	}
}
