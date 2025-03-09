package CODES.Java.extra;
import java.util.Scanner;
public class Indi_word {
    public static void main(String[] args) {
        String str;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        String[] words = str.trim().split("\\s+");
        for(String Word: words)
        {
            System.out.println(Word);
        }    
        sc.close();
    }
    

}
