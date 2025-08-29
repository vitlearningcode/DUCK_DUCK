package cau8;

import java.util.Scanner;

public class chan_le {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		for (int i = (n % 2 == 0 ? 2 : 1); i <= n; i+=2)
			sum += i;
		System.out.println("tong: " + sum);
		
		sc.close();
	}
}
