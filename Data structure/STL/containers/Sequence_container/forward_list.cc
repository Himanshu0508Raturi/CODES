#include <iostream>
#include <forward_list>
using namespace std;
int main()
{
    forward_list<int> flist = {1, 2, 3, 4, 5}; // work like singly link list.
    flist.push_front(6);
    flist.pop_front();
    // insert after function.
    flist.insert_after(flist.begin(), 2, 100); // insertion at random not possible . only sequential acccess possible.
    flist.clear();                             // clear all the list.
    // include all function of vector.
}