/**
 * Pass By reference
*/

#include<bits/stdc++.h>
using namespace std;
void swapNumber(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}


int main(){

    int num1 = 10;
    int num2 = 20;

    cout << "Before Swapping : " << num1 << num2 << "\n";
    swapNumber(num1, num2);
    cout << "After swapping : " << num1 << num2;
}