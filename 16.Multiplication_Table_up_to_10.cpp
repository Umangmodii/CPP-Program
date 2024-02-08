// 16. Multiplication Table up to 10

#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}
