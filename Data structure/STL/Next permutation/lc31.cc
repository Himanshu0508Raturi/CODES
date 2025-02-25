#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1,2,3};
    next_permutation(vec.begin() , vec.end());
    for(auto it = vec.begin() ; it != vec.end() ; it++)
    {
        cout<<*it<<" ";
    } 
}