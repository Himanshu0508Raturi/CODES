import student.Student;
import Enrollement.Enrollment;
import course.Course;
public class university
{
    public static void main(String[] args)
    {
        Student s1 = new Student(1 , "Himanshu Raturi" , 20);
        Course c1 = new Course(10 , "B.tech" , 4);
        Enrollment e1 = new Enrollment(s1,c1);
        System.out.println(e1.getEnrollmentInfo());
    }
}
