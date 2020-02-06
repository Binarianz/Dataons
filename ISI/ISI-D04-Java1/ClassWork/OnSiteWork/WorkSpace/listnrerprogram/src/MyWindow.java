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
import javax.swing.JPasswordField;
import javax.swing.JProgressBar;
import javax.swing.JSlider;
import javax.swing.JTextField;

public class MyWindow extends JFrame implements ActionListener
{
	private Account account;
	
	private JLabel label;
	private JTextField textField;
	private JPasswordField passwordField;
	private JProgressBar progressBar;
	private JSlider slider;
	private JButton button1;
	private JButton button2;
	private JButton button3;
	
	private JPanel textFieldsPanel;
	private JPanel buttonsPanel;
	private JPanel labelPanel;
	
	private JPanel contentPane;
	
	public MyWindow(Account account, String title)
	{
		super(title);
		
		this.account = account;
		
		createComponents();
		addListenersToButtons();
		createPanels();
		setupContentPane();
		addComponentsToPanels();
		
		//this.setSize(400, 300);
		this.pack();
		this.setResizable(false);
		this.setLocationRelativeTo(null);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
	}
	
	private void createComponents()
	{
		// Create components
		label = new JLabel("This is a label");
		
		textField = new JTextField("This is a text field", 20);
		
		passwordField = new JPasswordField(16);
		
		progressBar = new JProgressBar(0, 100);
		progressBar.setValue(80);
		
		slider = new JSlider(-100, 100);
		slider.setValue(0);
		
		button1 = new JButton("First");
		button2 = new JButton("Button 2");
		button3 = new JButton("Third");
	}
	
	private void addListenersToButtons()
	{
		//button1.addActionListener(this);
		//button2.addActionListener(this);
		//button3.addActionListener(this);
		
		// Anonymous inner class
		
		ActionListener listener = new ActionListener()
		{
			@Override
			public void actionPerformed(ActionEvent e)
			{
				Object source = e.getSource();
				JButton button = (JButton)source;
				String buttonText = button.getText();
				
				System.out.println("MyListenerClass: Action performed: Button text = "
						+ buttonText);
			}
		};
		
		//button1.addActionListener(listener);
		//button2.addActionListener(listener);
		//button3.addActionListener(listener);
		
		// Lambda expression
		
		ActionListener listenerLambda = (ActionEvent e) ->
		{
			Object source = e.getSource();
			JButton button = (JButton)source;
			String buttonText = button.getText();
			
			System.out.println("MyListenerClass: Action performed: Button text = "
					+ buttonText);
		};
		
		button1.addActionListener(listenerLambda);
		button2.addActionListener(listenerLambda);
		button3.addActionListener(listenerLambda);
	}
	
	private void createPanels()
	{
		// Create panels
		textFieldsPanel = new JPanel();
		textFieldsPanel.setLayout(new BoxLayout(textFieldsPanel, BoxLayout.Y_AXIS));
		buttonsPanel = new JPanel();
		labelPanel = new JPanel();
	}
	
	private void setupContentPane()
	{
		// Get the content pane (panel already created by window)
		contentPane = (JPanel)getContentPane(); // Get content pane
		contentPane.setLayout(new BoxLayout(contentPane, BoxLayout.Y_AXIS));
		contentPane.setBorder(BorderFactory.createEmptyBorder(20, 20, 20, 20));
	}
	
	private void addComponentsToPanels()
	{
		// Add components to panels
		
		textFieldsPanel.add(textField);
		textFieldsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		textFieldsPanel.add(passwordField);
		
		buttonsPanel.add(button1);
		buttonsPanel.add(button2);
		buttonsPanel.add(button3);
		
		labelPanel.add(label);
		
		contentPane.add(textFieldsPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(labelPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(progressBar);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(slider);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(buttonsPanel);
	}
	
	@Override
	public void actionPerformed(ActionEvent e)
	{
		Object source = e.getSource();
		JButton button = (JButton)source;
		String buttonText = button.getText();
		
		System.out.println("MyListenerClass: Action performed: Button text = "
				+ buttonText);
	}
}
