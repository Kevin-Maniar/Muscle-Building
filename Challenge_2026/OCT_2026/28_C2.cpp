
#include <iostream>
#include <cstdlib>
using namespace std;

class DigitTool
{
private:
    int number;

public:
    DigitTool(int n)
    {
        number = n;
    }

    int reverseNumber()
    {
        int temp = abs(number);
        int reverse = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp = temp / 10;
        }

        return reverse;
    }

    bool isPalindrome()
    {
        return abs(number) == reverseNumber();
    }

    int countDigits()
    {
        int temp = abs(number);
        int count = 0;

        if (temp == 0)
            return 1;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }

        return count;
    }
};

int main()
{
    DigitTool tool(1234);

    cout << "Reversed: " << tool.reverseNumber() << endl;
    cout << "Palindrome: "
         << (tool.isPalindrome() ? "Yes" : "No") << endl;
    cout << "Digit count: " << tool.countDigits() << endl;

    return 0;
}
