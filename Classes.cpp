/**
 * Class in cpp
 * Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object.
 * The car has attributes, such as weight and color, and methods, such as drive and brake.
 * Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".
 * A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
 */

/**
 * class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

In C++, an object is created from a class. We have already created the class named MyClass, so now we can use this to create objects.

To create an object of MyClass, specify the class name, followed by the object name.

To access the class attributes (myNum and myString), use the dot syntax (.) on the object:

*/
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    int num1;
    string stringName;
};

class Car
{
public:
    string brand;
    string model;
    int year;
};

int main()
{

    MyClass myOb; /*Created an object of class*/

    /*Now I am going to access the varible or attributes of the class.*/
    myOb.num1 = 123;
    myOb.stringName = "MohammadTofik";

    cout << myOb.num1;
    cout << myOb.stringName << "\n";

    Car ob1;
    ob1.brand = "BMW";
    ob1.model = "X5";
    ob1.year = 1999;

    /*Print the attribute value or varibale*/
    cout << "The brand name : " << ob1.brand << "\n";
    cout << "The model name : " << ob1.model << "\n";
    cout << "The year : " << ob1.year << "\n";

    /*Even we can create multiple object*/
    Car ob2;
    ob2.brand = "Ford";
    ob2.model = "Mustang";
    ob2.year = 1969;

    /*Print Attribute value*/
    cout << "The brand2 name is : " << ob2.brand << "\n";
    cout << "The brand2 model name : " << ob2.model << "\n";
    cout << "The year is : " << ob2.year << "\n";
}