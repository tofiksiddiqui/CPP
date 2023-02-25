/**
 * Return value
*/
#include<iostream>
using namespace std;

int PrintStringAndValue(int num1, int num2){

    return num1 + num2;
}

int main(){
    int num1 = 112;
    int num2 =134;
    cout <<"The sum is : " << PrintStringAndValue(num1, num2);
    return 0;
}

