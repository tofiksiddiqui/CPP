/**
 * Default Parameter.
 * A parameter with a default value, is often known as an "optional parameter". From the example below, name is an optional parameter and "mohammad" is the default value
*/

#include<iostream>
using namespace std;


string PrintName(string country){
    return country;
}

/*Default parameter*/
string Print(string name = "mohammad"){
    cout << name << "\n";
}

int main(){

    string name = "India\n";
    cout << PrintName(name);
    Print();
    return 0;
}