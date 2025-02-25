#include<iostream>
#include<list>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.pop_back();
    ls.push_front(3);
    ls.push_front(4);
    ls.push_front(4);
    ls.push_front(4);
    //support all function of vector.
    for(auto it = ls.begin(); it != ls.end() ; it++)
    {
        cout<<*(it);
    }
    ls.remove(4);
    for(auto it = ls.begin(); it != ls.end() ; it++)
    {
        cout<<*(it);
    }

}