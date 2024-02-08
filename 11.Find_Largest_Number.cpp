// 11.Find Largest Number

#include <iostream>

using namespace std;

int main()
{
    int A, B, C;
    int c;

    cout << "Enter the Numbers : ";
    cin >> A >> B >> C;

    if (A >= B && B >= C)
    {
        cout << "Number is Largest." << A;
    }

    else if (B >= A && B >= C)
    {
        cout << "Number is Largest." << B;
    }

    else
    {
        cout << "Number is Largest." << C;
    }

    return 0;
}