// 13.Check Leap Year
// 400

#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter the Year : ";
    cin >> year;

    // leap year if perfectly divisible by 400
    if (year % 400 == 0)
    {
        cout << year << " Leap Year.";
    }

    // not a leap year if divisible by 100
    // but not divisible by 400

    else if (year % 100 == 0)
    {
        cout << year << " Not Leap Year.";
    }

    // leap year if not divisible by 100
    // but divisible by 4
    else if (year % 4 == 0)
    {
        cout << year << " Leap Year.";
    }

    else
    {
        cout << year << " Not Leap Year.";
    }

    return 0;
}