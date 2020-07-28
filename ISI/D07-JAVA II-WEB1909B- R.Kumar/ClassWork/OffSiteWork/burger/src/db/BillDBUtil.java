package db;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.Random;

import javax.sql.DataSource;

import model.Bill;
import model.Burger;;
public class BillDBUtil {
	private DataSource dataSource;	
	public BillDBUtil(DataSource dataSource) {
		this.dataSource = dataSource;
	}
	
public void insertBill(int id, String bname, int bprice, String tstring, int ttotalprice, int total)throws Exception{
	
	Connection conn = null;
	Statement smt = null;
	PreparedStatement pstmt = null;
	ResultSet res = null;
	int id1=id;
	try {
		
		conn = this.dataSource.getConnection();
		String sql="INSERT INTO recipet (id,bname,bprice,tstring,ttotalprice,total) VALUES (?,?,?,?,?,?)";
		pstmt = conn.prepareStatement(sql);
		pstmt.setString(1,String.valueOf(id));
		pstmt.setString(2, bname);
		pstmt.setString(3,String.valueOf(bprice));
		pstmt.setString(4, tstring);
		pstmt.setString(5,String.valueOf(ttotalprice));
		pstmt.setString(6,String.valueOf(total));
		pstmt.executeUpdate();		
		int i = smt.executeUpdate(sql);
		
		System.out.println("Database updated successfully ");
		
	}
	finally {
		
		close(conn,smt,pstmt,res);
			
	}
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


