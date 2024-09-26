/*20.  Develop a simulation for an autonomous vehicle. Create a base class Vehicle with
properties like speed and fuelLevel. Then, derive LandVehicle and FlyingVehicle, where each
has unique attributes like wheelCount and altitude. Create a FlyingCar class that inherits from
both LandVehicle and FlyingVehicle, demonstrating how a flying car would combine the
capabilities of land and aerial vehicles. */
#include <iostream>
using namespace std;

class vehicle
{
public:
    int Speed;
    int FuelLevel;

    vehicle(int sp = 0, int fl = 0) : Speed(sp), FuelLevel(fl) {}
    void display()
    {
        cout << "Speed: " << Speed << " km/hr " << "\n" << "Fuel Level: " << FuelLevel << "%" << endl;
    }
};
class LandVehicle : virtual public vehicle
{
public:
    int WheelCount;

    LandVehicle(int sp = 0, int fl = 0, int wheel_c = 0) : vehicle(sp, fl), WheelCount(wheel_c) {}

    void display_land()
    {
        display();
        cout << "Wheel Count: " << WheelCount << endl;
    }
};
class FlyingVehicle : virtual public vehicle
{
public:
    int altitude;

    FlyingVehicle(int sp = 0, int fl = 0, int alt = 0) : vehicle(sp, fl), altitude(alt) {}
    void display_Flying()
    {
        display();
        cout << "Altitude: " << altitude << " km" << endl;
    }
};
class FlyingCar : virtual public LandVehicle, virtual public FlyingVehicle
{
public:
    FlyingCar(int sp = 0, int fl = 0, int w_c = 0, int altt = 0) : vehicle(sp, fl), LandVehicle(sp, fl, w_c), FlyingVehicle(sp, fl, altt) {}
    void display_Flying_car()
    {
        cout<<"The car is moving at a speed of "<<Speed<<"km/hr With Fuel level "<<FuelLevel<<"% and wheel count "<<WheelCount<<" at an altitude of "<<altitude<<"km."<<endl;
    }
};
int main()
{

    LandVehicle xuv(20, 45, 4);
    cout << "Land Vehicle:-"<< endl;
    xuv.display_land();

    FlyingVehicle helicopter(1500, 70, 15000);
    cout << "\n"<< "Flying Vehicle:-" << endl;
    helicopter.display_Flying();

    FlyingCar tesla(500, 60, 4, 1500);
    cout <<  "\n"<<"Flying_Car:-"  << endl;
    tesla.display_Flying_car();
    cout << "\n";
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}