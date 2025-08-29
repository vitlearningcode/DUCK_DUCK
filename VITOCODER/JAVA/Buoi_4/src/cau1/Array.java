package cau1;

import java.util.Scanner;

public class Array {
	private static Scanner sc;
	public int inPut() {
		int n;
		sc = new Scanner(System.in);
		do {
			System.out.print("Nhap vao so phan tu cua mang: ");
			n = sc.nextInt();
		} while (n <= 0);
		return n;
	}
	
	public void inArr(int a[]) {
		sc = new Scanner(System.in);
		for (int i = 0; i < a.length; i++) {
			System.out.print("a["+i+"] = ");
			a[i] = sc.nextInt();
		}
		System.out.print("\n");
	}
	
	public void outArr(int a[]) {
		for (int i = 0; i < a.length; i++) {
			System.out.print(a[i] + " ");
		}
		System.out.print("\n");
	}
	
	public void SortA(int a[]) {
		for (int i = 0; i < a.length-1; i++)
			for (int j = i + 1; j < a.length; j++) 
				if (a[i] > a[j]) {
					int temp = a[i];
						a[i] = a[j];
						a[j] = temp;
				}
	}
	
	public int f_Max(int a[]) {
		int max = a[0];
		for (int i = 0; i < a.length; i++) {
			if (a[i] > max)
				max = a[i];
		}
		return max;
	}
	
	public int f_Min(int a[]) {
		int min = a[0];
		for (int i = 0; i < a.length; i++) {
			if (a[i] < min)
				min = a[i];
		}
		return min;
	}
	
	
	public static void main (String[] args) {
		Array t1 = new Array();
		int n = t1.inPut();
		int a[] = new int[n];
		t1.inArr(a);
		System.out.println("Mảng vừa nhập: ");
		t1.outArr(a);
		
		System.out.println("Mảng vừa sắp xếp tăng dần: ");
		t1.SortA(a);
		t1.outArr(a);
		
		System.out.println("Số lớn nhất trong mảng: "+t1.f_Max(a));
		System.out.println("Số nhỏ nhất trong mảng: "+t1.f_Min(a));
		
		
	}
}
