package cau_9;
import java.util.*;


public class SNT {
	public static boolean  KT(int n) {
		if (n < 2) return false;
		for (int i = 2; i <= Math.sqrt(n); i++) {
			if (n % i == 0)
				return false; 
		}
		return true;
	}
	
	public static void Prime(int n) {
		System.out.println("Các số nguyên tố nhỏ hơn " + n + " là:");
		for (int i = 1; i <= n ; i++)
		{
			if (KT(i))
				System.out.print(i + " ");
		}
		  
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("nhap vao n: ");
		int n  = sc.nextInt();
		Prime(n);
	
	}
}
