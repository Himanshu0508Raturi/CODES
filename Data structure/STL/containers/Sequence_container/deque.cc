#include <iostream>
#include <deque>
using namespace std;
int main()
{
    // deque vs list
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);
    for (auto i = dq.begin(); i != dq.end(); i++)
    {
        cout << *(i) << " ";
    }
    dq.pop_back();
    dq.pop_front();
}
