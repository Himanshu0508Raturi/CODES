//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnTreeSet {
    public static void main(String[] args) {
        // set + bst(sorted order);
        TreeSet<Integer> set = new TreeSet<>();

        set.add(10);
        set.add(99);
        set.add(23);
        set.add(5);
        System.out.println(set);

        set.remove(5);
        System.out.println(set);

        System.out.println(set.contains(23));
        System.out.println(set.isEmpty());
        System.out.println(set.size());
    }
}
