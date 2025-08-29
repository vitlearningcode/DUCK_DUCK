package cau_5;

//import java.util.Scanner;

import java.util.*;
public class chan_le {
	public static Scanner sc;
	public int nhap() {
		int n;
		sc = new Scanner(System.in);
		n = sc.nextInt(); 
		//int n = new Scanner(System.in).nextInt();
		return n;
	}
	
	public void kiemtra(int n) {
		if (n % 2 == 0)
			System.out.print("la so chan");
		else
			System.out.print("la so le");
	}
	
	public static void main (String[] args) {
		chan_le sc = new chan_le();
		
		int n = sc.nhap();
		
		sc.kiemtra(n);
		
	}
}
