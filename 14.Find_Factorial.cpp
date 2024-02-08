// 14. Find Factorial
// Enter : 120
// 5 * 4 * 3 * 2 * 1 = 120

#include <iostream>

using namespace std;

int main()
{
    int n, fact = 1;

    cout << "Enter the Factorial Number : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

     cout << "Factorial number is : " << fact << endl;

    return 0;
}