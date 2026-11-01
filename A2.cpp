/*Write a C++ program which will ask the user to enter his/her marks (out of
100). Define a function that will display grades according to the marks
entered as below:
Marks Grade
91-100 O
81-90 A
71-80 B
61-70 C
51-60 D
41-50 Pass
<=40 Fail*/

#include <iostream>
using namespace std;

void calculateGrade(int marks)
{
    // Write your if-else conditions here
    if (marks < 0 || marks > 100)
    {
        cout << "Invalid marks!" << endl;
    }
    else if (marks >= 91)
    {
        cout << "Grade: O" << endl;
    }
    else if (marks >= 81)
    {
        cout << "Grade: A" << endl;
    }

    else if (marks >= 71)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 61)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 51)
    {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 41)
    {
        cout << "Grade: Pass" << endl;
    }
    else
    {
        cout << "Grade: Fail" << endl;
    }
}

int main()
{
    int marks;

    cin >> marks;

    calculateGrade(marks);

    return 0;
}