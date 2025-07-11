//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnHashSet {
    public static void main(String[] args) {
        // no duplicate element allowed. but print in random order
        HashSet<Integer> set = new HashSet<>();
        
        set.add(34);
        set.add(58);
        set.add(96);
        set.add(78);
        set.add(23);
        
        set.add(96);
        set.add(96);
        set.add(96);
        set.add(96);
        System.out.println(set);

        set.remove(96);
        System.out.println(set);

        System.out.println(set.contains(78)); // used to check a value is present or not ----> return true/false.
        System.out.println(set.isEmpty());
        System.out.println(set.size());
        set.clear();
        System.out.println(set);
    }
}
