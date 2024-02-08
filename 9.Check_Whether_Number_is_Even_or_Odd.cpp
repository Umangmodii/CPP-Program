// 9.Check_Whether_Number_is_Even_or_Odd.cpp

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    // if (n % 2 == 0)
    // {
    //     cout << "Number is Even.";
    // }

    // else
    // {
    //     cout << "Number is Odd.";
    // }

    // Ternary Operator
    (n % 2 == 0) ? cout << "Number is Even." : cout << "Number is Odd.";

    return 0;
}