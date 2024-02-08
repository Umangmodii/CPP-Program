// 4. Find Quotient and Remainder

// Solution is : / and %

#include <iostream>

using namespace std;

int main()
{
    int Quotient, Divided;
    int Remainder, divisor;

    cout << "Enter the Divided : ";
    cin >> Divided;

    cout << "Enter the Divisor :";
    cin >> divisor;

    Quotient = Divided / divisor;
    Remainder = Divided % divisor;

    cout << "The Quotient is : " << Quotient << endl;
    cout << "The Remainder is : " << Remainder << endl;

    return 0;
}
