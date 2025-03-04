package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
abstract class Temperature
{
    double temp;
    void setTempData(double t)
    {
        temp = t;
    }
    abstract void changeTemp();
}
class Fahrenheit extends Temperature
{
    double ctemp;
    void changeTemp()
    {
        ctemp = 5.0/9 * (temp - 32);
        System.out.println("Temperature in celcius : " + ctemp + " °C");
    }
}
class Celsius extends Temperature
{
    double ftemp;
    void changeTemp()
    {
        ftemp = (9.0/5) * temp + 32;
        System.out.println("Temperature in Fahrenheit: " + ftemp + " °C");
    }
}
public class Q13 {
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter temperature in Fahrenheit: ");
        double ftemp = sc.nextDouble();
        Temperature f = new Fahrenheit();
        f.setTempData(ftemp);
        f.changeTemp();

        System.out.print("Enter temperature in Celcius: ");
        double ctemp = sc.nextDouble();
        Temperature c = new Celsius();
        c.setTempData(ctemp);
        c.changeTemp();
        sc.close();
    }
}
