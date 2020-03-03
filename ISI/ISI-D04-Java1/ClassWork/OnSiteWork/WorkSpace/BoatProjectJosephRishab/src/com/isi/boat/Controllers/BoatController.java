package com.isi.boat.Controllers;

import com.isi.boat.Models.BoatModel;
import com.isi.boat.Views.MasterPanel;
	
public class BoatController {

	private BoatModel model; // Model
	private MasterPanel window; // View
	
	public BoatController(BoatModel model,MasterPanel window)
	{
		this.model=model;
		this.window=window;
	}
}
