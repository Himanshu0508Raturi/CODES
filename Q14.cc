/*14 & 15. Develop a class Score that tracks a player's score in a game. Implement the 
following: 
1. Data Member: 
     An int data member to store the score. 
2. Constructors: 
     A default constructor to initialize the score to 0. 
     A parameterized constructor to initialize the score to a specific value. 
3. Overloaded Operators: 
     Overload the pre-increment (++) operator to increase the score by 10 points 
    and return the updated object. 
     Overload the post-increment (++) operator to increase the score by 10 points 
    but return the original object before the increment. 
4. Main Function: 
     Create a Score object, demonstrate the use of both pre-increment and post
increment operators, and display the score after each operation. 
Output: 
Score s1(50); ++s1; // Score becomes 60  
s1++;  // Score becomes 70, but previous value is returned  
cout << s1 << endl; // Should display 70 */
#include<iostream>
using namespace std;
class Score
{
    private:
    int score;

    public:
    Score()
    {
        score=0;
    }
    Score(int x)
    {
        score = x;
    }
    void print()
    {
        cout<<score<<endl;
    }
    // overloading pre incerement operator.
    Score operator ++()
    {
        ++score;
    }
    // overloading post increament.
    Score operator++(int)
    {
        score++;
    }
     // overloading pre decrement operator.
    Score operator --()
    {
        --score;
    }
    // overloading post decrement operator.
    Score operator--(int)
    {
        score--;
    }

};

int main()
{
    Score s1(50);
    s1.print();
    ++s1;
    s1.print();

    Score s2(50);
    s2++;
    s2.print();

    Score s3(50);
    --s3;
    s3.print();

    Score s4(50);
    s4--;
    s4.print();
    return 0;
}