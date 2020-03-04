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
import javax.swing.JScrollPane;
import javax.swing.JTextField;

class MyActionLister implements ActionListener{

	@Override
	public void actionPerformed(ActionEvent e) {

		JButton btn =  (JButton) e.getSource();
		System.out.println("This is My Button - "+btn.getText());
	}

}


public class ATMWindow extends JFrame {

	public JTextField balanceAmount;
	// labels
	public JLabel balanceLabel;
	public JLabel balanceAmoutLabel;
	public JLabel transactionsLabel;

	// buttons
	public JButton depositButton;
	public JButton withdrawButton;
	public JButton btnpay;
	public JButton exitButton;


	// panels
	public JPanel balancePanel;
	public JPanel balanceAmountPanel;
	public JPanel balanceTextFieldPanel;
	public JPanel buttonsPanel;;
	public JPanel exitButtonPanel;


	public JPanel contentPanel;

	AccountClass account = new AccountClass("Joseph",3000);

	public ATMWindow(String title) {
		super(title);
		createWindowElements();
		createActions();
		addComponentsToPanels();
		addPanelsToContentPane();

		// Packs your content
		this.pack();
		// Makes to move center of the screen
		this.setLocationRelativeTo(null);
		// this make you program on close
		setDefaultCloseOperation(EXIT_ON_CLOSE);

	}

	private void createWindowElements() {

		balanceAmount = new JTextField();

		balanceAmoutLabel = new JLabel();
		balanceAmoutLabel.setText("$"+account.getBalance());

		balanceLabel = new JLabel();
		balanceLabel.setText("Balance");
		// buttons
		depositButton = new JButton("Deposit");
		depositButton.setAlignmentX(0.5f);
		withdrawButton = new JButton("Withdraw");
		withdrawButton.setAlignmentX(0.5f);
		btnpay=new JButton("Pay Fees");
		btnpay.setAlignmentX(0.5f);
		exitButton = new JButton();
		exitButton.setText("Exit");
		exitButton.setAlignmentX(0.5f);

		// panels
		balancePanel = new JPanel();
		balanceAmountPanel = new JPanel();
		balanceTextFieldPanel  = new JPanel();
		buttonsPanel  = new JPanel();
		buttonsPanel.setLayout(new BoxLayout(buttonsPanel, BoxLayout.Y_AXIS));
		exitButtonPanel  = new JPanel();

	}

	private void createActions() {
		depositButton.addActionListener(new ActionListener() {

			@Override
			public void actionPerformed(ActionEvent event) {
				// TODO Auto-generated method stub

				//System.out.println("Deposit");
				account.depositMoney(Double.parseDouble(balanceAmount.getText()));
				balanceAmoutLabel.setText(String.valueOf(account.getBalance()));
				balanceAmount.setText("");
			}
		});

		withdrawButton.addActionListener( (ActionEvent event) -> {
			//System.out.println("withDraw");
			account.withdrawMoney(Double.parseDouble(balanceAmount.getText()));
			balanceAmoutLabel.setText(String.valueOf(account.getBalance()));
			balanceAmount.setText(""	);
		});
		btnpay.addActionListener((ActionEvent event)->{
			account.payAmountOfOwedFees(Double.parseDouble(balanceAmount.getText()));
			balanceAmoutLabel.setText(String.valueOf(account.getTotalAmountOwedInFees()));
			balanceAmount.setText("");
		});
		exitButton.addActionListener((ActionEvent event)->{
			System.exit(0);
		});
		MyActionLister myActionLister = new MyActionLister();
		exitButton.addActionListener(myActionLister);

	}

	private void addComponentsToPanels() {
		balancePanel.add(balanceLabel);
		balancePanel.add(Box.createRigidArea(new Dimension(0, 20)));

		balanceAmountPanel.add(balanceAmoutLabel);
		balanceAmountPanel.add(Box.createRigidArea(new Dimension(0, 20)));

		balanceTextFieldPanel.add(balanceAmount);
		balanceTextFieldPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		balanceTextFieldPanel.setLayout(new BoxLayout(balanceTextFieldPanel, BoxLayout.Y_AXIS));
		
		buttonsPanel.add(depositButton);
		buttonsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		buttonsPanel.add(withdrawButton);
		buttonsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		buttonsPanel.add(btnpay);
		buttonsPanel.add(Box.createRigidArea(new Dimension(0, 20)));
		buttonsPanel.add(exitButton);
		//exitButtonPanel.add(exitButton);
		//exitButtonPanel.add(Box.createRigidArea(new Dimension(30, 20)));
		//exitButtonPanel.setLayout(new BoxLayout(exitButtonPanel, BoxLayout.Y_AXIS));

	}

	private void addPanelsToContentPane() {
		contentPanel = (JPanel) this.getContentPane();
		contentPanel.setLayout(new BoxLayout(contentPanel, BoxLayout.Y_AXIS));
		contentPanel.setBorder(BorderFactory.createEmptyBorder(20,20,20,20));
		contentPanel.setAlignmentX(0.5f);
	contentPanel.setAlignmentX(JScrollPane.CENTER_ALIGNMENT);

		contentPanel.add(balancePanel);
		contentPanel.add(balanceAmountPanel);
		contentPanel.add(balanceTextFieldPanel);
		contentPanel.add(buttonsPanel);
		contentPanel.add(exitButtonPanel);
	}
}