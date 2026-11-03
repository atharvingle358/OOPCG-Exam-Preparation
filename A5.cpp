/*Write a C++ program to abbreviate the first and middle names while keeping the surname unchanged.*/

#include <iostream>
using namespace std;

int main()
{

    string firstName, middleName, lastName;
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your middle name: ";
    cin >> middleName;

    cout << "Enter your last name: ";
    cin >> lastName;

    cout << "Abbreviated Name: " << firstName[0] << ". " << middleName[0] << ". " << lastName << endl;
    return 0;
}