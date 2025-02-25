#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(9);
    st.push(1);
    st.push(56);
    st.push(-9);
    st.push(10);
    cout << "Stack top is: " << st.top() << endl;
    st.pop();
    cout << "Stack top is: " << st.top() << endl;
    if (st.empty())
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty.";
    }
    return 0;
}