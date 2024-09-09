/* Create a class Time that represents a specific time of day using hours, minutes, and seconds 
as    int data members. Implement the following: 
Data Members: 
o Three int data members: hours, minutes, and seconds to store the time. 
2. Constructors: 
o A default constructor that initializes the time to 00:00:00. 
o A parameterized constructor that initializes the time to specific values provided 
by the user. 
3. Member Functions: 
o A function void display() that displays the time in the format HH:MM:SS. 
o Overload the binary + operator as a member function or a friend function to 
add two Time objects. The result should be returned as a new Time object. 
4. Main Function: 
o In the main() function, create three Time objects. Initialize the first two objects 
with specific values using the parameterized constructor. 
o Use the overloaded + operator to add the first two Time objects, and store the 
result in the third Time object. 
o Finally, display the time stored in the third object using the display() function. 
Input:  
Time t1(2, 45, 30); // t1 represents 02:45:30  
Time t2(1, 20, 40); // t2 represents 01:20:40  
Output: t3.display(); // Should display 04:06:10 */
#include<iostream>
#include<iomanip>
using namespace std;

class time2
{
    private:
        int hr;
        int min;
        int sec;

    public:
    time2(int a= 00 , int b = 00 , int c = 00)
    {
        hr=a;
        min=b;
        sec = c;
    }
    void display()
    {
        cout<<setfill('0')<<setw(2)<<hr<<":"<<setfill('0')<<setw(2)<<min<<":"<<setfill('0')<<setw(2)<<sec<<endl;
    }
    time2 operator+(time2 t)
    {
        time2 result;
        result.sec = sec + t.sec;
        result.min = min + t.min + (result.sec/60);
        result.sec%=60;
        result.hr=hr+t.hr+(result.min/60);
        result.min%=60;
        return result;
    }

};
int main()
{
    time2 t1(2,45,30);
    t1.display();

    time2 t2(1,20,40);
    t2.display();

    time2 t3;
    t3 = t1 + t2;
    t3.display();

    return 0;
}