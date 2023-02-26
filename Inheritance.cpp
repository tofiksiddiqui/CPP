/**
 * Inheritance in c++.
*/
/**
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

*derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):
*/

#include<iostream>
#include<string>
using namespace std;

/*Base class*/
class Department{
    public : 
        string branch = "cse";

        void display(){
            cout << "My branch is cse." << "\n";
        }
};

/*Child class or Derived class or Inherited class.*/
class CSE : public Department{
    public : 
    string isString = "This is child class.";
};

int main(){

    CSE cse;
    cse.display();
    cout << cse.isString << "\n";
    return 0;
}

/**
 * !Why and when to use inheritance.
 * @param It is useful for code reusability : reuse variable and method of an existing class when you create a new class.
*/