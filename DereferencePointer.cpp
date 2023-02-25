/**
 * Dereferencing the pointer
 */

#include <iostream>
#define newLine "\n"
using namespace std;

int main()
{

    int a = 5;
    cout << &a << newLine;

    /*Pointer declaration*/
    int *ptr = &a;

    /*Printing the memory address of the variable*/
    cout << "The memory address of the integer a is : " << ptr << newLine;

    /*Dereference : Printing the value of the value a using the pointer*/
    cout << "The value of the pointer is : " << *(ptr);
}
