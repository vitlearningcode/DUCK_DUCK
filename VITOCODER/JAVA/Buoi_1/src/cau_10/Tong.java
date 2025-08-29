package cau_10;
import java.util.*;
public class Tong {
	public static int Chan(int n) {
		int k = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0)
				k += i;
		}
		return k;
	}
	
	public static int Le(int n) {
		int k = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0)
				k += i;
		}
		return k;
	}
	
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhap vao n: ");
		int n = sc.nextInt();
		int c = Chan(n);
		int l = Le(n);
		System.out.print("tong cac so chan: "+ c);
		System.out.print("\ntong cac so le: " + l);
	}
}
