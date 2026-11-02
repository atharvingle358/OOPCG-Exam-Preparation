/*Create a C++ program to maintain a personal directory containing:
1. Name
2. Address
3. Telephone number (with STD code, if available)
4. Mobile number (if available)
5. Head of family*/

#include <iostream>
#include <string>
using namespace std;

class PersonalDirectory
{
private:
    string name;
    string address;
    string telephone;
    string mobile;
    string headOfFamily;

public:
    // Define getInfo()
    void getInfo(string n, string addr, string tel, string mob, string head)
    {
        name = n;
        address = addr;
        telephone = tel;
        mobile = mob;
        headOfFamily = head;
    }

    // Define displayInfo()
    void displayInfo()
    {

        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Telephone: " << telephone << endl;
        cout << "Mobile: " << mobile << endl;
        cout << "Head of Family: " << headOfFamily << endl;
    }
};

int main()
{
    PersonalDirectory pd;

    string n, addr, tel, mob, head;

    cout << "Enter Name: ";
    getline(cin, n);

    cout << "Enter Address: ";
    getline(cin, addr);

    cout << "Enter Telephone: ";
    getline(cin, tel);

    cout << "Enter Mobile: ";
    getline(cin, mob);

    cout << "Enter Head of Family: ";
    getline(cin, head);

    pd.getInfo(n, addr, tel, mob, head);
    pd.displayInfo();

    return 0;
}