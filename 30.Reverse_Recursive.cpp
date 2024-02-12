// 30.Reverse_Recursive.cpp

#include <iostream>
#include <string>

using namespace std;

// Create a new Function

int reverse(string str)
{
    int n = str.size();

    if (n == 1)
    {
        cout << str << " ";
    }

    else
    {
        cout << str[n - 1];
    }

    return reverse(str.substr(0, n - 1));
}

int main()
{
    string str;

    cout << "Enter the String : ";
    getline(cin, str);

    // Create a new Function
    int ans = reverse(str);

    return 0;
}