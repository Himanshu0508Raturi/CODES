package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;

public class Q4 {

  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Input: ");
    int num = sc.nextInt();
    if (num == 0) {
      num = 1;
    }
    int x = 0;
    while (num > 0) {
      int val = num % 10;
      if (val == 0) {
        val = 1;
      }
      x = x * 10 + val;
      num = num / 10;
    }
    int ans = 0;
    while (x > 0) {
      int val = x % 10;
      ans = ans * 10 + val;
      x = x / 10;
    }
    System.out.print("Output: " + ans);
    sc.close();
  }
}
