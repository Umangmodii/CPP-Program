// 32.Max_Array.cpp

#include <iostream>

using namespace std;

int main()
{
    int n;
    int array[100];

    cout << "Enter the Number : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "Enter the Number : ";
        cin >> array[i];
    }

    for (int i = 1; i < n; i++)
    {
        int max = array[i];

        if (array[0] < array[i])
            array[0] = array[i];
}

        cout << "The Maximum number is : " << array[0];

    return 0;
}