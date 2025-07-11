//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnLinkedHashSet {
    public static void main(String[] args) {
        LinkedHashSet<Integer> set = new LinkedHashSet<>(); // element are unique + print in order of element inserted. set + linkedList
        set.add(10);
        set.add(18);
        set.add(28);
        set.add(23);
        System.out.println(set);
        
        set.remove(28);
        System.out.println(set);
        System.out.println(set.contains(23));
        System.out.println(set.isEmpty());
        System.out.println(set.size());


    }
}
