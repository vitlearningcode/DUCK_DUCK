package cau3;

import java.util.Scanner;

public class Value {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("nhap vao a: ");
		int a = sc.nextInt();
		
		System.out.print("nhap vao b: ");
		int b = sc.nextInt();
		
		for (int i = a; i <= b; i++)
			if (i % 3 == 0 || i % 5 == 0)
				System.out.print(i + "\t");
		sc.close();
	}
}
