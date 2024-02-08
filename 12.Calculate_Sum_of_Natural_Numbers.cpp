// 12. Calculate Sum of Natural Numbers
// 1 + 2 + 3 = 6

#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter the Numbers : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum is : " << sum;

    return 0;
}