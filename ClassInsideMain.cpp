#include <iostream>
#include <string>
using namespace std;

int main()
{
    class Details
    {
    public:
        string name;
        string address;
        int regNo;
        Details(string name, string address, int regNo)
        {
            this->name = name;
            this->address = address;
            this->regNo = regNo;
        }

        void display()
        {
            cout << "The name of the student is : " << name << "\n";
            cout << "The address of the student is : " << address << "\n";
            cout << "The register number is : " << regNo << "\n";
        }
    };

    cout << "Enter the name of the student : ";
    string name;
    cin >> name;

    cout << "Enter the address of the student : ";
    string address;
    cin >> address;

    cout << "Enter the register number : ";
    int regNo;
    cin >> regNo;

    Details dt(name, address, regNo);
    dt.display();
    return 0;
}