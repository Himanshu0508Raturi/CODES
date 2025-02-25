// multiple elements can have same keys but sorted.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    multimap<int, int> mp = {{1, 100}, {1, 200}, {3, 700}};
    cout << mp.size() << endl;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " ";
    }
    // for easily for each loop.
    auto it = mp.begin();
    cout << it->first << it->second << endl;
}