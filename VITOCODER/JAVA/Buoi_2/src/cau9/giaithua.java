package cau9;

import java.util.*;

public class giaithua {
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		//int n = 5;
		int gt = 1;
		while (n > 0) {
			gt *= n;
			--n;
		}
		System.out.print(gt);
		sc.close();
	}
}
