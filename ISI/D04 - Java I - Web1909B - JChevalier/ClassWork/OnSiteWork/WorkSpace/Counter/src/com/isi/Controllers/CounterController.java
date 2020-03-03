package com.isi.Controllers;

import java.util.Random;

import com.isi.Models.IncrementerModel;

public class CounterController {

	public IncrementerModel m;
	public CounterController()
	{
		m=new IncrementerModel();
	}
	public int Incrementer(int current)
	{
		current++;
		m.setDigit(current);
		return m.getDigit();
	}
	public int Decrementer()
	{
		
		return 0;
	}
	
	public int randGen()
	{
	/*	Random rand = new Random(); 
		 int rand_int1 = rand.nextInt(100); 
		m. digit+=rand_int1;
		 return digit;*/
		return 0;
	}

}
