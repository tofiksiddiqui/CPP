/**
 * Multi Diamensional Array
*/

#include<iostream>
using namespace std;

int main(){

    string arr[2][4] = {
        {"apple","banana","mango","orange"},
        {"a","b","c","d"},
    };

    cout << arr[0][2];
    arr[0][0] = "Mohammad";
    cout << arr[0][0];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << arr[i][j] << " ";
        }
    }
}