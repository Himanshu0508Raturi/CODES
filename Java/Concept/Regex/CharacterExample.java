//package CODES.Java.extra.Regex;
import java.util.regex.*;
public class CharacterExample {
  public static void main(String[] args) {
    System.out.println(Pattern.matches("[xyz]" , "wdcb"));//false
    System.out.println(Pattern.matches("[xyz]" , "x"));//true
    System.out.println(Pattern.matches("[xyz]" , "xxyyyyyz"));//false
    System.out.println(Pattern.matches("[xyz]" , "abc"));//false
  }  
}
