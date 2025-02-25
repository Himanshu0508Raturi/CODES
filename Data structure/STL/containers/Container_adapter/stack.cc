#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(5);
    st.push(6);
    // // for(auto it = st.begin(); it != st.end() ; it++)
    // // {
    // //     cout<<*it<<" ";
    // // }

    // cout << st.size();
    // while (!st.empty())
    // {
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // stack<int> st1;
    // st1.push(10);
    // st1.push(20);
    // cout << st1.top() << endl;
    // st.swap(st1);
    // cout << st1.top() << endl;
    stack<int> st1;
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    stack<int> st2;
    st2.push(100);
    st2.push(200);
    st2.push(300);
    st2.push(400);
    cout << "Before swapping: " << endl;
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << "\n";
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    st1.push(10);
    st1.push(20);
    st1.push(30);
    st1.push(40);
    st2.push(100);
    st2.push(200);
    st2.push(300);
    st2.push(400);
    st1.swap(st2); // swap
    cout << "\nAfter swapping: " << endl;
    while (!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    cout << "\n";
    while (!st2.empty())
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    return 0;
}