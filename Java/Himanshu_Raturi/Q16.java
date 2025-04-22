package CODES.Java.Himanshu_Raturi;
import java.util.Scanner;
class myNameException extends Exception
{
    public myNameException(String s)
    {
        super(s);
    } 
}
class myIdException extends Exception
{
    public myIdException(String s)
    {
        super(s);
    } 
}
class myDeptIdException extends Exception
{
    public myDeptIdException(String s)
    {
        super(s);
    } 
}
public class Q16 {
    public static void main(String args[])
    {
        
        Scanner sc = new Scanner(System.in);
        try
        {
            int id , dept_Id;
            String name;
            System.out.print("Enter Employee ID (2001 - 5001): ");
            id = sc.nextInt();
            if(id < 2001 || id > 5001)
            {
                throw new myIdException("Error! Enter Valid Id between 2001 to 5001.");
            }
            System.out.print("Enter Employee Name: ");
            name = sc.next();
            if(!Character.isUpperCase(name.charAt(0)))
            {
                throw new myNameException("Error! Enter Valid name.");
            }
            System.out.print("Enter Department Id: ");
            dept_Id = sc.nextInt();
            if(dept_Id < 1 || dept_Id > 5)
            {
                throw new myDeptIdException("Error! Enter valid Department Id (1 - 5).");
            }
            System.out.println("Detail of employee: ");
            System.out.println("name: " + name);
            System.out.println("Employee Id: " + id);
            System.out.println("Department Id: " + dept_Id);
        }catch(Exception e)
        {
            System.out.println(e.getMessage());
        }
        
        System.out.println("End of main program.");
        sc.close();

    }
}
