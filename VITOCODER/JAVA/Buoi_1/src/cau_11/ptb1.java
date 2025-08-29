package cau_11;
import java.util.*;

public class ptb1 {
	public static void pt(double a, double b) {
		if (a == 0) {
			if (b == 0)
				System.out.print("phuong trinh vo so nghiem");
			else 
				System.out.print("phuong trinh vo nghiem");
		} else { 
			double kq = -b/a;
			System.out.print("nghiem cua phuong trinh: " + kq);
		}
	}
	
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("nhap vao so a: ");
		double a = sc.nextDouble();
		
		System.out.print("nhap vao so b: ");
		double b = sc.nextDouble();
		
		pt(a, b);
		sc.close();
		
	}

}
