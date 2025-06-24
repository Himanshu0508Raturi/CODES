//package CODES.Java.extra.CollectionFramework;
import java.util.*;
public class LearnPriorityQueue {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(); // min heap by default.
        // priority queue implements heap data structure.
        pq.offer(40);
        pq.offer(12);
        pq.offer(24);
        pq.offer(36);
        pq.peek();
        System.out.println(pq);
        pq.poll();
        System.out.println(pq);

        System.out.println(pq.peek());
        
        PriorityQueue<Integer> pqh = new PriorityQueue<>(Comparator.reverseOrder()); // max - heap priority queue
        pqh.offer(40);
        pqh.offer(12);
        pqh.offer(24);
        pqh.offer(36);

        System.out.println("Max Heap PQ");
        System.out.println(pqh);
        System.out.println(pqh.peek());

    }
}
