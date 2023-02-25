/**
 * Constant in c++
 * (1)we use the keyword const with integer and float
*/

#include<iostream>
using namespace std;

int main(){

    const int number = 123;
    number = 234; // We can not assign the new value to the integer.
    cout << number;

    const string name = "mohammad Tofik0";
    name = "Khan";
    return 0;
}