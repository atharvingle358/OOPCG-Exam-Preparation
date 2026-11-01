/*Write a C++ menu driven program to take integer number as input from
user to calculate and display
i. Square
ii. Cube
iii. Square root
iv. Factorial
v. sum
vi. product*/

#include <iostream>
using namespace std;

int main()
{
    int choice, n, a, b, m, s, g;

    cout << "MENU" << endl;
    cout << "1. Square" << endl;
    cout << "2. Cube" << endl;
    cout << "3. Square Root" << endl;
    cout << "4. Factorial" << endl;
    cout << "5. Sum" << endl;
    cout << "6. Product" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int sq;

        cin >> n;
        sq = n * n;
        cout << sq << endl;
        break;
    }

    case 2:
    {
        int cube;

        cin >> m;
        cube = m * m * m;
        cout << cube << endl;
        break;
    }

    case 3:
    {
        double root;
        cin >> n;
        if (n == 0)
        {
            root = 0;
            cout << root << endl;
        }
        else if (n < 0)
        {
            cout << "Square root of negative number is not real";
        }
        else
        {
            root = n;

            for (int i = 0; i < 20; i++)
            {
                root = (root + n / root) / 2;
            }

            cout << root << endl;
        }

        break;
    }

    case 4:
    {
        int factorial;
        cin >> a;
        factorial = 1;

        if (a < 0)
        {
            cout << "Factorial is not defined for negative numbers";
        }
        else
        {
            // Your factorial loop
            for (int i = 1; i <= a; i++)

            {
                factorial *= i;
            }
            cout << factorial << endl;
        }

        break;
    }

    case 5:
    {
        int sum;

        cin >> s >> g;
        sum = s + g;

        cout << sum << endl;
        break;
    }

    case 6:
    {
        int product;
        cin >> s >> g;
        product = s * g;

        cout << product << endl;
        break;
    }

    default:
        cout << "Invalid choice" << endl;
        break;
    }
    return 0;
}