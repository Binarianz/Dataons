package com.isi.boat;

import com.isi.boat.Controllers.BoatController;
import com.isi.boat.Models.BoatModel;
import com.isi.boat.Views.MasterPanel;

public class Application
{
	public static void main(String[] args)
	{
		BoatModel model=new BoatModel();
		MasterPanel window = new MasterPanel();
		window.setVisible(true);
		
		BoatController controller=new BoatController(model,window);
		//window.setcontroller(controller);
	}
}
  