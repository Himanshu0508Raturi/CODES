//to find the maximum and minimum occurance of a alphabet in a string.
#include<iostream>
#include<string>
using namespace std;
void min_max(int a[])
{
    int i,j,min=a[0],min_ind,max=a[0],max_ind;
    //finding min occurance
    for(i=1;i<26;i++)
    {
        if(a[i] < min && a[i] != 0)
        {
            min=a[i];
            min_ind=i;
            break;
        }
    }
    cout<<"Element with least occurance are: "<<endl;
    for(i=0;i<26;i++)
    {
        if(a[min_ind] == a[i])
        {
            cout<<" "<<(char)(97+i)<<endl;
        }
    }
    
      for(i=1;i<26;i++)
    {
        if(a[i] > max)
        {
            max=a[i];
            max_ind=i;
            break;
        }
    }
    cout<<"Element with maximun occurance are: "<<endl;
    for(i=0;i<26;i++)
    {
        if(a[max_ind] == a[i])
        {
            cout<<" "<<(char)(97+i)<<endl;
        }
    }
    
}
void occurance(string str)
{
    int count[26]={0},i;
    for(i=0 ; i< str.length() ; i++)
    {
        count[str[i] - 97]++;
    }
    min_max(count);
}

int main()
{
    string str;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    occurance(str);
    
    return 0;
}