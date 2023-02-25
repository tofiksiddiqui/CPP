/**
 *In the example from the previous page, the & operator was used to create a reference variable. But it can also be used to get the memory address of a    variable; which is the location of where the variable is stored on the computer.
 *
 * When a variable is created in C++, a memory address is assigned to the variable. And when we assign a value to the variable, it is stored in this memory address.
*/

#include<iostream>
using namespace std;

int main(){

    string fruit = "Pizza";
    cout << &fruit;
    return 0;
    
}