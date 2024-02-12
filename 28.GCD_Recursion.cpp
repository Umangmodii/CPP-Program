// 28.GCD_Recursion.cpp

#include <iostream>

using namespace std;

// Call Function

int GCD(int n1, int n2)
{
    if (n2 != 0)
    {
        return GCD(n2, n1 % n2);
    }

    else
    {
        return n1;
    }
}

int main()
{
    int n1, n2;

    cout << "Enter the Number N1 : ";
    cin >> n1;

    cout << "Enter the Number N2 : ";
    cin >> n2;

    int ans = GCD(n1, n2);

    cout << "The GCD Number is : " << ans;

    return 0;
}