/**
 * Structure in c++.
 */

#include <iostream>
#include <string>
using namespace std;

struct details
{

    string name;
    long regNumber;
    long mobileNumber;
};

details d[100];

int main()
{

    cout << "Enter the size : ";
    int n;
    cin >> n;

    cout << "Enter the elements :";
    for (int i = 0; i < n; i++)
    {
        cin >> d[i].name;
        cin >> d[i].regNumber;
        cin >> d[i].mobileNumber;
    }

    cout << "The details are : \n";

    for (int i = 0; i < n; i++)
    {
        cout << d[i].name << d[i].regNumber << d[i].mobileNumber;
    }

    return 0;
}