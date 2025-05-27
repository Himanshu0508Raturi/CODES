package CODES.Java.extra.Regex;

import java.util.regex.Pattern;

public class Quant {
    public static void main(String[] args) {
        System.out.println("? quantifier...");
        System.out.println(Pattern.matches("[ayz]?","a" )); // true
        System.out.println(Pattern.matches("[ayz]?", "aaa")); // false
        System.out.println(Pattern.matches("[ayz]?", "ayyyyyzz")); // false
        System.out.println(Pattern.matches("[ayz]?", "amnta"));// false
        System.out.println(Pattern.matches("[ayz]?", "ayz"));// false

        System.out.println("+ quantifier...");
        System.out.println(Pattern.matches("[ayz]+","a" )); //true
        System.out.println(Pattern.matches("[ayz]+","aaaa" )); //true
        System.out.println(Pattern.matches("[ayz]+","ayyzz" )); // true
        System.out.println(Pattern.matches("[ayz]+","ammta" )); // false

        System.out.println("* quantifier...");
        System.out.println(Pattern.matches("[ayz]*","ayyyzaazazaaayy" )); // true


    }
}
