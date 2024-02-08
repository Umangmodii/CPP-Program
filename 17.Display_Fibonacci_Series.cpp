// 17.Display Fibonacci Series

#include <iostream>

using namespace std;

int main()
{
    int n;
    int n1 = 0;
    int n2 = 1;
    int ans;

    cout << "Enter the Fibonacci Numbers : ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << n1 << " ";
        
        ans = n1 + n2;

        n1 = n2;
        n2 = ans;
    }

    return 0;
}