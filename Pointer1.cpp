/**
 * Pointer
 * Note that the * sign can be confusing here, as it does two different things in our code:
 * When used in declaration (string* ptr), it creates a pointer variable.
 * When not used in declaration, it act as a dereference operator.
 */

#include <iostream>
using namespace std;

int main()
{

    string name = "Mohammad Tofik\n"; /* Variable declaration */
    cout << name << "\n";             /*the output of the string */
    cout << &name << "\n";            /*The output of the memory address */

    string *ptr = &name; /*Pointer declaration*/
    cout << ptr << "/n"; /*Reference : Output the memory address of food with the pointer*/
    cout
        << *ptr; /*Dereference : Output the memory address of the food with the pointer*/

    return 0;
}