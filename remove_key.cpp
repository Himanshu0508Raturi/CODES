#include<iostream>
#include<string>
using namespace std;
void remove_key(string str,char key,string *new_str)
{
    int i;
    for(i=0; i<str.length();i++)
    {
        if(key != str[i])
        {
            *new_str += str[i];
        }
    }
}
int main()
{
    string str,new_str;
    char key;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    cout<<"Enter a key"<<endl;
    cin>>key;
    remove_key(str,key,&new_str);
    cout<<new_str;
    return 0;
}