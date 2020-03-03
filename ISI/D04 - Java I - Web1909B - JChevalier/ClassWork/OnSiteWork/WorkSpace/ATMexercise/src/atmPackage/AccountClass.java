package atmPackage;
public class AccountClass {
	
	
	//variable declaration
	private static int accountsCreated=0;
	private final int TRANACTION_LIMIT;
	private final double EXTRA_FEE;
	private final double OVERDRAWN_TRANSACTION_BASE_FEE;
	private final double OVERDRAWN_TRANSACTION_FEE_PER_DOLLAR;
	private final int id;
	private String name;
	private double balance;
	private int totalNumberOfTransaction;
	private double totalAmountOwedInFees;
	private double totalAmountPaidInFees;
	
	//constructor
	public AccountClass(String name,double balance)
	{
		accountsCreated++;
		this.id=accountsCreated;
		this.TRANACTION_LIMIT=5;
		this.EXTRA_FEE=10;
		this.OVERDRAWN_TRANSACTION_BASE_FEE=3;
		this.OVERDRAWN_TRANSACTION_FEE_PER_DOLLAR=.12;
		setName(name);
		this.balance=balance;
		this.totalNumberOfTransaction=0;
		this.totalAmountOwedInFees=100;
		this.totalAmountPaidInFees=0;		
	}
	//gettter methods
	public int getTransactionLimit() {
		return this.TRANACTION_LIMIT;		
	}
	public int getId() {
		return this.id;		
	}
	public double getExtraFee() {
		return this.EXTRA_FEE;		
	}
	public double getOverdawnBaseFee() {
		return this.OVERDRAWN_TRANSACTION_BASE_FEE;		
	}
	public double getOverdawnFeePerDoller() {
		return this.OVERDRAWN_TRANSACTION_FEE_PER_DOLLAR;
	}
	public String getName()
	{
		return this.name;
	}
	public double getBalance()
	{
		return this.balance;
	}
	public int getAllowedNumberOfTransaction()
	{
		return this.TRANACTION_LIMIT- this.totalNumberOfTransaction;
	}
	public double getTotalAmountOwedInFees()
	{
		return this.totalAmountOwedInFees;
	}
	public double getTotalAmountPaidInFees()
	{
		return this.totalAmountPaidInFees;
	}
	//private setter methods
	private void setBalance(double balance)
	{
		this.balance+=balance;
		if(this.balance<balance)
		{
		this.totalAmountOwedInFees+=(this.OVERDRAWN_TRANSACTION_BASE_FEE) +
			((1+this.OVERDRAWN_TRANSACTION_FEE_PER_DOLLAR)*
			(balance-this.balance));
		}
		else if (this.totalNumberOfTransaction>this.TRANACTION_LIMIT) {
			this.totalAmountOwedInFees+=EXTRA_FEE;
		}
	}
	private void setTransactionLimitcount()
	{
		totalNumberOfTransaction++;
	}
	private void setOwnedMoney(double balance)
	{
		this.totalAmountPaidInFees+=balance;
		this.totalAmountOwedInFees-=balance;
	}
	//public action methods
	public boolean depositMoney(double money)
	{
		this.setTransactionLimitcount();
		if(money>=0&&money<=1000)
		{
			this.setBalance(money);
			return true;
		}
		
		else {
			return false;
		}
	}
	public boolean withdrawMoney(double money)
	{
		this.setTransactionLimitcount();
		if(money>=0&&money<=this.getBalance())
		{
			this.setBalance(0-money);
			return true;
		}
		
		else {
			return false;
		}
	}
	public boolean payAmountOfOwedFees(double money)
	{
		if(money>=0&&money<=this.getBalance()&&money<=this.getTotalAmountOwedInFees())
		{
			this.setBalance(this.getTotalAmountOwedInFees()-money);
			this.setOwnedMoney(money);
			return true;
		}
		
		else {
			return false;
		}
	}
	public void setName(String name)
	{
		this.name=name;
	}
	public String accountDescription() 
	{
		return "ID: "+this.id+" Name: "+this.name+" Balance: "+this.balance
				+" Total Number of Transactions:"+this.totalNumberOfTransaction
				+" Money owed:"+this.getTotalAmountOwedInFees()+" Money Pid As fee :"+
				this.getTotalAmountPaidInFees();
	}
}
