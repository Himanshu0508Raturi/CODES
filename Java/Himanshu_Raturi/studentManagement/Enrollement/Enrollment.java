package Enrollement;

import student.Student;
import course.Course;

public class Enrollment {
    Student std;
    Course crs;

    public Enrollment(Student student, Course course) {
        std = student;
        crs = course;
    }

    public String getEnrollmentInfo() {
        return "Enrollment Details:\n" + std.getStudentInfo() + "\n" + crs.getCourseInfo();
    }
}
