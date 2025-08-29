package cau2;
import java.util.Scanner;
public class two_a {
	public static void main (String[] args) {
		Scanner sc =  new Scanner(System.in);
		System.out.print("Nhap vao ki tu so (0..9): ");
		char n = sc.next().charAt(0);
		
		switch (n) {
			case '0' : 
				System.out.print("Zero");
				break;
			case '1' : 
				System.out.print("One");
				break;
			case '2' : 
				System.out.print("Two");
				break;
			case '3' : 
				System.out.print("Three");
				break;
			case '4' : 
				System.out.print("Four");
				break;
			case '5' : 
				System.out.print("Five");
				break;
			case '6' : 
				System.out.print("Six");
				break;
			case '7' : 
				System.out.print("Seven");
				break;
			case '8' : 
				System.out.print("Eight");
				break;
			case '9' : 
				System.out.print("Nine");
				break;
			default :
				System.out.print("I don't know");
				break;
		}
			sc.close();

		}
}
