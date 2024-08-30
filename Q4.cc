/*Write a C++ program to sort a given array of 0s, 1s and 2s. In the final array put 
all 0s first, then all 1s and all 2s in last. 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    int i,j;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"After sorting array become."<<endl;
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}