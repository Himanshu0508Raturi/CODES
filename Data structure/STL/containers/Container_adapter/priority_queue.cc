#include <bits/stdc++.h>
using namespace std;
int main()
{
    // tc for push and pop O(logn);
    // top = O(1);
    // priority_queue<int> pq; // max heap by default.maximum element at top.
    // pq.push(5);             // 5
    // pq.push(1);             // 5,1
    // pq.push(2);             // 5,2,1
    // pq.push(6);             // 6,5,2,1
    // pq.push(3);             // 6,5,3,2,1
    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // cout << endl;
    // cout << pq.top() << endl;
    // pq.pop();
    // cout << pq.top() << endl;




    // for making min heap
    priority_queue<int, vector<int>, greater<int>> pq1; // min heap
    pq1.push(10);
    pq1.push(3);
    pq1.push(32);
    pq1.push(23);
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }

    //cout << pq.top() << endl;
    return 0;
}