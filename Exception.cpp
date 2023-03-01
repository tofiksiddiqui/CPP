/**
 * !Exception in C++.
 * *Exception in C++ consist of three keywords try, throw, catch.
 */

#include <iostream>
using namespace std;
int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age);
        }
    }
    // catch (int number)
    // {
    //     cout << "Access denied - You must be at least 18 years old\n";
    //     cout << "Age is = " << number << "\n";
    // }

    catch(...){
        cout << "Your age is : ";
    }
}

/**
 * !Handle any type of an exception using three dot (...).
*/