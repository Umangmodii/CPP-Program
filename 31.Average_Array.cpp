// 31.Average_Array.cpp

#include <iostream>

using namespace std;

int main()
{
    int array[100];
    int n;
    int Average;
    int sum = 0;

    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " Enter the Number : ";
        cin >> array[i];

        sum = sum + array[i];
    }

    if (n < 0 && n > 100)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    Average = sum / n;

    cout << "\nThe average of all entered numbers is: " << Average;

    return 0;
}