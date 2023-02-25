/**
 * Acess the string in c++
*/

#include<iostream>
using namespace std;
#define newLine "\n"


int main(){

    string name = "Mohammad Tofik";
    cout << name[0] << newLine;

    name[1] = 'K';
    cout << name[1];
    return 0;
}