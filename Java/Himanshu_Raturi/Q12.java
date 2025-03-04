package CODES.Java.Himanshu_Raturi;
abstract class Shape 
{
    abstract void rectangleArea(double l, double b);
    abstract void squareArea(double side);
    abstract void circleArea(double radius);
}
class Area extends Shape
{
    void rectangleArea(double l, double b)
    {
        double area = l * b;
        System.out.println("Area of Rectangle: " + area);
    }
    void squareArea(double side)
    {
        double area = side * side;
        System.out.println("Area of Square: " + area);
    }
    void circleArea(double radius)
    {
        double area = 3.14 * radius * radius;
        System.out.println("Area of Circle: " + area);
    }
}
public class Q12 {
    public static void main(String args[])
    {
        Shape obj = new Area();
        obj.rectangleArea(10, 5);
        obj.squareArea(10);
        obj.circleArea(5);
    }
}
