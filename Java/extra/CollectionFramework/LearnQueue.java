//package CODES.Java.extra.CollectionFramework;
// queue using linked list.
import java.util.*;
public class LearnQueue {
    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();

        q.offer(20);
        q.offer(30);
        q.offer(40);
        q.offer(50);
        q.offer(60);

        System.out.println(q);

        System.out.println(q.poll()); // return and remove element at front;

        System.out.println(q);

        System.out.println(q.peek());
    }
}
