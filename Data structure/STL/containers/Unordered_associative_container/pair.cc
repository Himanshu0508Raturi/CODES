#include <iostream>
#include<bits\stdc++.h>
using namespace std;
int main()
{
    /*pair<int, int> t; // by default value is 0;

    cin >> t.first >> t.second;
    cout << t.first << t.second; */


    /*pair<int, int> p = {1, 2};
    pair<int, char> p1 = {1, 'a'};
    cout << p1.first << " " << p1.second;*/


    /* pair r(1,'a');
    cout<<r.first<<" "<<r.second;
    pair s(r); */

    // function to make a pair.
    /*pair<int, int> q;
    q = make_pair(7, 8);
    cout << q.first << " " << q.second << "\n";*/

    //pair of pair
    /*pair<int, pair<int, int>> pair1 = {1, {3, 4}};
    cout << pair1.first << " " << pair1.second.second << " " << pair1.second.first;
    pair<int,pair<int,pair<int,int>>>pop = {10,{20,{30,40}}};
    cout<<pop.first<<endl<<pop.second.first<<endl<<pop.second.second.first<<endl<<pop.second.second.second<<endl;*/


    //swapping in pair
    /* pair<int ,int>p1={100,200};
    pair<int ,int>p2={300,400};
    cout<<"Before swapping values are: \np1: "<<p1.first<<" "<<p1.second<<" "<<"p2: "<<p2.first<<" "<<p2.second;
    p1.swap(p2);
    cout<<"\nAfter swapping values are: \np1: "<<p1.first<<" "<<p1.second<<" "<<"p2: "<<p2.first<<" "<<p2.second; */


    //array of pair
     pair<int,int>arr[]={{1,2},{3,4},{5,6}};
    // cout<<arr[0].first<<" "<<arr[0].second<<"\n";
    // cout<<arr[1].first<<" "<<arr[1].second<<"\n";
    // cout<<arr[2].first<<" "<<arr[2].second<<"\n";
    for(int i = 0 ; i<3 ; i++)
    {
        cout<<arr[i].first<<arr[i].second<<endl;
    }
    return 0;
}