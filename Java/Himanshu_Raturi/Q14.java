package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
interface Shape
{
    void volume();
}
class Cone implements Shape
{
    double radius , height;
    Cone(double radius , double height)
    {
        this.radius = radius;
        this.height = height;
    }
    public void volume()
    {
        double vol = (1.0/3) * Math.PI * Math.pow(radius, 2.0) * height;
        System.out.printf("Volume of Cone is: %2f meter cube\n",vol);
    }
}
class Hemisphere implements Shape
{
    double radius;
    Hemisphere(double radius)
    {
        this.radius = radius;
    }
    public void volume()
    {
        double vol = (2.0/3)* Math.PI * Math.pow(radius, 3.0);
        System.out.printf("Volume of Hemisphere is:  %2f meter cube\n",vol);
    }
}
class Cylinder implements Shape
{
    double radius , height;
    Cylinder(double radius , double height)
    {
        this.radius = radius;
        this.height = height;
    }
    public void volume()
    {
        double vol = Math.PI * Math.pow(radius, 2.0) * height;
        System.out.printf("Volume of Cylinder is:  %2f meter cube\n",vol);
    }
}
public class Q14 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Radius of Cone: ");
        double cradius = sc.nextDouble();
        System.out.print("Enter Height of cone: ");
        double cheight = sc.nextDouble();
        Shape cone = new Cone(cradius, cheight);
        cone.volume();

        System.out.print("\nEnter radius of the Hemisphere: ");
        double hemisphereRadius = sc.nextDouble();
        Shape hemisphere = new Hemisphere(hemisphereRadius);
        hemisphere.volume();

        System.out.print("\nEnter radius of the Cylinder: ");
        double cylinderRadius = sc.nextDouble();
        System.out.print("Enter height of the Cylinder: ");
        double cylinderHeight = sc.nextDouble();
        Shape cylinder = new Cylinder(cylinderRadius, cylinderHeight);
        cylinder.volume();
        sc.close();
    }
}
