import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;

public class MyListenerClass implements ActionListener
{
	private String name;
	
	public MyListenerClass(String name)
	{
		this.name = name;
	}
	
	@Override
	public void actionPerformed(ActionEvent e)
	{
		Object source = e.getSource();
		JButton button = (JButton)source;
		String buttonText = button.getText();
		
		System.out.println("MyListenerClass "
				+ name
				+ ": Action performed: Button text = "
				+ buttonText);
	}
}
