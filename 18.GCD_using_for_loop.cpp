// 18.GCD_using_for_loop.cpp

#include <iostream>

using namespace std;

int main()
{
    int A, B;
    int ans;

    cout << "Enter the Number A : ";
    cin >> A;

    cout << "Enter the Number B : ";
    cin >> B;

    // Swap Numbers greather

    if (B > A)
    {
        int temp = A;
        A = B;
        B = temp;
    }

    // Check the Condition

    for (int i = 1; i < A; i++)
    {
        if (A % i == 0 && B % i == 0)
        {
            ans = i;
        }
    }

    cout << "The Answer is : " << ans;

    return 0;
}