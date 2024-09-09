/*Q17. Create a student database system where each student has attributes like name, roll
number, course, and marks. The program should:
• Use a class Student to store student details.
• Use a pointer to a Student object to dynamically manage student records.
• Allow the user to add, delete, and view student records.
• Calculate and display the average marks of all students.
• Find and display the student with the highest marks.*/
#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int rollno;
    string course = "B.Tech(C.S.E)";
    int marks;

    public:
    student(string vname = "N.A.", int vrn =0 ,int vmarks=0):name(vname),rollno(vrn),marks(vmarks){}

};

int main()
{
    int n;
    cout<<"Enter number of student:"<<endl;
    cin>>n;
    student * s = new student[n];// array of pointer to student objects
    student[0]=new student("Himanshu",1, 89);
    student[1]=new student("Gurmeet",2, 96);
    student[2]=new student("Akhil",3, 90);
    student[3]=new student("Ayush",4, 85);
    student[4]=new student("Shivansh",5, 87);

    int choice;
    do{
        cout<<"\n********student database system********"<<endl;
        cout<<"\n1.Add student details."<<endl;
        cout<<"\n2.Delete student details."<<endl;
        cout<<"\n3.View student details."<<endl;
        cout<<"\n4.Exit"<<endl;
        cout<<"\nEnter choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: 
                cout<<"Enter Name , Rollno and marks.";
                cin>>
            case 2:
                cout<<"Enter the room number to book: ";
                cin>>roomNum;
                found = false;
                for(int i = 0 ; i < numberofRooms ;++i)
                {
                    if(hotelRooms[i]->roomNumber == roomNum)
                    {
                        hotelRooms[i]->bookRoom();
                        found = true;
                        break;
                    }
                }
                if(!found)
                {
                    cout<<"Room Number "<<roomNum<<" does not exist."<<endl;
                }
                break;
            case 3: 
                 cout<<"\nAvailable Rooms: \n";
                cout<<"Room Number: "<<setw(10)<<"Type : "<<setw(10)<<"Price(INR)"<<setw(20)<<"Availability : "<<setw(10)<<endl;
                for(int i = 0 ; i <numberofRooms ; ++i)
                {
                    hotelRooms[i]->displayRoomInfo();
                }
                break;

            case 4: 
                cout<<"Exiting the system.Thank you"<<endl;
                break;

            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }

    }while(choice != 4);


    return 0;
}