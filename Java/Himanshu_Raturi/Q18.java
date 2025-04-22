package CODES.Java.Himanshu_Raturi;

import java.util.*;
import java.io.*;
public class Q18 
{
    static boolean isPalindrome(String word)
    {
        word = word.toLowerCase(); 
        int i = 0, j = word.length() - 1;
        while (i < j)
        {
            if (word.charAt(i) != word.charAt(j))
            {
                return false;
            }
            i++;
            j--;
        }
        return true; 
    }
    public static void main(String args[]) throws IOException 
    {
        int count = 0;
		File file = new File("C:\\Users\\Himanshu\\Desktop\\Myfile.txt");
        Scanner sc = new Scanner(file);
        while (sc.hasNext())
        {
			String word=sc.next().replaceAll("[^a-zA-Z]", "");
            if (isPalindrome(word))
            {
				System.out.println(word);
                count++;
            }
        }
		sc.close();
		System.out.println("Total palindrome = " + count);
    }   
}

