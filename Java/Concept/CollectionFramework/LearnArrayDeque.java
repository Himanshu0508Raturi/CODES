//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnArrayDeque {
    public static void main(String[] args) {
        ArrayDeque<Integer> dq = new ArrayDeque<>();

        dq.offer(12);// by deafult adds at last.
        dq.offerFirst(56); // insert element at first.
        dq.offerLast(34); // insert element at last.
        dq.offer(50);
        System.out.println(dq);

        System.out.println(dq.peek());
        System.out.println(dq.peekFirst());
        System.out.println(dq.peekLast());


        System.out.println(dq.poll());
        System.out.println(dq);

        System.out.println(dq.pollFirst());
        System.out.println(dq);


        System.out.println(dq.pollLast());
        System.out.println(dq);
    }
}
