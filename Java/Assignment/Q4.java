import java.util.Scanner;

class BankAccount {
    private double balance;

    public BankAccount(double balance) {
        this.balance = balance;
    }

    public synchronized void deposit(double amt) {
        balance += amt;
        System.out.println("INR " + amt + " has been added to your account.");
        System.out.println("Net balance: INR " + balance);
    }

    public synchronized void withdrawal(double amt) {
        if (amt > balance) {
            System.out.println("Insufficient balance. Withdrawal of INR " + amt + " failed.");
        } else {
            balance -= amt;
            System.out.println("INR " + amt + " has been deducted from your account.");
            System.out.println("Net balance: INR " + balance);
        }
    }

    public double getBalance() {
        return balance;
    }
}

class Transaction extends Thread {
    private BankAccount b;
    private double amt;
    private boolean deposit;

    public Transaction(double amt, BankAccount b, boolean deposit) {
        this.b = b;
        this.amt = amt;
        this.deposit = deposit;
    }

    public void run() {
        if (deposit) {
            b.deposit(amt);
        } else {
            b.withdrawal(amt);
        }
    }
}

public class Q4 {
    public static void main(String[] args) throws InterruptedException {
        Scanner sc = new Scanner(System.in);
        BankAccount obj = new BankAccount(1000);

        System.out.print("Enter amount to deposit: ");
        double depositAmount = sc.nextDouble();

        System.out.print("Enter amount to withdraw: ");
        double withdrawAmount = sc.nextDouble();

        Transaction depositThread = new Transaction(depositAmount, obj, true);
        Transaction withdrawalThread = new Transaction(withdrawAmount, obj, false);

        depositThread.start();
        withdrawalThread.start();

        depositThread.join();
        withdrawalThread.join();

        System.out.println("Final Balance: INR " + obj.getBalance());
    }
}
