package cau1;

import java.util.Scanner;

public class SNT {
    public static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    public static void primeNumbers(int n) {
            System.out.println("Các số nguyên tố nhỏ hơn " + n + " là:");
            for (int i = 2; i < n; i++) {
                if (isPrime(i))
                    System.out.print(i + " ");
            }    
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Nhập vào n: ");
        int n = scanner.nextInt();
        scanner.close();
        primeNumbers(n);
    }
}
