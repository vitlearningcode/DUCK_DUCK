package cau5;

import java.util.Scanner;

public class Sum {
	static int n;
	public static void main(String[] args) {
	Scanner sc = new Scanner(System.in);
	
	System.out.print("Nhap vao n: ");
	n = sc.nextInt();
	
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	
	System.out.print("Tong cac chu so cua " + n + " la: " + sum);
	sc.close();
	}

}
