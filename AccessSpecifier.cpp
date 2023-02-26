/**
 * !Access Specifier.
 * TODO : You learned from the Access Specifiers chapter that there are three specifiers available in C++. 
 * TODO : Until now, we have only used public (members of a class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is similar to private, but it can also be accessed in the inherited class:
*/

#include<iostream>
#include<string>
using namespace std;

/*Base class*/
class Employee{
    protected : 
        int salary;
};

/*Derived class.*/
class Programmer : public Employee{
    public :
        int bonus;
        void setSalary(int salary){
            this->salary = salary;
        }

        int getSalary(){
            return salary;
        }
};

int main(){
    Programmer pg;
    pg.setSalary(120000);
    pg.bonus = 150000;

    cout << "The salary of the programmer is : " << pg.getSalary() << "\n";
    cout << "The bonus of the programmer is : " << pg.bonus << "\n";

    return 0;
}