package CODES.Java.extra;
import java.util.Scanner;

class Fruit {
    String name;
    double price;

    public Fruit(String name, double price) {
        this.name = name;
        this.price = price;
    }
}

class Fruitingms extends Fruit {
    double stock; // Available in kg

    public Fruitingms(String name, double price, double stock) {
        super(name, price);
        this.stock = stock;
    }

    public boolean isAvailable(double quantity) {
        return stock >= quantity;
    }

    public void updateStock(double quantity) {
        stock -= quantity;
    }
}

class Fruitinpcs extends Fruit {
    int stock; // Available in pieces

    public Fruitinpcs(String name, double price, int stock) {
        super(name, price);
        this.stock = stock;
    }

    public boolean isAvailable(int quantity) {
        return stock >= quantity;
    }

    public void updateStock(int quantity) {
        stock -= quantity;
    }
}

class Sale {
    public void generateBill(Fruit fruit, double quantity, String unit) {
        double totalPrice = quantity * fruit.price;
        double discount = (totalPrice > 500) ? totalPrice * 0.05 : 0;
        double finalPrice = totalPrice - discount;

        System.out.println("\n========== XYZ Fruit Shop ==========");
        System.out.printf("Item       : %s\n", fruit.name);
        System.out.printf("Quantity   : %.2f %s\n", quantity, unit);
        System.out.printf("Unit Price : Rs. %.2f\n", fruit.price);
        System.out.printf("Total      : Rs. %.2f\n", totalPrice);
        System.out.printf("Discount   : Rs. %.2f\n", discount);
        System.out.printf("Final Bill : Rs. %.2f\n", finalPrice);
        System.out.println("====================================\n");
    }
}

public class Demo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Fruitingms apple = new Fruitingms("Apple", 100, 10);
        Fruitingms mango = new Fruitingms("Mango", 80, 5);
        Fruitinpcs banana = new Fruitinpcs("Banana", 10, 20);

        Sale sale = new Sale();

        while (true) {
            System.out.println("\nSelect fruit: 1. Apple 2. Mango 3. Banana 4. Exit");
            int choice = sc.nextInt();

            if (choice == 4) {
                System.out.println("Thank you for shopping at XYZ Fruit Shop!");
                break;
            }

            switch (choice) {
                case 1, 2:
                    System.out.print("Enter quantity in kg: ");
                    double quantity = sc.nextDouble();
                    if (choice == 1 && apple.isAvailable(quantity)) {
                        sale.generateBill(apple, quantity, "kg");
                        apple.updateStock(quantity);
                    } else if (choice == 2 && mango.isAvailable(quantity)) {
                        sale.generateBill(mango, quantity, "kg");
                        mango.updateStock(quantity);
                    } else {
                        System.out.println("Insufficient stock.");
                    }
                    break;

                case 3:
                    System.out.print("Enter number of pieces: ");
                    int pieces = sc.nextInt();
                    if (banana.isAvailable(pieces)) {
                        sale.generateBill(banana, pieces, "pcs");
                        banana.updateStock(pieces);
                    } else {
                        System.out.println("Insufficient stock for Banana.");
                    }
                    break;

                default:
                    System.out.println("Invalid selection. Please choose a valid option.");
            }
        }

        sc.close();
    }
}