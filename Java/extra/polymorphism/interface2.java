package CODES.Java.extra.polymorphism;
interface Area {
  float PI = 3.14F;
  float compute(float a, float b);
}

class Rectangle implements Area {

  public float compute(float a, float b) {
    return (a * b);
  }
}

class Circle implements Area {

  public float compute(float x, float y) {
    return (PI * x * x);
  }
}

class interface2 {

  public static void main(String[] args) {
    Rectangle rect = new Rectangle();
    Circle cir = new Circle();
    Area area;
    area = rect;
    System.out.println("Area of Rectangle = " + area.compute(10, 20));
    area = cir;
    System.out.println("Area of Circle = " + area.compute(10, 0));
  }
}
