/**
 * Constructor in C++
*/

/*
A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ():
*/

#include<iostream>
#include<string>
using namespace std;

class Details{
    public : 
        Details(){
            cout << "I am inside the class : ";
        }
};

int main(){
    Details dtOb; /*Or even you call that method for example obly write Details(); instead of Details dtOb;*/
  
    return 0;
}

/*Note : The constructor has the same name as the class, it is always public, and it does not have any return value.*/