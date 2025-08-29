package cau4;

import java.util.Scanner;

public class forDemo {
	public int inPut() {
			int n;
			do {
				n = new Scanner(System.in).nextInt();
			}while(n <= 0);
			return n;
		}
	
	public int tong (int n) {
		int tong = 0;
		for (int i = 1; i <= n; i++)
			tong += i;
		return tong;
	}
	
	public static void main(String[] args) {
		
		forDemo t = new forDemo();
		int n =  t.inPut();;
		System.out.print("Tong:  " + t.tong(n));
	}
}