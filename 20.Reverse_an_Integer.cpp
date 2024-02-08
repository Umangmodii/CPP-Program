// 20.Reverse_an_Integer.cpp

#include <iostream>

using namespace std;

int main()
{
    int n;
    int rem;
    int reverse = 0;

    cout << "Enter the Number : ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    cout << "The Reversed number is: " << reverse;

    return 0;
}