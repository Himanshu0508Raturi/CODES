package course;
public class Course
{
    int courseId;
    String courseName;
    int credits;

    public Course(int courseId , String courseName, int credits)
    {
        this.courseId = courseId;
        this.courseName = courseName;
        this.credits = credits;
    }
    public String getCourseInfo()
    {
        return "Course ID: " + courseId + " Course Name: " + courseName + " Credits: " + credits;
    }
}

