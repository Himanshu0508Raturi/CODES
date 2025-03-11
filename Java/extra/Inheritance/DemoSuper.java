package CODES.Java.extra.Inheritance;
class Box
{
    double width;
    double height;
    double depth;
    Box(Box ob)
    {
        width = ob.width;
        height = ob.height;
        depth = ob.depth;
    }
    Box(double w , double h , double d)
    {
        w = width;
        h = height;
        d = depth;
    }
    Box()
    {
        width = -1;
        height = -1;
        depth = -1;
    }
    Box(double a)
    {
        width = height = depth = a;
    }
    double volume()
    {
        return width*height*depth;
    }
}
class BoxWeight extends Box
{
    double weight;
    BoxWeight(BoxWeight obj)
    {
        super(obj);
        weight = obj.weight;
    }
    BoxWeight(double w , double h , double d , double wei)
    {
        super(w,h,d);
        weight = wei;
    }
    BoxWeight()
    {
        super();
        weight = -1;
    }
    BoxWeight(double a , double wei)
    {
        super(a);
        weight = wei;
    }
}
public class DemoSuper {
    public static void main(String[] args)
    {
        BoxWeight mybox1 = new BoxWeight(10.0, 20.0, 15.0, 34.3); 
        BoxWeight mybox2 = new BoxWeight(2.0, 3.0, 4.0, 0.076); 
        //BoxWeight mybox3 = new BoxWeight(); // default 
        //BoxWeight mycube = new BoxWeight(3.0, 2.0); 
        //BoxWeight myclone = new BoxWeight(mybox1); 
        double vol; 
        vol = mybox1.volume(); 
        System.out.println("Volume of mybox1 is " + vol); 
        System.out.println("Weight of mybox1 is " + mybox1.weight); 
        System.out.println(); 
        vol = mybox2.volume(); 
        System.out.println("Volume of mybox2 is " + vol); 
        System.out.println("Weight of mybox2 is " + mybox2.weight); 
        System.out.println();
        System.gc();
    }
}
