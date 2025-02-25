#include<iostream>
#include<vector>
#include<algorithm> // Required for sort()

using namespace std;
int main()
{
    vector<int> v;//for size v(0,5)
    // for(int i = 0 ; i<5 ; i++)
    // {
    //     v.push_back(i+10);
    // }
    v.push_back(5);
    v.push_back(12);
    v.push_back(6);
    v.push_back(-9);
    v.push_back(45);
    for(int i = 0 ; i<5 ; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"After sorting"<<endl;
    sort(v.begin(),v.end());
     for(int i = 0 ; i<5 ; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}