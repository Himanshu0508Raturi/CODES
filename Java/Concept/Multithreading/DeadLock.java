class Pen {}
class Paper {}

public class DeadLock{
    public static void main(String[] args) {
        final Pen pn = new Pen();
        final Paper pr = new Paper();

        Thread t1 = new Thread(() -> {
            synchronized (pn) {
                System.out.println("Thread 1: Holding Pen...");
                try {
                    Thread.sleep(100);  // Simulate delay
                } catch (InterruptedException e) {}

                synchronized (pr) {
                    System.out.println("Thread 1: Acquired Paper too!");
                }
            }
        });

        Thread t2 = new Thread(() -> {
            synchronized (pr) {
                System.out.println("Thread 2: Holding Paper...");
                try {
                    Thread.sleep(100);  // Simulate delay
                } catch (InterruptedException e) {}

                synchronized (pn) {
                    System.out.println("Thread 2: Acquired Pen too!");
                }
            }
        });

        t1.start();
        t2.start();
    }
}
