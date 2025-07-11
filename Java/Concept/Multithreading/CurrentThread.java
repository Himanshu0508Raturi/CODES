//package CODES.Java.extra.Multithreading;
//  Write a program to know the currently running Thread 
public class CurrentThread {
    public static void main(String[] args) {
        System.out.println("This is first statement.");
        Thread t = Thread.currentThread();
        System.out.println("Current Thread: " + t);
        System.out.println("Its name is: " + t.getName());
        System.out.println("Its priority: " + t.getPriority());
    }
}
