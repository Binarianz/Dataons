package com.isi.car;

import javax.swing.SwingUtilities;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;

import com.isi.car.views.SetupWindow;

public class Main
{
	public static void main(String[] args)
	{
		SwingUtilities.invokeLater(() ->
		{
			setSystemLookAndFeel();
			SetupWindow setupWindow = new SetupWindow();
			setupWindow.setVisible(true);
		});
	}
	
	private static void setSystemLookAndFeel()
	{
		try 
		{
			UIManager.setLookAndFeel(
					UIManager.getSystemLookAndFeelClassName());
		}
		catch (UnsupportedLookAndFeelException | ClassNotFoundException |
				InstantiationException | IllegalAccessException e) {}
	}
}
