/**
 * Pass array to a function.
 * The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.
When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.
Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).
*/

#include<iostream>
#include<array>
using namespace std;

void passArrayToFunction(int arr[]){

    for(int i = 0; i < 5; i++){
        cout << arr[i] << "\n";
    }
}

int main(){

    int arr[5] = {1,2,3,4,5};
    passArrayToFunction(arr);
    return 0;
}