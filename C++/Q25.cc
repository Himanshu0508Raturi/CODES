/*Develop an abstract class Ride with a pure virtual function calculateFare(). Derive classes
like StandardRide, PremiumRide, and CarpoolRide, each implementing calculateFare() based on
unique pricing models.*/
#include <iostream>
using namespace std;
class Ride
{
public:
    float distance;
    int rate;
    Ride(float d, int r) : distance(d), rate(r) {}
    virtual void CalculateFare() = 0;
};
class StandardRide : public Ride
{
public:
    StandardRide(float d = 0, int r = 0) : Ride(d, r) {}
    void CalculateFare()
    {
        cout << "-----WELCOME TO STANDARD RIDE-----" << endl;
        cout << "Total distance Travelled = " << distance << endl;
        cout << "Total fare = " << (rate * distance) << endl;
    }
};
class PremiumRide : public Ride
{
public:
    PremiumRide(float d, int r) : Ride(d, r) {}
    void CalculateFare()
    {
        cout << "-----WELCOME TO PREMIUM RIDE-----" << endl;
        cout << "Total distance travelled = " << distance << endl;
        cout << "Total fare = " << (distance * rate) << endl;
    }
};
class CarpoolRide : public Ride
{
public:
    CarpoolRide(float d, int r) : Ride(d, r) {}
    void CalculateFare()
    {
        cout << "-----WELCOME TO CARPOOL RIDE-----" << endl;
        cout << "Total distance covered = " << distance << endl;
        cout << "Total fare = " << (distance * rate) << endl;
    }
};
int main()
{
    int choice, distance;
    Ride *obj;
    do
    {
        cout << "Enter 1 for Standard Ride" << endl;
        cout << "Enter 2 for Premium Ride" << endl;
        cout << "Enter 3 for Carpool Ride" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter distance travelled = ";
            cin >> distance;
            StandardRide sr(distance, 250);
            obj = &sr;
            obj->CalculateFare();
            break;
        }
        case 2:
        {
            cout << "Enter distance travelled = ";
            cin >> distance;
            PremiumRide pr(distance, 300);
            obj = &pr;
            obj->CalculateFare();
            break;
        }
        case 3:
        {
            cout << "Enter distance travelled = ";
            cin >> distance;
            CarpoolRide cpr(distance, 200);
            obj = &cpr;
            obj->CalculateFare();
            break;
        }
        default:
            cout << "Invalid Choice!" << endl;
        }

        cout << "Press 1 to continue and 2 to exit" << endl;
        cin >> choice;
    } while (choice != 2);
    cout << "*********************************************" << endl;
    cout << "Program Prepared & Executed by : Himanshu Raturi, CSE3(A2), Class Roll no:32" << endl;
    cout << "*********************************************" << endl;
}