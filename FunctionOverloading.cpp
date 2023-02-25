/**
 * Function overloading.
 * 1.With function overloading, multiple functions can have the same name with different parameters.
 * int Function(int x);
 * int Function(intx, int y);
 * float Function(float x);
 * double Function(double x, double y);
 * 2.Consider the following example, which have two functions that add numbers of different type:
*/
#include<iostream>
using namespace std;

int plusFuncInt(int x, int y){
    return x + y;
}

double plusFuncDouble(double x, double y){
    return x + y;
}

/**Instead of defining two functions that should do the same thing, it is better to overload one.
 * In the example below, we overload the plusFunc function to work for both int and double.
 */
int plusFunc(int x, int y){
    return x + y;
}

double plusFunc(double x, double y){
    return x + y;
}


int main(){

    int num1 = plusFuncInt(8,5);
    double num2 = plusFuncDouble(4.3, 6.26);

    cout << "Int : " << num1 << "\n";
    cout << "Double : " << num2 << "\n";

    int number1 = plusFunc(8,5);
    double number2 = plusFunc(4.3, 6.26);
    cout << "Int : " << number1 << "\n";
    cout << "Double : " << number2 << "\n";
    return 0;
}

