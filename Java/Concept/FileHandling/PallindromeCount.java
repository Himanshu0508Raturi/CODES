/*Java Program: Count and Save Palindrome Words 
1. Reads content from a text file 
2. Identifies and counts all palindrome words 
3. Writes all palindrome words to another file */
import java.io.*;
public class PallindromeCount {
    static boolean isPallindrome(String s)
    {
        String temps = s;
        char[] str = s.toCharArray();
        int l = str.length;
        for(int i = 0 ; i < l/2 ; i++)
        {
            char temp = str[i];
            str[i] = str[l-i-1];
            str[l-i-1] = temp;
        }
        String reversed = new String(str);
        return temps.equals(reversed);
    }
    public static void main(String[] args) throws IOException
    {
        BufferedWriter bw = new BufferedWriter(new FileWriter("pallindome.txt"));
        BufferedReader br = new BufferedReader(new FileReader("input.txt"));
        String line;
        int palindromeCount = 0;
        while((line = br.readLine()) != null)
        {
            String words[] = line.split("\\s+");
            for(String word: words)
            {
                if((!word.isEmpty() &&isPallindrome(word)))
                {
                    palindromeCount++;
                    bw.write(word);
                    bw.newLine();
                }
            } 
        }
        System.out.println(palindromeCount);
        bw.close();
        br.close();
    }
}
