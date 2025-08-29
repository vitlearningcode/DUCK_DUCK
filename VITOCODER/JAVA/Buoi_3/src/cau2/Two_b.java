package cau2;

import java.util.Scanner;

public class Two_b {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhap vao ki tu so (0..9): ");
		int n = sc.next().charAt(0);
		
		String[] ic = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
		
		if (n >= '0' && n <= '9')
			System.out.print(ic[Character.getNumericValue(n)]);
		else 
			System.out.print("I don't know");
		
		sc.close();
	}
}
