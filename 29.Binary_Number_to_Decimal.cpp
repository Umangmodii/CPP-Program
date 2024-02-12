// // Convert to Binary Number to Decimal

#include <iostream>
#include <cmath>

using namespace std;

int convert(int n)
{
    int rem;
    int i=0;
    int decimal = 0;

    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        decimal += rem * pow(2, i);
        i++;
    }

    return decimal;
}

int main()
{
    int n;

    cout << "Enter the Binary Number : ";
    cin >> n;

    convert(n);

    cout << n << " in binary = " << convert(n) << " in decimal.";

    return 0;
}