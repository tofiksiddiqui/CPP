/**
 * How to take the user input in c++.
*/

#include<iostream>

#define newLine "\n"
using namespace std;

int main(){

    string name;
    int rollNo;
    cout << "Enter the user Name\n";
    cin >> name;
    cout << "Enter the roll number\n";
    cin >> rollNo;

    cout << "The name of the use is : " << name;
    cout << "The roll number of the student is : " << rollNo;

    return 0;
}