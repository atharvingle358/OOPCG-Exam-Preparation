/*Create a C++ program using a class named Employee.

The class should contain:
1. salary — employee's current salary.
2. hours — number of working hours per day.
3. getInfo() — accepts salary and working hours.
4. AddSal() — adds ₹10,000 if salary is less than ₹50,000.
5. AddWork() — adds ₹1,000 if working hours are greater than 6.
6. printFinalSalary() — displays the final salary.*/

#include <iostream>
using namespace std;

class Employee
{
private:
    // Declare salary and hours
    double salary;
    int hours;

public:
    // Define getInfo()
    void getInfo(double sal, int hrs)
    {
        salary = sal;
        hours = hrs;
    }
    // Define AddSal()

    void AddSal()
    {
        if (salary < 50000)
        {
            salary += 10000;
        }
    }
    // Define AddWork()
    void AddWork()
    {
        if (hours > 6)
        {
            salary += 1000;
        }
    }
    // Define printFinalSalary()
    void printFinalSalary()
    {
        cout << "Final Salary: " << salary << endl;
    }
};

int main()
{
    // Create Employee object
    Employee emp;

    // Call required functions
    emp.getInfo(45000, 8);
    emp.AddSal();
    emp.AddWork();
    emp.printFinalSalary();

    return 0;
}