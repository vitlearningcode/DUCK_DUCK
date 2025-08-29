package cau_2;
//toán tử quan hệ, toán tử so sánh
public class ComparisonDemo {
	public static void main(String[] args) {
		int i = 1;
		int j = 2;
		
		System.out.println("i == j" + (i == j));
		System.out.println("i != j" + (i != j));
		System.out.println("i > j" + (i > j));
		System.out.println("i < j" + (i < j));
		System.out.println("i <= j" + (i <= j));
		System.out.println("(i <= j) && (i == j)" + ((i == j) && (i <= j)));
		System.out.println("(i <= j) || (i == j)" + ((i == j) || (i <= j)));
		
	}
}
