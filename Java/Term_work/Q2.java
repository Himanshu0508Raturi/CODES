package CODES.Java.Term_work;
/* Write a program to check two strings are Anagram of each other. 
Note:  An  anagram  of  a  string  is  another  string  that  contains  the  same  characters,  only  the 
order of characters can be different. 
Example, “abcd” and “dabc” are an anagram of each other */
import java.util.Arrays;
import java.util.Scanner;
class Anagram
{
    void sortString(char arr[])
    {
        int n = arr.length;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n-i-1 ; j++)
            {
                if(arr[j] > arr[j+1])
                {
                    char temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    boolean checkAnagram(String str1 , String str2)
    {
        if(str1.length() != str2.length())
        {
            return false;
        }
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();
        sortString(arr1);
        sortString(arr2);
        return Arrays.equals(arr1,arr2);

    }
}
public class Q2 {
    public static void main(String args[])
    {
        Anagram obj = new Anagram();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String s1 = sc.nextLine();
        System.out.print("Enter String 2: ");
        String s2 = sc.next();
        if(obj.checkAnagram(s1 , s2))
        {
            System.out.println("Both Strings are anagram of each other");
        }else
        {
            System.out.println("Both Strings are not anagram of each other");
        }
        sc.close();
    }

}
