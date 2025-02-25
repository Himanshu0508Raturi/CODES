package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;

public class Q3 {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter Number 1: ");
    int num1 = sc.nextInt();
    System.out.println("Enter Number 2: ");
    int num2 = sc.nextInt();
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= num1 / 2; i++) {
      if (num1 % i == 0) {
        sum1 += i;
      }
    }
    for (int i = 1; i <= num2 / 2; i++) {
      if (num2 % i == 0) {
        sum2 += i;
      }
    }
    if ((sum1 == num1) && (sum2 == num2)) {
      System.out.println("Abundant Numbers");
    } else {
      System.out.println("Not Abundant Numbers");
    }
    sc.close();
  }
}
