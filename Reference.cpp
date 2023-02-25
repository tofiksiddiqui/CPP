/**
 * Reference variable is a "reference variable and its created with the & operator"
*/

#include<iostream>
using namespace std;

int main(){

    string food = "apple";
    string &meal = food; /*This is called reference variable.*/

    cout << food << "\n";
    cout << meal << "\n";

}