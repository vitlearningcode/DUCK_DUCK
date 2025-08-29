package cau_12;
import java.util.*;

public class ptb2 {
	public static void pt (double a, double b, double c) {
		double kq, kq1, kq2;
		if (a ==  0)
			System.out.print("khong phai phuong trinh bac 2!");
		else {
			double delta = (b*b - 4*a*c);
			if (delta < 0)
				System.out.print("phuong trinh vo nghiem");
			else if (delta == 0) {
				kq = -b/2*a;
				System.out.print("phuong trinh co nghiem kep: " + kq);
			} else {
				kq1 = (-b + Math.sqrt(delta)) / (2 * a);
				kq2 = (-b - Math.sqrt(delta)) / (2 * a);
				System.out.print("phuong trinh co nghiem: \n" + kq1 + "\n" + kq2);
			}
		}
	}
	
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Nhap vao a: " );
		double a = sc.nextDouble();
		
		System.out.print("Nhap vao b: " );
		double b = sc.nextDouble();
		
		System.out.print("Nhap vao c: " );
		double c = sc.nextDouble();
		
		pt(a, b, c);
		
	}
}
