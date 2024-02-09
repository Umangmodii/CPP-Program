// Palindrome Number

#include <iostream>

using namespace std;

int main()
{
    int n, number;
    int reverse = 0;
    int rem;

    cout << "Enter the Number : ";
    cin >> number;

    while (number > 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }

    cout << "The reverse of the number is: " << reverse << endl;

    if (n == reverse)
    {
        cout << " The number is a palindrome.";
    }
    else
    {
        cout << " The number is not a palindrome.";
    }
    return 0;
}