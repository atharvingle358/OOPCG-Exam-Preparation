// Day 25 - Experiment 7
// Write a C++ program using user-defined exception handling.
// Check age, income, city and four-wheeler ownership.
// If any condition fails, display a rejection message.

#include <iostream>
#include <string>
using namespace std;

class MyException
{
};

int main()
{
    int age, income;
    string city, vehicle;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter monthly income: ";
    cin >> income;

    cout << "Enter city: ";
    cin >> city;

    cout << "Do you own a four-wheeler? ";
    cin >> vehicle;

    try
    {
        if (age < 18 || age > 55)
        {
            throw MyException();
        }
        else if (income < 50000 || income > 100000)
        {
            throw MyException();
        }
        else if (city != "Pune" && city != "Mumbai" &&
                 city != "Bangalore" && city != "Chennai")
        {
            throw MyException();
        }
        else if (vehicle != "yes")
        {
            throw MyException();
        }
        else
        {
            cout << "Congratulations! You are eligible.";
        }
    }
    catch (MyException e)
    {
        cout << "Sorry! You are not eligible.";
    }

    return 0;
}