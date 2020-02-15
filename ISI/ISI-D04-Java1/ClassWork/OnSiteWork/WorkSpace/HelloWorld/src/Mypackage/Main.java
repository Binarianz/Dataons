package Mypackage;

import java.awt.Dimension;

import javax.swing.Box;
import javax.swing.JApplet;
import javax.swing.JButton;
import javax.swing.JFrame;

public class Main{
	private static void c() throws RuntimeException
	{
		System.out.println("c() starting");
		if(true)
			throw new RuntimeException("Runtime exception test");
		System.out.println("c () finishg");
	}
	private static void b() 
	{
		System.out.println("b() starting");
		try{
			c();
		}
		catch (Exception e) {
			System.out.println("done handiling");
		}
		
		finally {
			System.out.println("sfjksjdk");
		}
		System.out.println("b () finishg");
	}
	private static void a()
	{
		System.out.println("a() starting");
		b();
		System.out.println("a () finishg");
	}
	public static void main(String[] args) {
		System.out.println("main() starting");
		a();
		System.out.println("main () finishg");
	}

}