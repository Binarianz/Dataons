package db;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Random;

import javax.sql.DataSource;

import model.farm;

public class FarmDBUtil {
private DataSource dataSource;

	
	public FarmDBUtil(DataSource dataSource) {
		this.dataSource = dataSource;
	}
	
	public ArrayList<farm> getAllFarmDetails()throws Exception	{
	Connection conn = null;
	Statement smt = null;
	PreparedStatement pstmt = null;
	ResultSet res = null;
	
	ArrayList<farm> allFarms  = new ArrayList<>();	
	
	
	
	try {
		
		conn = this.dataSource.getConnection();
		
		String sql = "select name_farm ,country ,name  from farm,farmer where farm.farmer_id=farmer.farmer_id";
		
		smt = conn.createStatement();
		
		res = smt.executeQuery(sql);
		
		while(res.next()) {
			
			
			String fname=res.getString("name_farm").toString();
			String country=res.getString("country").toString();
			String name=res.getString("name").toString();
			allFarms.add(new farm(fname, country, name));
			
		}
		
		
	} finally {
		close(conn,smt,pstmt,res);
	}
	return allFarms;
}
	public ArrayList<farm> getAllFarmDetailsCountry(String cName)throws Exception	{
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<farm> allFarms  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "select name_farm ,country ,name  from farm,farmer where farm.farmer_id=farmer.farmer_id and country=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1,cName);
			smt = conn.createStatement();
			
			res = pstmt.executeQuery();
			
			while(res.next()) {
				
				
				String fname=res.getString("name_farm").toString();
				String country=res.getString("country").toString();
				String name=res.getString("name").toString();
				allFarms.add(new farm(fname, country, name));
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allFarms;
	}
	public ArrayList<farm> getAllFarmDetailsFarmer(String fName)throws Exception	{
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<farm> allFarms  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "select name_farm ,country ,name  from farm,farmer where farm.farmer_id=farmer.farmer_id and name=?";
			pstmt = conn.prepareStatement(sql);
			pstmt.setString(1,fName);
			smt = conn.createStatement();
			
			res = pstmt.executeQuery();
			
			while(res.next()) {
				
				
				String fname=res.getString("name_farm").toString();
				String country=res.getString("country").toString();
				String name=res.getString("name").toString();
				allFarms.add(new farm(fname, country, name));
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allFarms;
	}

	public ArrayList<String> getAllCountry()throws Exception	{
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<String> allCountry  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "select DISTINCT country from farm";
			
			smt = conn.createStatement();
			
			res = smt.executeQuery(sql);
			
			while(res.next()) {
				
				
				
				String country=res.getString("country").toString();
				allCountry.add(country);
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allCountry;
	}
	public ArrayList<String> getAllFarmer()throws Exception	{
		Connection conn = null;
		Statement smt = null;
		PreparedStatement pstmt = null;
		ResultSet res = null;
		
		ArrayList<String> allFarmer  = new ArrayList<>();	
		
		
		
		try {
			
			conn = this.dataSource.getConnection();
			
			String sql = "select DISTINCT name from farmer";
			
			smt = conn.createStatement();
			
			res = smt.executeQuery(sql);
			
			while(res.next()) {
				
				
				
				String farmer=res.getString("name").toString();
				allFarmer.add(farmer);
				
			}
			
			
		} finally {
			close(conn,smt,pstmt,res);
		}
		return allFarmer;
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
