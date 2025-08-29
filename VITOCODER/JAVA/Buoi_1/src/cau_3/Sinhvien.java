package cau_3;
import java.util.*;
public class Sinhvien {
 public static void main (String[] args) {
	 Scanner sc = new Scanner(System.in);
	 System.out.print("Nhap ma sinh vien: ");
	 String mssv = sc.next();
	 
	 System.out.print("Nhap ho ten: ");
	 String hoten = sc.next();
	 
	 System.out.print("Nhap tuoi: ");
	 int tuoi = sc.nextInt();
	 
	 System.out.print("Nhap namsinh: ");
	 int namsinh = sc.nextInt();
	 
	 System.out.print("Nhap dtb: ");
	 double dtb = sc.nextDouble();
	 
	 System.out.print("sinh vien: " + mssv + "\t" + hoten + "\t" + tuoi + "\t" + namsinh + "\t" + dtb);
	 sc.close();
 }
}
