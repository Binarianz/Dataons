package com.isi.counter;

import javax.swing.SwingUtilities;
import javax.swing.UIManager;
import javax.swing.UnsupportedLookAndFeelException;

import com.isi.counter.controllers.CounterController;
import com.isi.counter.models.Counter;
import com.isi.counter.views.CounterWindow;

public class Application
{
	public static void main(String[] args)
	{
		SwingUtilities.invokeLater(() ->
		{
			setSystemLookAndFeel();
			
			Counter model = new Counter();
			CounterWindow window = new CounterWindow();
			CounterController controller = new CounterController(model, window);
			
			window.setController(controller);
			window.setVisible(true);
		});
	}
	
	private static void setSystemLookAndFeel()
	{
		try
		{
			UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		}
		catch (ClassNotFoundException | InstantiationException | IllegalAccessException
				| UnsupportedLookAndFeelException e) {}
	}
}
