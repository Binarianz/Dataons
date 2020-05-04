package db;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Random;

import javax.sql.DataSource;

import model.sale;

public class SalesDBUtil {

private DataSource dataSource;

	
	public SalesDBUtil(DataSource dataSource) {
		this.dataSource = dataSource;
	}
	
	
	public ArrayList<sale> getAllProducts() throws Exception{
		
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<sale> allProducts  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "SELECT * FROM products";
			
			smt = conn.createStatement();
			
			res = smt.executeQuery(sql);
			
			while(res.next()) {
				
				  int id=res.getInt("id");
				  String designation= res.getString("designation").toString();
				  int price=res.getInt("price");
				  int stock=res.getInt("stock");
				  String format= res.getString("format").toString();
				allProducts.add(new sale(id,designation,price,stock,format));
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allProducts;
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
