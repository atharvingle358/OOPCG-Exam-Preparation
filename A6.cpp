/*Create a base class Fruit and derived classes Apples and Mangoes. Calculate and display the number of apples, number of mangoes and total number of fruits.*/

#include <iostream>
using namespace std;

class Fruit
{
public:
    int total;

    void calculateTotal(int a, int m)
    {
        total = a + m;
    }
};

class Apples : public Fruit
{
public:
    int apple;

    void getApple()
    {
        cout << "Enter number of apples: ";
        cin >> apple;
    }
};

class Mangoes : public Fruit
{
public:
    int mango;

    void getMango()
    {
        cout << "Enter number of mangoes: ";
        cin >> mango;
    }
};

int main()
{
    Apples a;
    Mangoes m;

    a.getApple();
    m.getMango();

    a.calculateTotal(a.apple, m.mango);

    cout << "\nNumber of Apples: " << a.apple;
    cout << "\nNumber of Mangoes: " << m.mango;
    cout << "\nTotal Fruits: " << a.total << endl;

    return 0;
}