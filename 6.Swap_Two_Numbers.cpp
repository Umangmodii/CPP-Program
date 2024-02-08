// 6.Swap Two Numbers

// #include <iostream>

// using namespace std;

// int main()
// {
//     int temp;
//     int A = 10, B = 20;

//     cout << "Before Swap is " << A << " And " << B << endl;

//     temp = A;
//     A = B;
//     B = temp;

//     cout << "After Swap is " << A << " And  " << B;

//     return 0;
// }

// Without Third Variables

#include <iostream>

using namespace std;

int main()
{
    int A = 10, B = 20;

    cout << "Before Swap is " << A << " And " << B << endl;

    A = A + B;
    B = A - B;
    A = A - B;

    cout << "After Swap is " << A << " And " << B << endl;

    return 0;
}