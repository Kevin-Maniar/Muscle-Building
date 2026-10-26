// st 4.43 pm end 5.35 first mistake took array of 10 int
#include<iostream>
using namespace std;

class NumberAnalyzer
{
    private:
    int number;

    public:

    NumberAnalyzer()
    {
        cout<<"------------------------"<<endl;
        cout<<"Enter number : ";
        cin>>number;
        cout<<"------------------------"<<endl;
    }

    void check_num()
    {
        if(number > 0)
        {
            cout<<"Number is Positive"<<endl;
        }

        else if(number <0)
        {
            cout<<"Number is Negative"<<endl;
        }

        else
        {
            cout<<"Number is Zero"<<endl;
        }
        cout<<"------------------------"<<endl;
    }

    void check_odd_even()
    {
        if (number % 2 == 0 )
        {
            cout<<"Number is Even"<<endl;
        }
        else
        {
            cout<<"Number is Odd"<<endl;
        }
        cout<<"------------------------"<<endl;
    }

    void sum_()
    {
        int total = 0;

        int temp = abs(number);

        while(temp > 0)
        {
            int digit = temp % 10;
            total += digit;
            temp = temp/10;  
        }
        cout<<"Total of Digit = "<<total;
    }
};
int main()
{
    NumberAnalyzer ob;
    // ob.ask_number();
    ob.check_num();
    ob.check_odd_even();
    ob.sum_();
    return 0;
}