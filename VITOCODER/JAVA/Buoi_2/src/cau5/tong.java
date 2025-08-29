package cau5;

public class tong {
	public static void main(String[] args) {
		int sum = 0 , i = 2, count = 0;
		while (count < 10) {
			 sum += i;
			 i += 2;
			 ++count;
		}
		System.out.println("tong: " + sum);
	}
}
