package cau6;
import java.util.Scanner;

public class ThuaSoNguyenTo {
	public static Scanner sc;
	public int inPut() {
		int n;
		do {
			System.out.print("Nhap vao so n > 0: ");
			sc = new Scanner(System.in);
			n = sc.nextInt();
		} while (n <= 0);
		return n;
	}
	
	public void Thuaso(int n) {
		int i = 2;
		System.out.print(n + " = ");
		do {
			if (n % i == 0) {
				n /= i; // chia lam doi
				System.out.print(" " + i);
				i = 1;
				if (n != 1)
					System.out.print(" * ");
			} i++;
		} while (n != 1);
	}
	public static void main(String[] args) { 
	ThuaSoNguyenTo t = new ThuaSoNguyenTo();
	int n = t.inPut();
	t.Thuaso(n);
	
	}
}