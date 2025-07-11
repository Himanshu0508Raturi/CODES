package CODES.Java.extra.polymorphism;

// Implementing Multiple inheritance using interface.
class Student {

  int rollnumber;

  void getNumber(int n) {
    rollnumber = n;
  }

  void displayNumber() {
    System.out.println(" Roll No. : " + rollnumber);
  }
}

class Test extends Student {

  int part1, part2;

  void getMarks(int x, int y) {
    part1 = x;
    part2 = y;
  }

  void displayMarks() {
    System.out.println("Marks Obtained ");
    System.out.println(" Part1 = " + part1);
    System.out.println(" Part2 = " + part2);
  }
}

interface Sports {
  float sportwt = 0.6F;
  void displayWt();
}

class Result extends Test implements Sports {

  float total;

  public void displayWt() {
    System.out.println(" Sport Weightage  = " + sportwt);
  }

  void display() {
    total = part1 + part2 + sportwt;
    displayNumber();
    displayMarks();
    displayWt();
    System.out.println("Total Score = " + total);
  }
}

class DemoMultiInheritance {

  public static void main(String args[]) {
    Result student1 = new Result();
    student1.getNumber(1234);
    student1.getMarks(27, 33);
    student1.display();
  }
}
