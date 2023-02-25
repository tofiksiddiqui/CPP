/**
 * Math Function in c++
*/

#include<iostream>
#include<cmath>
#define newLine "\n"
using namespace std;

int main(){

    int i = 0;
    
    cout << max(5, 7) << newLine;
    cout << min(10 , 122) << newLine;
    cout << sqrt(64) << newLine;
    cout << round(2.6) << newLine;
    cout << log(2) << newLine;


    int a =  10;
    int b = 90;

    string result = (a > b) ? "Greater Number" : "Lowest Number";
    cout << result;

    
    do{
        cout << i << "\n";
        i++;
    }while(i < 5);
    
    return 0;
}