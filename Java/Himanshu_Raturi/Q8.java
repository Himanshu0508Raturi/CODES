package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
public class Q8
{
    public static void main(String args[])
    {
        String str;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        str = sc.nextLine();
        //String str = new String("01101111010");
        int count = 0 ;
        for(int i =0 ; i < str.length() - 1; i++)
        {
            if(str.charAt(i) == '0' && str.charAt(i+1) == '1')
            {
                count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}