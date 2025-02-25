#include <bits/stdc++.h>
using namespace std;
int main()
{
    // sorted and duplicate value.
    multiset<int> ms;
    ms.insert(10);
    ms.insert(22);
    ms.insert(10);
    ms.insert(22);
    cout << ms.size() << endl;
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << endl;
    }
    cout << ms.count(22) << endl;
    cout << *ms.find(22) << endl;
    ms.erase(ms.find(22));//find and erase one of the 22.
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }

    ms.erase(ms.find(2) , ms.find(1));
    //all function of vectors.
}