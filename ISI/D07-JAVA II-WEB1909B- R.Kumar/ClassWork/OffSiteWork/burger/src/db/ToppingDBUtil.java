package db;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Random;

import javax.sql.DataSource;

import model.Burger;
import model.Topping;

public class ToppingDBUtil {

private DataSource dataSource;

	
	public ToppingDBUtil(DataSource dataSource) {
		this.dataSource = dataSource;
	}
	
	public ArrayList<Topping> getAllToppings() throws Exception{
	
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<Topping> allToppings  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "SELECT * FROM toppings";
			
			smt = conn.createStatement();
			
			res = smt.executeQuery(sql);
			
			while(res.next()) {
				
				
				String name = res.getString("name").toString();
				Integer price = res.getInt("price");
				allToppings.add(new Topping(name,price));
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allToppings;
	}

	
private void close(Connection conn, Statement smt, PreparedStatement pstmt, ResultSet res) {
		
		try {
			
			if(conn != null) {
				conn.close();
			}
			if(pstmt != null) {
				pstmt.close();
			}
			if(smt != null) {
				smt.close();
			}
			if(res != null) {
				res.close();
			}
			
		}catch(Exception ex) {
			ex.printStackTrace();
		}
			
	}
}
