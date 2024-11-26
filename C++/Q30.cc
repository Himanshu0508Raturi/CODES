#include <iostream>
#include <fstream>
#include <string.h>
#include <cstdlib>
using namespace std;
int main()
{
    int noc = 0, now = 0, nol = 0;
    ifstream fin;
    char fname[20], ch;
    cout << "\n Enter Source File Name : ";
    cin >> fname;
    fin.open(fname, ios::in);

    if (!fin)
    {
        cout << "\n Invalid File Name. \n No such File or Directory ";
        exit(0);
    }

    while (fin)
    {
        if (ch != ' ' && ch != '\n')
            noc++;
        if (ch == ' ')
            now++;
        if (ch == '\n')
        {
            nol++;
            now++;
        }
        fin.get(ch);
    }
    fin.close();
    cout << " -------------------------------------";
    cout << "\n Total No. of Characters  : " << noc + 1;
    cout << "\n Total No. of Words       : " << now;
    cout << "\n Total No. of Lines       : " << nol;
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}