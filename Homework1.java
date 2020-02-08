import java.io.File; 
import java.util.StringTokenizer;
import java.util.Scanner;
public class Homework1 {

	public static void main(String[] args) throws Exception 
	{
		//File directory for file input
		File file = new File("C:\\Users\\sheco\\eclipse-workspace\\Programming_Language_Concepts\\PLC_HW1.txt"); 
		Scanner sc = new Scanner(file);
		//StringTokenizer thisFile = new StringTokenizer(file.toString());
		while (sc.hasNext()) 
			System.out.println(sc.next());
	}
}
