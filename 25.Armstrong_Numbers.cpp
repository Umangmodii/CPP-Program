// Armstrong numbers
// 371 = (3*3*3) + (7*7*7) + (1*1*1)

#include <iostream>

using namespace std;

int main()
{
    int n;
    int rem;
    int sum = 0;

    cout << "Enter the Armstrong Number : ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }

    int temp;

    if (temp = sum)
    {
        cout << "Number is Armstrong. ";
    }

    else
    {
        cout << "Number is Not Armstrong. ";
    }

    return 0;
}