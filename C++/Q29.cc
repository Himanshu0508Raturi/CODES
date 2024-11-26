#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main()
{
    ifstream inputFile("source.txt");
    ofstream outputFile("destination.txt");
    if (!inputFile.is_open() || !outputFile.is_open())
    {
        cerr << "Error opening file!" << std::endl;
        return 1;
    }
    char ch;
    while (inputFile.get(ch))
    {
        if (isalpha(ch))
        {
            // Change the case: lowercase to uppercase, uppercase to lowercase
            ch = islower(ch) ? toupper(ch) : tolower(ch);
        }
        outputFile.put(ch);
    }
    std::cout << "File copied with case conversion." << std::endl;
    inputFile.close();
    outputFile.close();
    cout << "************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}