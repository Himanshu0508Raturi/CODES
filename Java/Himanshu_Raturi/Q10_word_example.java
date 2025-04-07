package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
public class Q10_word_example {
  private String strdata;
  public Q10_word_example(String str)
  {
    
    int l = str.length();
    if(str.charAt(l - 1) == '.' || str.charAt(l - 1) == '?' || str.charAt(l - 1) == '!')
    {
        strdata = str;
    }else
    {
        System.out.println("Enter a valid string ending with ? , . , !.");
    }
  }
  boolean isVowel(String word)
  {
    if ((word.charAt(0) == 'A' || word.charAt(0) == 'E' || word.charAt(0) == 'I' 
     || word.charAt(0) == 'O' || word.charAt(0) == 'U') 
    && 
    (word.charAt(word.length() - 1) == 'A' || word.charAt(word.length() - 1) == 'E' 
     || word.charAt(word.length() - 1) == 'I' || word.charAt(word.length() - 1) == 'O' 
     || word.charAt(word.length() - 1) == 'U')) 
    {
        return true;
    }else
    {
        return false;
    }
  }
  void countword()
  {
    int count = 0;
    String[] token = strdata.trim().split("\\s+"); 
    for(String word : token)
    {
        if (isVowel(word)) 
        {
            count++;
        }
    
    }
    System.out.println("Words starting and ending with Vowels are: " + count);
  }
  void placeWord()
  {
    String[] token = strdata.trim().split("\\s+");
    StringBuilder vowelWords = new StringBuilder();
    StringBuilder otherWords = new StringBuilder();
    for(String word : token)
    {
        if (isVowel(word)) 
        {
            vowelWords.append(word + " ");
        }else
        {
            otherWords.append(word + " ");
        }
    }
    System.out.println("Rearranged string.");
    System.out.print(vowelWords);
    System.out.println(otherWords + " ");

  }
  public static void main(String args[])
  {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter the sentence (UPPERCASE and ends with ., ?, or !):");
    String str;
    str = sc.nextLine();
    Q10_word_example obj = new Q10_word_example(str);
    obj.countword();
    obj.placeWord();
    sc.close();
  }
}
