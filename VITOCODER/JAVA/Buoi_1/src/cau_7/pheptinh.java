package cau_7;
import java.util.*;

public class pheptinh {
	public int inPut() {
		int n = new Scanner(System.in).nextInt();
		return n;
	}
	
	public static void main (String[] args) {
	
	pheptinh pt = new pheptinh();
	System.out.print("nhap vao n: ");
	int n = pt.inPut(); 
	
	double kq = Math.sqrt(n);
	System.out.print("can bac 2 cua "+n+" la: "+ kq);
	System.out.print("\nnhap vao a: ");
	int a = pt.inPut();
	System.out.print("nhap vao b: ");
	int b = pt.inPut();

	double powresult = Math.pow(a, b);
	System.out.print("binh phuong cua 2 so:  " + powresult);
	
	int max = Math.max(a, b);
	int min = Math.min(a, b);
	System.out.print("\nmax: "+ max);
	System.out.print("\nmin: "+ min);
	}
}
