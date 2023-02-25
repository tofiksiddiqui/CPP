/**
 * Array in c++
*/

#include<iostream>
using namespace std;

int main(){
string cars[4] = {"apple","mango","Orange","Pineapple"};
int myNumber[5] = {1,2,3,4,5};

for(int i = 0; i < sizeof(myNumber) / sizeof(myNumber[0]) ; i++){
    cout << myNumber[i];
}

cout << cars[0];
return 0;

}
