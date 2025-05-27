package CODES.Java.Term_work;
/* Write a program to validate an IPv4 Address.  
IPv4  addresses  are  canonically  represented  in  dot-decimal  notation,  which  consists  of  four 
decimal numbers, each ranging from 0 to 255, separated by dots, e.g., 172.16.254.1 
Test Cases: 
Inputs: 
String ip1 = "128.0.0.1"; 
String ip2 = "125.16.100.1"; 
String ip3 = "125.512.100.1"; 
String ip4 = "125.512.100.abc"; 
Output: 
Valid 
Valid 
Not Valid 
Not Valid */
import java.util.Scanner;
public class Q5 {

    public static boolean isValidIPv4(String ip) {

        String[] parts = ip.split("\\.");

        if (parts.length != 4) {
            return false;
        }

        for (String part : parts)
        {
            int num = Integer.parseInt(part);    
            if (num < 0 || num > 255) {
                return false;
            }
            if (!part.equals(String.valueOf(num)))
            {
                return false;
            }

        }
        return true;
    }

    public static void main(String[] args) {
        System.out.print("Enter String: ");
        Scanner sc = new Scanner(System.in);
        String ip = sc.nextLine();
        if (isValidIPv4(ip)) {
            System.out.println("Valid");
        } else {
            System.out.println("Not Valid");
        }
        sc.close();
        
    }
}

