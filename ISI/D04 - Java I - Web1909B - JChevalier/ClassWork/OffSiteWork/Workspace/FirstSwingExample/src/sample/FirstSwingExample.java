package sample;
import javax.swing.*;  
public class FirstSwingExample
{  
	public static void main(String[] args)
	{  
			JFrame f=new JFrame();//creating instance of JFrame  
			JTextField field1=new JTextField(10);          
			JButton b1=new JButton("Deposit");//creating instance of JButton 
			JButton b2=new JButton("Withdrawal");
			JButton b3=new JButton("Exit");
			b1.setBounds(30,350,100, 30);//x axis, y axis, width, height  
			b1.setSize(310, 50);  
			b2.setBounds(30,285,100, 30);//x axis, y axis, width, height  
			b2.setSize(310, 50);
			b3.setBounds(30,215,100, 30);//x axis, y axis, width, height  
			b3.setSize(310, 50);
			f.add(b1);//adding button in JFrame  
			f.add(b2);
			f.add(b3);
			f.add(field1);          
			f.setSize(400,500);//400 width and 500 height  
			f.setLayout(null);//using no layout managers  
			f.setVisible(true);//making the frame visible  
	}  
}  