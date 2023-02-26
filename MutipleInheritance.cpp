/**
 * !Multiple Inheritance
 * @param A class can also be derived from more than one base class, using a comma seperated-list.
 * 
 * */

#include<iostream>
#include<string>
using namespace std;
/*Base class*/
class MyClass{
	public : 
		void display(){
			cout << "This is the base class." << "\n";
		}
};

/*Another base class*/
class AnotherBaseClass{
	public : 
		void print(){
			cout << "I am from another base class." << "\n";
		}
};

/*Derived class or child class*/
class childClass : public MyClass, public AnotherBaseClass{

};

int main(){
	childClass ch;
	ch.display();
	ch.print();
	return 0;
}
