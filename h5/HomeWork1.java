/*
TUES http://www.elsys-bg.org/
11б
N.10
Георги Миленов Цанев
Да се отвори CSV файл и да се сумира колона от него.
*/

import java.io.*;
import java.util.Arrays;

public class HomeWork1{

public static void main(String[] args) throws Exception{
        int COL=4;
        
        System.out.println("File Name: ");
        BufferedReader filenameInput = new BufferedReader(new InputStreamReader(System.in));
        String filename=filenameInput.readLine();
        
        System.out.println("Column Number: ");
        BufferedReader columnInput = new BufferedReader(new InputStreamReader(System.in));
        try
		{
			COL=Integer.valueOf(columnInput.readLine());
        }
		catch(NumberFormatException e)
		{
        	System.out.println("Wrong Column Value!");
            System.exit(1);
        }
		BufferedReader CSVFile = new BufferedReader(new FileReader(filename));
		String dataRow = CSVFile.readLine();
		int result=0;
        while (dataRow != null) {
        	String[] dataArray = dataRow.split(",");
        	try
			{
            	result+=Integer.valueOf(dataArray[COL]);                
			}
			catch(NumberFormatException e)
			{
            	System.out.println("Ignoring becouse it's not int: "+dataArray[COL]);
            }
            System.out.println(); 
            dataRow = CSVFile.readLine(); 
        }
  
        CSVFile.close();
        System.out.println("Sum from ["+COL+"] column is: "+result);

        }

}
