package cau_4;
import java.util.*;
public class HCN {
	public static Scanner sc;
	public float Nhap() {
		float n;
		sc = new Scanner(System.in);
		n = sc.nextFloat();
		//sc.close();
		return n;	
	}
	
	public float tinhDt(float d, float r) {
		float s = d * r;
		return s;
	}
	public static void main (String[] args) {
		HCN a = new HCN();
		System.out.print("nhap vao chieu dai: ");
		float dai =  a.Nhap();
		
		System.out.print("nhap vao chieu rong: ");
		float rong =  a.Nhap();
		
		float kq = a.tinhDt(dai, rong);
		System.out.print("dien tich hinh CN: " + kq);
	//	sc.close();
	
		
	}
}
