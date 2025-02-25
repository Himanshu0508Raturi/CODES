#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return n + sum(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    int s = sum(n);
    cout << s << endl;
    return 0;
}