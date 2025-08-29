package cau1;

public class If_Else_Demo {

	public static void main(String[] args) {
		int testCore = 76;
		char grade;
		if (testCore >= 90) {
			grade = 'A';
		} else if (testCore >= 80) {
			grade = 'B';
		} else if (testCore >= 70) {
			grade = 'C';
		} else if (testCore >= 60) {
			grade = 'D';
		} else {
			grade = 'F';
		}
		System.out.println("Grade =  " + grade);
	}
}
