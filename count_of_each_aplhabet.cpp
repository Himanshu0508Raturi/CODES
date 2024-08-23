//to find out the count of each alphabet.
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string str;
    int i,count[26]={0};
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    for(i=0;i<26;i++)
    {
        count[str[i] - 97]++;
    }
    for(i=0;i<26;i++)
    {
        if(count[i] != 0)
        {
        cout<<" "<<(char)(97+i)<<setw(5)<<" "<<count[i]<<endl;
        }
    }

}