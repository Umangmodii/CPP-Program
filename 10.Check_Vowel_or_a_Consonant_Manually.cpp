// 10. Check Vowel or a Consonant Manually

#include <iostream>

using namespace std;

int main()
{
    char c;
    int lowercase, uppercase;

    cout << "Enter the Number : ";
    cin >> c;

    // Lower Case Vowels Find
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        cout << "Number is Vowels";
    }

    // Upper case Vowels Find
    else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        cout << "Number is Vowels";
    }

    else
    {
        cout << "Error! Invalid Numbers.";
    }

    return 0;
}