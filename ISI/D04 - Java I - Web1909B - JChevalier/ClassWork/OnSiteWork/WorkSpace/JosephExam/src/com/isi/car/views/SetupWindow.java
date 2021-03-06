package com.isi.car.views;

import java.awt.Dimension;
import java.awt.GridLayout;
import java.awt.Point;
import java.awt.event.ActionEvent;

import javax.swing.BorderFactory;
import javax.swing.Box;
import javax.swing.JButton;
import javax.swing.JDialog;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JOptionPane;
import javax.swing.JPanel;
import javax.swing.JTextField;

import com.isi.car.models.CapacityException;
import com.isi.car.models.Car;
import com.isi.car.network.CarClient;

public class SetupWindow extends JFrame
{
	private static final long serialVersionUID = 1L;
	
	private JTextField capacityTextField;
	
	public SetupWindow()
	{
		super("Setup");
//TODO
		JLabel capacityLabel = new JLabel("Enter gas capacity:");
		this.capacityTextField = new JTextField(8);
		JButton createCarButton = new JButton("Create car");
		
		createCarButton.addActionListener((ActionEvent e) -> setupModelView());

		JPanel capacityPanel = new JPanel();
		capacityPanel.add(capacityLabel);
		capacityPanel.add(Box.createRigidArea(new Dimension(16, 0)));
		capacityPanel.add(capacityTextField);

		JPanel buttonPanel = new JPanel();
		buttonPanel.add(createCarButton);

		JPanel contentPane = (JPanel)getContentPane();
		contentPane.setLayout(new GridLayout(2, 1, 0, 0));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
		contentPane.add(capacityPanel);
		contentPane.add(buttonPanel);

		getRootPane().setDefaultButton(createCarButton);
		pack();
		setResizable(false);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	private void setupModelView()
	{
		 double capacity1;
		 capacity1=Double.valueOf( this.capacityTextField.getText());
		 Car car = new Car(capacity1);
//		try {
//			car = new Car(capacity1);
//		} catch (CapacityException e) {
//			JOptionPane.showMessageDialog(this,"Invalid number Format");
//		}
		 this.dispose();
		 CarManagerWindow window=new CarManagerWindow(car);
		 window.setVisible(true);
		 CarClient carClient=new CarClient();
		 car.addCarListener(window);
		 car.addCarListener(carClient);
		
	}
	
	private void showWarningDialog(String message)
	{
		JOptionPane optionPane = new JOptionPane(
				message,
				JOptionPane.WARNING_MESSAGE,
				JOptionPane.DEFAULT_OPTION);
		JDialog dialog = optionPane.createDialog(this, "Warning");
		Point parentLocation = dialog.getLocation();
		dialog.setLocation(parentLocation.x, parentLocation.y + 140);
		dialog.setVisible(true);
	}
}
