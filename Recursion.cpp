/**
 * Recursion.
 * Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.
 * Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
*/

/*
Adding two numbers together is easy to do, but adding a range of numbers is more complicated. In the following example, recursion is used to add a range of numbers together by breaking it down into the simple task of adding two numbers:
*/
#include<iostream>
using namespace std;

int sum(int num){
    if(k > 0){
        return num + sum(k - 1);
    }else{
        return 0;
    }
}

int main(){

    int result = sum(10);
    cout << result;
    return 0;
}