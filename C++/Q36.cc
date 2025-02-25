// count the frequency of word in a sentence using map.
#include <iostream>
#include <map>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string sentence = "the quick brown fox jumps over the lazy dog";
    map<string, int> wordCount;
    string word = ""; // temp variable to store each word
    // parse the string to extract words
    for (char ch : sentence)
    {
        if (isalnum(ch))
        {
            word += ch;
        }
        else if (!word.empty())
        {
            // if a non - alphanumeric character is encoutered , add to word.
            wordCount[word]++;
            word = ""; // reset the word.
        }
    }
    // add the last word if the string ends without  a separator
    if (!word.empty())
    {
        wordCount[word]++;
    }
    // display word frequencies using an iterator.
    cout << "Word Frequencies: " << endl;
    for (auto it = wordCount.begin(); it != wordCount.end(); ++it)
    {
        cout << it->first << ":" << it->second << endl;
    }
    cout << "\n************************************************************" << endl;
    cout << "Executed by: Himanshu Raturi, CSE3(A2), Class Roll no: 32" << endl;
    cout << "************************************************************" << endl;
    return 0;
}
