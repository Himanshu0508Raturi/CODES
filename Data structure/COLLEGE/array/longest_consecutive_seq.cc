// You are given an array of ‘N’ integers. You need to find the length of the longest sequence which contains the consecutive elements.
//  arr[] = {102 , 4 , 100 , 1, 101 , 3 , 2, 1 , 1 }
//  ans= 4.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = arr.size();
    int count = 0;
    sort(arr.begin(), arr.end());
    for(auto it = arr.begin() ; it != arr.end() ; it++)
    {
        cout<<*it<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            if (arr[i] + 1 == arr[i + 1])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}