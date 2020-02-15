package com.isi.counter;

import com.isi.counter.Controllers.CounterCountroller;
import com.isi.counter.Models.Counter;
import com.isi.counter.views.CounterWindow;

public class Application
{
	public static void main(String[] args)
	{
		Counter model=new Counter();
		CounterWindow window = new CounterWindow();
		window.setVisible(true);
		
		CounterCountroller controller=new CounterCountroller(model,window);
		window.setcontroller(controller);
	}
}
  