/* 
    🎯 Problem statement
    Create a C++ program using a class named NumberAnalyzer that analyzes an integer in three ways. 

    Requirements
        1. Number classification

        - Determine whether the number is positive, negative, or zero.

        2. Even or odd
        - Determine whether the number is even or odd.
        - Remember that zero is even.
        3. Sum of digits
        - Calculate the sum of all digits.
        - For negative numbers, calculate the sum using the digits' absolute values.
        OOP requirements
        - Create a class named NumberAnalyzer.
        - Store the integer in a private data member.
        - Initialize it using a public constructor.
        - Implement three separate public member functions, one for each analysis.
        - Create an object in main() and display the results.
        - Use loops and conditional statements to implement the logic yourself.
*/ // start - 4.05 pm 


#include<iostream>
using namespace std;

class NumberAnalyzer
{
    private:
    int number[10];

    public:
    void ask_number()
    {
        cout<<"------------------------"<<endl;
        for(int i=0;i<10;i++)
        {
            cout<<"Enter number "<<i+1<<" : ";
            cin>>number[i];
        }

        cout<<"------------------------"<<endl;
    }

    void check_num()
    {
        for(int i=0;i<10;i++)
        {
            if(number[i] > 0)
            {
                cout<<"Number "<<i+1<<" is Positive"<<endl;
            }

            else if(number[i] <0)
            {
                cout<<"Number "<<i+1<<" is Negative"<<endl;
            }

            else
            {
                cout<<"Number "<<i+1<<" is Zero"<<endl;
            }
        }
        cout<<"------------------------"<<endl;
    }

    void check_odd_even()
    {
        for(int i=0;i<10;i++)
        {
            if (number[i] % 2 == 0 )
            {
                cout<<"Number "<<i+1<<" is Even"<<endl;
            }
            else
            {
                cout<<"Number "<<i+1<<" is Odd"<<endl;
            }
        }
        cout<<"------------------------"<<endl;
    }

    void sum_()
    {
        int total = 0;
        for(int i=0;i<10;i++)
        {
            total = total + number[i];
        }
        cout<<"Total of all Number:-"<<total<<endl;
        cout<<"------------------------"<<endl;
    }
};
int main()
{
    NumberAnalyzer ob;
    ob.ask_number();
    ob.check_num();
    ob.check_odd_even();
    ob.sum_();
    return 0;
}