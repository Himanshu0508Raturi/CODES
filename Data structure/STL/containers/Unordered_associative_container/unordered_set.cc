#include <bits/stdc++.h>
using namespace std;
int main()
{
    // unique + unsorted
    //tc = O(n);
    unordered_set<int> us;
    us.insert(1);
    us.insert(1);
    us.insert(3);
    us.insert(3);
    cout << us.size() << endl;
    for (auto it = us.begin(); it != us.end(); it++)
    {
        cout << *it << " ";
    }
    // upperbound and lower bound  does not work.
}