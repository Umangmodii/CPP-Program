// 35.Copy_String.cpp

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter the Number : ";
    getline(cin, s1);

    s2 = s1;

    cout << "The String S1 is : " << s1 << endl;
    cout << "The String S2 is : " << s2;

    return 0;
}