package CODES.Java.Term_work;
/* Java program for Sorting a String  
(i)Without using any inbuilt sorting functions 
(ii) By using inbuilt functions */
import java.util.Arrays;
class StringSorting
{
    void sortingWithoutInbuiltFunction(char str[])
    {
        int n = str.length;
        for(int i = 0 ; i < n-1 ; i++)
        {
            for(int j = 0 ; j < n-i-1 ; j++)
            {
                if(str[j] > str[j+1])
                {
                    char temp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = temp; 
                }
            }
        }
    }
    void sortingWithInbuiltFunction(char str[])
    {
        Arrays.sort(str);
    }
}
public class Q3 {
    public static void main(String[] args)
    {
        StringSorting obj = new StringSorting();
        String input = "edcba";
        char[] str1 = input.toCharArray();
        char[] str2 = input.toCharArray();

        // Sorting without inbuilt function
        obj.sortingWithoutInbuiltFunction(str1);
        System.out.println("Sorted without inbuilt function: " + new String(str1));

        // Sorting with inbuilt function
        obj.sortingWithInbuiltFunction(str2);
        System.out.println("Sorted with inbuilt function: " + new String(str2));
    }
}
