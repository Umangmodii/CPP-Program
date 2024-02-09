// This program takes two numbers from the user (a base number and an exponent) and calculates the power.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int base;
    int exponent;
    int result;

    cout << "Enter the Base Value : ";
    cin >> base;

    cout << "Enter the Exponent Value : ";
    cin >> exponent;

    result = pow(base, exponent);

    cout << "\n";

    cout << "The Power values is : " << result;

    return 0;
}