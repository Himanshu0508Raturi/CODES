/*  Anna is competing to be the top student in her high school. She wants to know how 
many of her classmates scored higher than she did on their exams this semester. 
You need to create a class named Student with the following features: 
Data Members: 
An array scores[5] that stores a student's scores for 5 exams. 
Member Functions: 
A void input() function that reads 5 exam scores and stores them in the scores array. 
An int calculateTotalScore() function that calculates and returns the sum of the scores 
in the scores array.*/
#include<iostream>
#include<iomanip>
using namespace std;
class student
{
    public: 
    int score[5];

    public:
    void input()
    {
        cout<<"Enter scores of 5 exam for a student: ";
        for(int i = 0 ; i<5 ; i++)
        {
            cin>>score[i];
        }
    
    }
    int calculateTotalScore()
    {
        int sum = 0 ;
        for(int i = 0 ; i < 5 ; i++)
        {
            sum += score[i];
        }
        return sum;
    }

};
int main()
{
    int n,i;
    cout<<"Enter number of student: ";
    cin>>n;
    student s1[n];
    for(i = 0 ; i<n ;i++)
    {
        s1[i].input();
    }
    int anna_sc=s1[0].calculateTotalScore();
    int count_high_sc = 0;
    for(i = 1 ; i< n ;i++)
    {
        if(s1[i].calculateTotalScore() > anna_sc)
        {
            count_high_sc++;
        }
    }
    cout<<setw(15)<<"Sub 1 "<<setw(10)<<"Sub 2 "<<setw(10)<<"sub 3 "<<setw(10)<<"sub 4"<<setw(10)<<"sub 5 "<<setw(10)<<"Total marks"<<endl;
    for(i = 0 ; i< n ;i++)
    {
        cout<<"Student "<<i+1<<":";
        for(int j= 0 ; j< 5 ;j++)
        {
            
            cout<<s1[i].score[j]<<setw(10);
            
        }
        cout<<s1[i].calculateTotalScore();
        cout<<"\n";
    }
    cout<<count_high_sc<<endl;

    return 0;
}