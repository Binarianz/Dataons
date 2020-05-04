package automobile;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

public class DBConnection {

	
	public static final String URL_CONNECTION = "jdbc:mysql://localhost:3306/auto";
	public static final String lOGIN = "root";
	private static final String PASSWORD = "";

	private static final String QUERY_GET_ALL_BRANDS = "select * from brands";
	
	private static final String QUERY_GET_BRAND_DETAIL = "Select nb,model,yr,price from vehicles v inner join brands b on v.brandID = b.brandID where brand=?";
	
	private static Connection getConnection() throws ClassNotFoundException, SQLException {
		Class.forName("com.mysql.jdbc.Driver");
		return DriverManager.getConnection(URL_CONNECTION, lOGIN, PASSWORD);
	}
	

   public static  ArrayList<Brand> getBrand(){
	   Connection connection = null;
		Statement statement = null;
	 ArrayList<Brand> listOfBrands = new ArrayList<Brand>();
		
		try {
			
			connection = getConnection();
		    statement = connection.createStatement();
			ResultSet result = statement.executeQuery(QUERY_GET_ALL_BRANDS);
			while (result.next()) {
				Brand brand = new Brand(result.getInt("brandID"), result.getString("brand"));
				listOfBrands.add(brand);
			}

		} catch (ClassNotFoundException | SQLException e) {

			e.printStackTrace();
		}

       return listOfBrands;
   }
   
   
   public static  ArrayList<BrandDetail> getBrandDetails(String brandName){
	   Connection connection = null;
		PreparedStatement preparedStatement = null;
	 ArrayList<BrandDetail> listOfBrandDetails = new ArrayList<BrandDetail>();
		
		try {
			connection = getConnection();
			preparedStatement = connection.prepareStatement(QUERY_GET_BRAND_DETAIL); 
			preparedStatement.setString(1,brandName);
			ResultSet result=preparedStatement.executeQuery();
			while (result.next()) {
				BrandDetail brandDetail=new BrandDetail(result.getInt("nb"),result.getString("model"), result.getInt("yr"), result.getFloat("price"));
				listOfBrandDetails.add(brandDetail);
			}

		} catch (ClassNotFoundException | SQLException e) {

			e.printStackTrace();
		}

       return listOfBrandDetails;
   }
   }
