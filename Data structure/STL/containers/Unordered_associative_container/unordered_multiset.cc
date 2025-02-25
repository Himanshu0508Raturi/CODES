#include <bits/stdc++.h>
using namespace std;
int main()
{
    // duplicate values + unsorted
    unordered_multiset<int>ums;
    ums.insert(1);
    ums.insert(3);
    ums.insert(5);
    ums.insert(3);
    ums.insert(1);
    cout<<ums.size()<<endl;
    //upperbound and lower bound not work.
    
    
}