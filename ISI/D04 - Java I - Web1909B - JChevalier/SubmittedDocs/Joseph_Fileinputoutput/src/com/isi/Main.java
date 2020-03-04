package com.isi;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Main {

	
	
	private static void readfile(String path)
	{
	try(BufferedReader reader = new BufferedReader(new FileReader(new File(path)))) 
	{
		while (reader.ready()) {
		String line=reader.readLine();
		writeFile("C:/Users/jemmanue/Desktop/Testfolder/MyTextFile3.txt", line);
		//System.out.println(line);
		}
			
	} 
	catch (FileNotFoundException e) {e.printStackTrace();}
	catch (IOException e) {e.printStackTrace();}
	}
	private static void writeFile(String path,String line) {
		try(FileWriter writer=new FileWriter(new File(path),true))
		{
			
			writer.write(line+"\n");
			writer.flush();
		} 
		catch (IOException e) {e.printStackTrace();}
	}
	public static void main(String[] args)
	{
		String path="C:\\Users\\jemmanue\\Desktop\\Testfolder\\MyTextFile.txt";
		String path2="C:\\Users\\jemmanue\\Desktop\\Testfolder\\MyTextFile2.txt";
		readfile(path);
		readfile(path2);
	}
}