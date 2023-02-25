/**
 * Finding the length of an array.
*/

#include<iostream>
using namespace std;

int main(){

    int count = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "The array is : ";
    for(auto i : arr){
        cout << i << " ";
        count++;
    }

    for(int i : arr){
        cout << i << " ";
    }

    cout << "\n The length of the given array is : " << count;


    /*Using the begin() and end() we can find the length of the array in c++*/
    cout << "\nThe Length of the given array is : " << end(arr) - begin(arr);

    cout << sizeof(arr);
    cout << sizeof(arr) / sizeof(int);
}