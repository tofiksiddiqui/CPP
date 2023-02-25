/**
 * Nested Structure
 */

#include <iostream>
using namespace std;

struct employee
{

    int empID;
    string name;
    int salary;
};

struct organization
{

    string orgName;
    string orgNumber;
    struct employee emp;
};

organization org[100];

int main()
{

    cout << "Enter the number of employee : ";
    int n;
    cin >> n;
    cout << "Enter the details : \n\n";

    cout << "------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the employee ID : ";
        cin >> org[i].emp.empID;
        cout << "Enter the name of employee : ";
        cin >> org[i].emp.name;
        cout << "Enter the salary : ";
        cin >> org[i].emp.salary;
        cout << "Enter the orgnization : ";
        cin >> org[i].orgName;
        cout << "Enter the organization number : ";
        cin >> org[i].orgNumber;
    }
    cout << "------------------------------\n";

    cout<< "The details of the employee are : \n";
    for (int i = 0; i < n; i++)
    {
        cout << "The name of the organization is : " << org[i].orgName << "\n";
        cout << "The number of the organization is : " << org[i].orgNumber << "\n";
        cout << "The ID of the employee : " << org[i].emp.empID << "\n";
        cout << "The name of the employee : " << org[i].emp.name << "\n";
        cout << "The salary of the employee : " << org[i].emp.salary<<"\n";
    }

    return 0;
}
