package cau7;

public class boiso {
	public static void main(String[] args) {
		int sum = 0, i = 1;
		while (i <= 100) {
			if (i % 5 == 0)
				sum += i;
			++i;
		}
		System.out.println(sum);
	}
}
