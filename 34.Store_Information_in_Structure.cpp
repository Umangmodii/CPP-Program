// 34.Store_Information_in_Structure.cpp

#include <iostream>
#include <string>

using namespace std;

// Create a new Structure

struct Student
{
    int Roll_No;
    string name[50];
    int age;
} s;

int main()
{
    cout << "Enter information of students: " << endl;

    cout << "Enter the Roll Number : " << s.Roll_No << endl;
    cout << "Enter the Name : " << s.name << endl;
    cout << "Enter the Age : " << s.age << endl;

    return 0;
}