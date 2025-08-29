package cau3;
import java.util.Random;

public class RandomExercise {
	public static void main (String[] args) {
		Random r = new Random();
		int n = r.nextInt();
		System.out.println("Number: " + n);
	}
}
