#include<iostream>
#include<string>
using namespace std;
void Non_repeating_char(string str)
{
    int count[26]={0},i; //count[256] for all 
    for(i=0;i<str.length();i++)
    {
        count[str[i] - 97]++;
    }
    cout<<"Non repeating characters are"<<endl;
    for(i=0;i<26;i++)
    {
        if(count[i] == 1)
        {
            cout<<(char)(97+i);
            cout<<"\n";  
        }
    }
}
int main()
{
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    Non_repeating_char(str);
    
    return 0;
}