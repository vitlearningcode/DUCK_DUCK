package Cau_6;
import java.util.Scanner;
import java.io.IOException;
public class Pheptinh {
	
	public int inPut() {
		int n = new Scanner(System.in).nextInt();
		return n;
	}
	
	public int inPut1() {
		try {
			int ch = System.in.read();
			return ch;
		} catch (IOException ie) {
			System.out.print("Error" + ie);
			return 0;
		}
	}
	
	public void thuchien (int a, int b, int ch) {
		int kq = 0;
		try {
			if ((char)ch == '+')
				kq = a + b;
			if ((char)ch == '-')
				kq = a - b;
			if ((char)ch == '*')
				kq = a * b;
			if ((char)ch == '/')
				kq = a / b;
			
			System.out.print("Phep toan " + a + " " + (char)ch + " " + b + " = " + kq);
				
		} catch(ArithmeticException ex) {
			System.out.print("Khong duoc phep chia cho 0");
		}
	}
	
	public static void main(String[] args) {
		Pheptinh pt = new Pheptinh();
		int a, b, ch;
		System.out.print("nhap a: ");
		a = pt.inPut();
		
		System.out.print("nhap b: ");
		b = pt.inPut();
		
		System.out.print("nhap peptinh: ");
		ch = pt.inPut1();
		
		pt.thuchien(a, b, ch);
	}
}
