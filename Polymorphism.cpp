/**
 * !Polymorphism in C++.
 * @param Ploymorphism means "Many Form", and it occurs when we have many classes that are related to each other by inheritance.
*/

#include<iostream>
#include<string>
using namespace std;

/*Base class*/
class BaseClass{
    public : 
    void display(){
        cout << "I am from Base Class" <<"\n";
    }
};

/*Derived class*/
class SubClass : public BaseClass{
    public : 
        void display(){
            cout << "I am from sub class." << "\n";
        }
};

/*Another derived class.*/
class AnotherSubClass : public BaseClass{
    public : 
        void display(){
            cout << "I am from another sub class." << "\n";
        }
};

int main(){
    BaseClass bc;
    SubClass sb;
    AnotherSubClass as;

    bc.display();
    sb.display();
    as.display();
    
    return 0;
}

/**
 * !Why And When To Use "Inheritance" and "Polymorphism"?
 * @param It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.
*/