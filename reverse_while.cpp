#include <iostream>
using namespace std;

int main()
{
    int number, last_digit, reverse = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number > 0)
    {
        last_digit = number % 10;          // Get last digit
        
        reverse = reverse * 10 + last_digit; // Build reverse number
        number = number / 10;              // Remove last digit
    }

    cout << "The reverse of the number is: " << reverse << endl;

    return 0;
}