/**
 * Method
 * Methods are functions that belongs to the class.
 * There are two ways to define functions that belongs to a class:
 * Inside class definition.
 * Outside class definition.
 * In the following example, we define a function inside the class, and we name it "myMethod".

Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):
*/
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    void method()
    {
        cout << "Hello World\n";
    }
};

/*To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. This is done by specifiying the name of the class, followed the scope resolution :: operator, followed by the name of the function:*/

class Details{
    public : 
        void Print(); /*Method function declaration*/
};

/*If we want to give the definition then we have to specify the name of the class followed by scope operator.*/
void Details :: Print(){
    cout << "This is the method we have given the definition.";
}

int main()
{
    MyClass myOb;  /*Create an object of MyClass.*/
    myOb.method(); /*Called to the method.*/

    Details dtOb;
    dtOb.Print();
    return 0;
}

/*Note : We can provide the parameter to the function.*/