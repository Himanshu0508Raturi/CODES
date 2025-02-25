#include<bits/stdc++.h>
using namespace std;
int main()
{
    //unique value.
    //store in asc and dec value.by default asc. set is created.
    //immutable: cant cange the value.
    set<int>st1;//asc
    st1.insert(1);
    st1.insert(3);
    st1.insert(2);
    st1.insert(1);
    cout<<st1.size()<<endl;
    for(auto it= st1.begin() ; it != st1.end() ; it++)
    {
        cout<<*it<<endl;
    }
    // auto it = st1.begin();
    // *it = 100;immutable;
    //unindexed;
    //st1[1]//inindexed.

    //another declaration.
    
    set<int , greater<int>>st2;//des




    //new methods other than vectors.
    set<int>s = {1,2,3,4};
    //find return iterator(address) if not return end iterator.
    cout<<*s.find(2)<<endl;
    if(s.find(2) != s.end())
    {
        cout<<"Element found";
    }else
    {
        cout<<"Not found";
    }
    //count method;
    cout<<s.count(1);//retuurn 1 or 0.
    //lower bound
    set<int>st = {1,5,3,7};
    cout<<*st.lower_bound(1);//return iterator of nearest upper element or 4
    //upper bound := always give nearest upper element of given number.
    cout<<*st.upper_bound(1);
}