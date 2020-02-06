package atmPackage;
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
public class ATMView extends JFrame implements ActionListener
{
	private JLabel balalnceLabel;
	private JLabel amountLabel;
	private JLabel noofTrans;
	private JTextField inputText;
	private JButton btnDeposit;
	private JButton btnWithdrawel;
	private JButton btnExit;
	
	private JPanel textFieldsPanel;
	private JPanel buttonsPanel;
	private JPanel labelPanel;
	private JPanel contentPane;
	public ATMView(AccountClass account)
	{
		super("=======ATM=========");
		
		createComponents();
		addListenersToButtons();
		
		
		//pcode
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
	private void createComponents() {
		this.balalnceLabel = new JLabel("Balance ");
		this.amountLabel=new JLabel("&0.00");
		this.noofTrans=new JLabel("Number of Transactions Performed");
		this.btnDeposit=new JButton("Deposit");
		this.btnWithdrawel=new JButton("Withdrawel");
		this.btnExit=new JButton("Exit");
	}
	public void addListenersToButtons()
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
		
		btnDeposit.addActionListener(listenerLambda);
		btnWithdrawel.addActionListener(listenerLambda);
		btnExit.addActionListener(listenerLambda);
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
		
		textFieldsPanel.add(inputText);
		textFieldsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
	
		
		buttonsPanel.add(btnDeposit);
		buttonsPanel.add(btnWithdrawel);
		buttonsPanel.add(btnExit);
		
		labelPanel.add(balalnceLabel);
		labelPanel.add(amountLabel);
		labelPanel.add(noofTrans);
		contentPane.add(textFieldsPanel);
		contentPane.add(Box.createRigidArea(new Dimension(0, 20)));
		contentPane.add(labelPanel);
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
