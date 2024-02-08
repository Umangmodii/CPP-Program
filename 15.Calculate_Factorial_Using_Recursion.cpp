// 15.Calculate_Factorial_Using_Recursion.cpp

#include <iostream>

using namespace std;

int Fact(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    return n * Fact(n-1);
}

int main()
{
    int n;

    cout << "Enter the Factorial Number : ";
    cin >> n;

    int ans = Fact(n);

    cout << "The Factorial number is : " << ans;

    return 0;
}