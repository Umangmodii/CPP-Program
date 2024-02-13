// 33.Array_Elements_Using_Pointer.cpp

#include <iostream>

using namespace std;

int main()
{
    int data[5];

    cout << "Enter the Number : ";

    for (int i = 0; i <= 5; i++)
    {
        cin >> data[i];
    }

    cout << "Enter the Number : ";

    for (int i = 0; i <= 5; i++)
    {
        cout << endl << *(data + i);
    }

    return 0;
}