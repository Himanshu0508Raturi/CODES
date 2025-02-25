#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
    // pair<int,char> p;
    // p.first = 10;
    // p.second = 'a';
    // cout<<p.first<<" "<<p.second<<endl;

    // pair<string,string> p;
    // p.first = " Dehradun";
    // p.second = "Delhi";
    // cout<<p.first<<" "<<p.second<<endl;

    pair<pair<string, string>, int> city; // replace p with city
    city.first.first = "Dehradun";
    city.first.second = "Delhi";
    city.second = 200;
    cout << city.first.first << " to " << city.first.second << " is " << city.second << " km" << endl;

    // // making vector of pair.
    // vector<pair<pair<string,string>int>>;
    return 0;
}