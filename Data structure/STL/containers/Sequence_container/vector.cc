#include<bits/stdc++.h>
using namespace std;
void printV(vector<int>v)
{
    for(auto it = v.begin() ; it != v.end() ; it++)
    {
        cout<<*(it)<<" ";
        
    }
    cout<<endl;
}
void printV(vector<char>ch)
{
    for(auto it = ch.begin() ; it != ch.end() ; it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
}
int main()
{
    /*vector<int>vec;
    vec.push_back(1);//push a valur in the vector in the end.
    vec.push_back(2);
    vec.push_back(3);
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2]; */



    //initialization methods.
    /* vector<int>v1={1,2,3,4,5};
    v1.push_back(6);//6 at back of 5.
    vector<int>v2(5,100);//initialized all 5 value to 100;
    cout<<v2[2];
    printV(v1); */



    //initialize one vector from another.
    /*vector<int>v4 = {1,2,3,4,5};
    //Iterator: begin(),end();
    vector<int>v5(v4.begin()+1,v4.end()-2);
    printV(v5);
    //fill function
    vector<int>v6(10);
    fill(v6.begin(),v6.end(),11);//all initialized to value 11.same as line 16.

    // iota method(same as fill), fill in increasing order
    iota(v6.begin() , v6.end(),11);//values like 11,12,13,14,15 */


    //accessing values in a vector.
    /*vector<int>vec = {1,2,3,4,5};
    cout<<vec[2];
    cout<<vec.at(3);
    cout<<vec[3];
    cout<<vec.front()<<vec.back();
    int x = vec.back();
    cout<<x;
    //through iterators.
    cout<<*(vec.begin() +3); */



    //traversing
    /* vector<int>vec = {1,2,3,4,5};
    for(int i = 0 ; i< vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    // //for each loop
    for(auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    //using iterators: actual method.
    for(auto it = vec.begin(); it != vec.end() ; it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // //rbegin() , rend;//reverse
    cout<<endl;
    cout<<"reverse print: ";
    for(auto i = vec.rbegin() ; i != vec.rend();i++)//actual array not change.
    {
        cout<<*(i)<<" ";
    }
    if(vec.empty())
    cout<<"true";
    else
    cout<<"false"; */


    //Insertion.Deletion
    /*vector<char>vec={'a','b','c','d','e','f'};
    vec.push_back('z');
    printV(vec);
    //vec.insert(iterator ,value);
    vec.insert(vec.begin() , 'd');
    vec.insert(vec.end(),'D');
    printV(vec);
    vec.insert(vec.begin() +2, 'd');
    printV(vec);
    vec.insert(vec.end()-2 , 'd');
    printV(vec);

    vec.insert(vec.begin()+1,4,'g');
    printV(vec);
    vector<int>v1={1,2,3,4,5};
    auto first = v1.begin()+1;
    auto last = v1.begin()+3;
    vec.insert(vec.begin(),first,last);
    printV(vec); */


    //deletion 
    //erase
    /*vector<int>vec = {10,20,30,40,50};
    vec.pop_back();//value not return.only delete it
    printV(vec);
    vec.erase(vec.begin()+1);
    printV(vec);
    vec.erase(vec.begin() +1 , vec.begin() +3);
    printV(vec);
    vec.clear() ;// delete all elements vectors.
    printV(vec);*/


    //reversing a vector.
    /* vector<int>vec={1,2,3,4,5};
    // reverse(vec.begin(),vec.end());
    // printV(vec);


    sort(vec.begin(),vec.end());
    printV(vec);
    sort(vec.begin() , vec.end() , greater<>());//sorting in descending order.
    printV(vec);*/




    //swap.
    /*vector<int>vec1 ={10,20,30,40,50};
    vector<int>vec2 = {60,70,80,90,100};
    cout<<"Before Swapping: ";
    printV(vec1);
    printV(vec2);
    swap(vec1,vec2);
    cout<<"After Swapping: ";
    printV(vec1);
    printV(vec2);*/



    //cbegin() , cend() , crbegin() , crend().cbegin and all dont allow modification in data.
    vector<int>vec = {1,3,4,5};
    auto it = vec.begin();//cant use cbegin here.
    *it = 100;
}
