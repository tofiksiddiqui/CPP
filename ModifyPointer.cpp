/**
 * Modify Pointer
*/

#include<iostream>
#define newLine "\n"
using namespace std;

int main(){

    string fruit = "Apple";
    string *ptr = &fruit;

    /*Output  : The value of the fruit*/
    cout <<"The value of the fruit is = " << fruit << newLine;

    /*Output : The memory adress of the fruit*/
    cout <<"The memory address of the fruit is = " << &fruit << newLine;

    /*Output : The memory address using the pointer*/
    cout << "The memory addess using the pointer  is :" << ptr << newLine;

    /*Output : Accessing the memory address of fruit and prints its value.*/
    cout << "The value of the fruit using the pointer : " << *(ptr) << newLine;

    /*Changing the value of the pointer.*/
    *(ptr) = "Mango";

    /*Output : Print the new value of the pointer*/
    cout << "printing the new value of the pointer : " << *(ptr) << newLine;

    /*Output : The new value of the fruit.*/
    cout << "The new value of the fruit after assigned the new value : " << fruit << newLine;
}