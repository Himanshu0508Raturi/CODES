#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Room
{
    public:
    int roomNumber;
    string type;
    float price;
    bool isAvailable;

    Room(int rNum , string rType , float rprice)
    {
        roomNumber = rNum;
        type = rType;
        price = rprice;
        isAvailable = true; // initially all room are available.
    }
    void displayRoomInfo()
    {   
        //cout<<"Room Number: "<<setw(10)<<"Type : "<<setw(10)<<"Price(INR)"<<setw(20)<<"Availability : "<<setw(10)<<endl;
        cout<<roomNumber<<setw(10)<<type<<setw(10)<<price<<setw(20)<<(isAvailable?"Available" : "Booked")<<setw(10)<<endl;

    }
    void bookRoom()
    {
        if(isAvailable)
        {
            isAvailable=false;
            cout<<"Room "<<roomNumber<<" has been successfully booked.";
        }else
        {
            cout<<"Sorry, Room "<<roomNumber<<" has not been booked.";
        }
    }
    void cancelRoom()
    {
        if(!isAvailable)
        {
            isAvailable=true;
            cout<<"Room "<<roomNumber<<" has been successfully cancel.";
        }else
        {
            cout<<"Sorry, Room "<<roomNumber<<" is not booked so cannot be cancel!";
        }
    }
};

int main()
{
    const int numberofRooms = 5;
    Room* hotelRooms[numberofRooms];// array of pointer to room objects
    //initialize the rooms
    hotelRooms[0] = new Room(101,"single", 50.0);
    hotelRooms[1] = new Room(102,"single", 50.0);
    hotelRooms[2] = new Room(201,"double", 80.0);
    hotelRooms[3] = new Room(202,"double", 80.0);
    hotelRooms[4] = new Room(301,"suite", 150.0);
    int roomNum;
    bool found;
    int choice;
    do{
        cout<<"\n********Hotel Room Booking system********"<<endl;
        cout<<"\n1.Display All rooms"<<endl;
        cout<<"\n2.Book a room"<<endl;
        cout<<"\n3.Cancel booking"<<endl;
        cout<<"\n4.Exit"<<endl;
        cout<<"\nEnter choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1: 
                cout<<"\nAvailable Rooms: \n";
                cout<<"Room Number: "<<setw(10)<<"Type : "<<setw(10)<<"Price(INR)"<<setw(20)<<"Availability : "<<setw(10)<<endl;
                for(int i = 0 ; i <numberofRooms ; ++i)
                {
                    hotelRooms[i]->displayRoomInfo();
                }
                break;
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
                cout<<"Enter the room number to cancel: ";
                cin>>roomNum;
                found = true;
                for(int i = 0 ; i < numberofRooms ;++i)
                {
                    if(hotelRooms[i]->roomNumber == roomNum)
                    {
                        hotelRooms[i]->cancelRoom();
                        found = false;
                        break;
                    }
                }
                if(found)
                {
                    cout<<"Room Number "<<roomNum<<" does not exist."<<endl;
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