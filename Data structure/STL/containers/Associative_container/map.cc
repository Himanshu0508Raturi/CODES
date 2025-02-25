#include <bits/stdc++.h>
using namespace std;
int main()
// map works on pairs.
{
    // map<key,value>;hashing concept from here.
    // no duplicate keys only unique keys.
    // always keys are sorted.
    //TC: O(logn);
    map<int, int> mp; // key,value
    map<int, pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;
    map<int, char> mp3 = { {1, 'a'},
                           {2, 'b'} };
    mp3[3] = 'c';
    mp3.insert({4,'z'});//user inputted.
    for(auto i :mp3)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<mp3.size()<<endl;
}