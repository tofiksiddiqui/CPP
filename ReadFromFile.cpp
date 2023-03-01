/**
 * !Read from file.
*/

/*To read the file use either ifstream of fstream*/
#include<iostream>
#include<string>
#include<fstream>
using namespace std;


int main(){

    fstream MyReadFile("MyFile.java");

    string stringName;
    while(getline (MyReadFile, stringName)){
        cout << stringName;
    }

    MyReadFile.close();
}