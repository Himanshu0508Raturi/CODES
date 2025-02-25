#include <bits/stdc++.h>
using namespace std;
int main()
{
    // unique+sorted.
    unordered_map<int, int> mp;
    mp.insert({1, 100});
    mp.insert({1, 100});
    mp.insert({2,200});
    for(auto i: mp)
    {
        cout<<i.first<<" "<<i.second<<" "<<endl;
    }
    cout << mp.size() << endl;
    // make pair function.
    mp.insert({1, 200});
}
