import java.util.Scanner;

public class main {
	public static void main(String[] args) {

		
		 int[][] matrix_1= {{10,0},{-4,5}}; int[][] matrix_2={{-6,3},{1,-7}};
		 int[][] result=new int[2][2];

		 System.out.println("first matrix is :\n");
		 displaymatrix(matrix_1);
		 System.out.println("second matrix is :\n");
		 displaymatrix(matrix_1);
		 Scanner in = new Scanner(System.in);
		System.out.println("Please enter a number: \n1)Add\n2)Subtract\n3)Multiplication");
		int input=in.nextInt();
		switch (input) {
		case 1:
			result=Add(matrix_1,matrix_2);		
			displaymatrix(result);
			break;
		case 3:
			result=Multiplication(matrix_1, matrix_2);
			displaymatrix(result);
			break;
		case 2:
			result=Subtract(matrix_1, matrix_2);
			displaymatrix(result);
			break;	
		default:
			break;
		}	
		
		result=Add(matrix_1,matrix_2);	
		
		in.close();
	}
	public static void displaymatrix(int[][] result) {
		for (int i = 0; i < result.length; i++) 
		{
			for (int j = 0; j < result[i].length; j++)
			{
				System.out.print(result[i][j]+" ");
			}
			System.out.println("\n");

		}
		
	}
	
	
	public static int[][] Add(int[][] a,int[][]b)
	{
		int[][] result=new int[2][2];
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[i].length; j++) {
				
				result[i][j]=a[i][j]+b[i][j];
				
			}
			
		}
		return result;
	}
	public static int[][] Subtract(int[][] a,int[][]b)
	{
		int[][] result=new int[2][2];
		for (int i = 0; i < a.length; i++) {
			for (int j = 0; j < a[i].length; j++) {
				
				result[i][j]=a[i][j]-b[i][j];
				
			}
			
		}
		return result;
	}
	public static int[][] Multiplication(int[][] a,int[][]b)
	{
		int[][] result= {{0,0},{0,0}};
		for (int i = 0; i < result.length; i++) {
			for (int j = 0; j < result.length; j++) {
				for (int k = 0; k < result.length; k++) {
					result[i][j]+=a[i][k]*b[k][j];  
					
				}				
			}			
		}
		return result;
	}

}
