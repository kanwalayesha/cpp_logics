#include <iostream>
using namespace std;

int main()
{
    int number, original;
    int digit, sum = 0;

    cout << "Enter number: ";
    cin >> number;

    original = number;

    while (number > 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }

    if (sum == original)
    {
        cout << "Yes, Armstrong Number";
    }
    else
    {
        cout << "No, Not an Armstrong Number";
    }

    return 0;
}