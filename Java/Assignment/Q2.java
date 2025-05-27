import java.util.*;

// Abstract base class
abstract class Person {
    String name;
    int age;

    abstract void getData(Scanner sc);
    abstract void putData();
}

// Professor class
class Professor extends Person {
    int publications;
    static int idCounter = 1; // Static counter for assigning cur_id
    int cur_id;

    Professor() {
        this.cur_id = idCounter++;
    }

    void getData(Scanner sc) {
        name = sc.next();
        age = sc.nextInt();
        publications = sc.nextInt();
    }

    void putData() {
        System.out.println(name + " " + age + " " + publications + " " + cur_id);
    }
}

// Student class
class Student extends Person {
    int[] marks = new int[6];
    static int idCounter = 1;
    int cur_id;

    Student() {
        this.cur_id = idCounter++;
    }

    void getData(Scanner sc) {
        name = sc.next();
        age = sc.nextInt();
        for (int i = 0; i < 6; i++) {
            marks[i] = sc.nextInt();
        }
    }

    void putData() {
        int totalMarks = 0;
        for (int mark : marks) {
            totalMarks += mark;
        }
        System.out.println(name + " " + age + " " + totalMarks + " " + cur_id);
    }
}

// Main class
public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Person[] people = new Person[n];

        for (int i = 0; i < n; i++) {
            int type = sc.nextInt(); // 1 for Professor, 2 for Student

            if (type == 1) {
                people[i] = new Professor();
            } else {
                people[i] = new Student();
            }

            people[i].getData(sc);
        }

        for (Person person : people) {
            person.putData();
        }
    }
}
