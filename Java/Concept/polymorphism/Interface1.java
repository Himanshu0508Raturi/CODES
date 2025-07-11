package CODES.Java.extra.polymorphism;

// Defining an interface
interface Animal {
    // Abstract methods (no implementation)
    void makeSound();
    
    // Default method (Java 8 feature)
    default void sleep() {
        System.out.println("Sleeping...");
    }
}

// Implementing the interface in a class
class Dog implements Animal {
    // Providing implementation for abstract method
    public void makeSound() {
        System.out.println("Bark! Bark!");
    }
}

// Main class
public class Interface1 {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.makeSound(); // Output: Bark! Bark!
        myDog.sleep(); // Output: Sleeping...
    }
}
