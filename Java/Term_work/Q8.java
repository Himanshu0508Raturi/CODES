import java.util.regex.*;
import java.util.Scanner;
public class Q8 {
    static boolean verifyEmail(String input)
    {
        String emailRegex = "^[A-Za-z0-9+_.-]+@[A-Za-z0-9.-]+$";
        Pattern pattern = Pattern.compile(emailRegex);
        Matcher matcher = pattern.matcher(input);
        return matcher.matches();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Email: ");
        String input = sc.nextLine();
        if(verifyEmail(input))
        {
            System.out.println("Valid Email.");
        }else
        {
            System.out.println("Not a valid Email.");
        }
        sc.close();
    }
}
