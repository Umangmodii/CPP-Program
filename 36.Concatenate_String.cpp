// 36.Concatenate_String.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter the S1 : ";
    getline(cin, s1);

    cout << "Enter the S2 : ";
    getline(cin, s2);

    string concat = s1 + s2;

    cout << "The String is : " << concat;

    return 0;
}