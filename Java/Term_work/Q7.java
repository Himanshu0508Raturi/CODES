import java.util.Scanner;
public class Q7 {
    static int countOccurance(String[] arr, String word)
    {
        int count = 0;
        for(String s : arr)
        {
            if(s.equals(word))
            count++;
        }
        return count;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String sent = sc.nextLine();    
        System.out.print("Enter target: ");
        String t = sc.nextLine();
        sent = sent.replaceAll("[^a-zA-Z]" , " ").toLowerCase();
        String word[] = sent.split(" ");
        System.out.println("Occurance of " + t + " is: " + countOccurance(word, t));
        sc.close();
    }
}
