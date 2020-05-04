package db;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Random;

import javax.sql.DataSource;

import model.Burger;
public class BurgerDBUtil {
private DataSource dataSource;

	
	public BurgerDBUtil(DataSource dataSource) {
		this.dataSource = dataSource;
	}
	
	
	
	public ArrayList<Burger> getAllBurgers() throws Exception{
	
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<Burger> allBurgers  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "SELECT * FROM burgers";
			
			smt = conn.createStatement();
			
			res = smt.executeQuery(sql);
			
			while(res.next()) {
				
				
				String name = res.getString("name").toString();
				Integer price = res.getInt("price");
				Integer nooftopings =res.getInt("nooftopings");
				allBurgers.add(new Burger(name,price,nooftopings));
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allBurgers;
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
