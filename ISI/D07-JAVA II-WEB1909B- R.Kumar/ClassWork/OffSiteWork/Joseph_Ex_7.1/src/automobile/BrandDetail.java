package automobile;

public class BrandDetail {
	private int nb;
	private String model;
	private int yr;
	private float price;
	
	public BrandDetail(int nb, String model, int yr, float price) {
		this.nb = nb;
		this.model = model;
		this.yr = yr;
		this.price = price;
	}

	public int getNb() {
		return nb;
	}

	public String getModel() {
		return model;
	}

	public int getYr() {
		return yr;
	}

	public float getPrice() {
		return price;
	}
	
	

}
