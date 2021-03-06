package com.isi.car.views;

import java.awt.Dimension;
import java.awt.Event;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.text.DecimalFormat;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JProgressBar;

import com.isi.car.interfaces.ICarListener;
import com.isi.car.models.CapacityException;
import com.isi.car.models.Car;
import com.isi.car.models.CarState;
import com.isi.car.models.GasLevelEvent;

public class CarManagerWindow extends JFrame implements ICarListener 
{
	private static final long serialVersionUID = 1L;
	
	private JLabel drivingStateLabel;
	private JLabel fillingStateLabel;
	private JLabel gasLevelLabel;
	private JProgressBar gasLevelProgressBar;

	private JButton driveCarButton;
	private JButton stopCarButton;
	private JButton startFillingButton;
	private JButton stopFillingButton;
	private JButton newCarButton;
	private JButton exitButton;
	Car car=new Car(0);
	/*
	 * try { Car car = new Car(0); } catch (CapacityException e) {
	 * JOptionPane.showMessageDialog(this,"Invalid number Format"); }
	 */

	private static final DecimalFormat levelFormat = new DecimalFormat("0.0");

	public CarManagerWindow(Car car)
	{
		super("Car manager");
		this.car=car;		
		
		// Create/configure basic components
		this.driveCarButton = new JButton("Drive car");
		this.stopCarButton = new JButton("Stop car");

		JLabel drivingStateTextLabel = new JLabel("State:");
		this.drivingStateLabel = new JLabel(CarState.Stopped.getDrivingState());

		this.startFillingButton = new JButton("Start filling gas");
		this.stopFillingButton = new JButton("Stop filling gas");

		JLabel fillingStateTextLabel = new JLabel("State:");
		this.fillingStateLabel = new JLabel(CarState.Stopped.getFillingState());

		JLabel gasLevelTextLabel = new JLabel("Gas level:");
		this.gasLevelLabel = new JLabel(levelFormat.format(car.getGasLevel()));
		JLabel gasCapacityTextLabel = new JLabel("Gas capacity:");
		JLabel gasCapacityLabel = new JLabel(levelFormat.format(car.getGasCapacity()));

		this.gasLevelProgressBar = new JProgressBar(0,(int) Math.round(car.getGasCapacity()));
		gasLevelProgressBar.setValue((int) Math.round(car.getGasLevel()));
		this.newCarButton = new JButton("New car");
		this.exitButton = new JButton("Exit");
		
		// Add action listeners to buttons

		addListenersToButtons();
		
		// Add components to panels

		JPanel driveStopCarPanel = new JPanel();
		driveStopCarPanel.add(driveCarButton);
		driveStopCarPanel.add(stopCarButton);

		JPanel drivingStatePanel = new JPanel();
		drivingStatePanel.add(drivingStateTextLabel);
		drivingStatePanel.add(Box.createRigidArea(new Dimension(5, 0)));
		drivingStatePanel.add(drivingStateLabel);

		JPanel startStopFillingPanel = new JPanel();
		startStopFillingPanel.add(startFillingButton);
		startStopFillingPanel.add(stopFillingButton);

		JPanel fillingStatePanel = new JPanel();
		fillingStatePanel.add(fillingStateTextLabel);
		fillingStatePanel.add(Box.createRigidArea(new Dimension(5, 0)));
		fillingStatePanel.add(fillingStateLabel);

		JPanel gasLevelPanel = new JPanel();
		gasLevelPanel.add(gasLevelTextLabel);
		gasLevelPanel.add(Box.createRigidArea(new Dimension(5, 0)));
		gasLevelPanel.add(gasLevelLabel);

		JPanel gasCapacityPanel = new JPanel();
		gasCapacityPanel.add(gasCapacityTextLabel);
		gasCapacityPanel.add(Box.createRigidArea(new Dimension(5, 0)));
		gasCapacityPanel.add(gasCapacityLabel);

		JPanel levelCapacityPanel = new JPanel(new GridLayout(1, 2, 0, 0));
		levelCapacityPanel.add(gasLevelPanel);
		levelCapacityPanel.add(gasCapacityPanel);

		JPanel gasProgressPanel = new JPanel();
		gasProgressPanel.add(gasLevelProgressBar);

		JPanel controlButtonsPanel = new JPanel();
		controlButtonsPanel.add(newCarButton);
		controlButtonsPanel.add(exitButton);

		// Add components/panels to content pane

		JPanel contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new GridLayout(7, 1, 0, 10));
		contentPane.setBorder(BorderFactory.createEmptyBorder(30, 30, 30, 30));

		contentPane.add(driveStopCarPanel);
		contentPane.add(drivingStatePanel);
		contentPane.add(startStopFillingPanel);
		contentPane.add(fillingStatePanel);
		contentPane.add(levelCapacityPanel);
		contentPane.add(gasProgressPanel);
		contentPane.add(controlButtonsPanel);
		
		// Configure window

		pack();
		setResizable(false);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	
	// Method for adding action listeners to buttons
	public void newCar() {
		this.dispose();
		SetupWindow setupWindow=new SetupWindow();
		setupWindow.setVisible(true);
		
	}
	private void addListenersToButtons()
	{
		// TODO
		driveCarButton.addActionListener((ActionEvent e) -> car.startDriving());
		stopCarButton.addActionListener((ActionEvent e) -> car.stopDriving());
		startFillingButton.addActionListener((ActionEvent e) -> car.startFillingGas());
		stopFillingButton.addActionListener((ActionEvent e) -> car.stopFillingGas());
		newCarButton.addActionListener((ActionEvent e) -> newCar());
		exitButton.addActionListener((ActionEvent e) -> System.exit(0));
	}

	
	// Update listener methods
	// Implementation of ICarListener interface
	
	@Override
	public void updateGasLevel(GasLevelEvent event)
	{
		this.gasLevelLabel.setText(Double.toString(event.gasLevel));
		gasLevelProgressBar.setValue((int) Math.round(event.gasLevel));
	}

	@Override
	public void updateCarState(CarState carState)
	{
		// TODO
		this.drivingStateLabel.setText(carState.getDrivingState());
		this.fillingStateLabel.setText(carState.getFillingState());
	}
}
