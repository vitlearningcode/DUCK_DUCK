package cau7;
import java.util.Scanner;

public class H_B {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Chọn chức năng chuyển đổi
        System.out.println("Chọn chức năng:");
        System.out.println("1. Chuyển đổi từ hệ thập phân sang hệ nhị phân");
        System.out.println("2. Chuyển đổi từ hệ nhị phân sang hệ thập phân");
        System.out.print("Nhập lựa chọn của bạn (1 hoặc 2): ");
        int choice = scanner.nextInt();
        
        switch (choice) {
            case 1:
                convertDecimalToBinary();
                break;
            case 2:
                convertBinaryToDecimal();
                break;
            default:
                System.out.println("Lựa chọn không hợp lệ.");
        }
    }
    
//   10 -> 2
    public static void convertDecimalToBinary() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Nhập số nguyên dương n: ");
        int n = scanner.nextInt();
        
        String binary = Integer.toBinaryString(n);
        System.out.println("Số nguyên dương " + n + " trong hệ nhị phân là: " + binary);
    }
    
//    2 -> 10
    public static void convertBinaryToDecimal() {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Nhập số nhị phân: ");
        String binary = scanner.nextLine();
           
        int decimal = Integer.parseInt(binary, 2);
        System.out.println("Số nhị phân " + binary + " trong hệ thập phân là: " + decimal);
    }
}
