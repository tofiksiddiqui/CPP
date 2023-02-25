/**
 * String in c++ 
 * 1.append()
 * 
*/

#include<iostream>
#define newLine "\n"
using namespace std;

int main(){

    string firstName = "Mohammad";
    string lastName = "Tofik";

    string fullName = firstName + lastName;
    cout << "full name is : \t" << fullName;

    string FullName = firstName +" "+lastName;
    cout << FullName << "\t Length of the string is : " << FullName.length() << newLine;
    cout << FullName << "\t Size of the string is : " << FullName.size() << newLine;

    string fName = firstName.append(lastName);
    cout << fName;

    return 0;
}