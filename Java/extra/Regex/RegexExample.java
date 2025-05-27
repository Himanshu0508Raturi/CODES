//package CODES.Java.extra.Regex;
import java.util.regex.*;
public class RegexExample {
    public static void main(String[] args)
    {
        /*Pattern pattern = Pattern.compile(".xx.");// find this pattern.
        Matcher matcher = pattern.matcher("AxxB");
        System.out.println(matcher.matches()); */
        System.out.println(Pattern.matches(".xx." , "AxxB"));

    }
}
