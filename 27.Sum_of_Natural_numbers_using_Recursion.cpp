// 27.Sum_of_Natural_numbers_using_Recursion.cpp
// Enter 55
// Result: 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10

#include <iostream>

using namespace std;

// Create a Function
int sum(int n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    int ans = sum(n);

    cout << "The Sum of : " << ans;

    return 0;
}