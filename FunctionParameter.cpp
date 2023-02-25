/**
 * Function Parameter.
 * When a parameter is passed to the function, it is called an argument. So, from the example below: fname is a parameter, while Liam, Jenny and Anja are arguments.
 */

#include <iostream>
#define newLine "\n";

using namespace std;

void Print(string name)
{

    cout << "The name is : " << name << newLine;
}

int main()
{

    string name = "mohammad";
    Print(name);
    name = "Kashif";
    Print(name);
    name = "Rahul";
    Print(name);
    return 0;
}