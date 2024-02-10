// Prime NUmbers or Not

#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Enter the Prime Number : ";
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        cout << "\n" << n << " is a prime number.\n";
    }

    else
    {
        cout << n << " is not a prime number.\n";
    }

    return 0;
}