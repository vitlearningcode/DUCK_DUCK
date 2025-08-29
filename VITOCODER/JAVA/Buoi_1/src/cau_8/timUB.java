package cau_8;
import java.util.*;
public class timUB {
	public int UCLN(int a, int b) {
		if(b == 0) return a;
		return UCLN(b, a % b);
	}
	
	public int BCNN(int a, int b) {
		return (a*b) / UCLN(a, b);
	}
	
	public static void main (String[] args) {
		timUB p = new timUB();
		System.out.print("nhap vao a: ");
		int a = new Scanner(System.in).nextInt();
		
		System.out.print("nhap vao b: ");
		int b = new Scanner(System.in).nextInt();
		
		int gcd = p.UCLN(a, b);
		int lcm = p.BCNN(a, b);
		System.out.print("UCLN:" + gcd);
		System.out.print("\nBCNN: " + lcm);
	}

}
