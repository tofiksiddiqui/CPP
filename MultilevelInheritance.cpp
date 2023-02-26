/**
 * !Multilevel Inheritance.
 * 
 * @param A class can also be derived from one class, which is already derived from another class.
 * TODO : In the following example, MyGrandChild is derived from MyChild which is already derived from MyClass.
*/

#include<iostream>
#include<string>
using namespace std;

/*Base class*/
class MyClass{
    public : 
        void display(){
            cout << "Some content in parent class.";
        }
};

/*Derived class*/
class subClass : public MyClass{

};

/*Derived subSubClass*/
class subSubClass : public subClass{

};

int main(){
    subSubClass sub;
    sub.display();
}
