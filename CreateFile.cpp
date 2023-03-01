/**
 * !File operation in C++.
 * @param working with the file in c++.
*/

/**Create and write a file.
 * There are three classes :
 * *(1)ofstream -> creates and writes to file.
 * *(2)ifstream -> Reads from file.
 * *(3)fstream  -> A combination of ofstream and ifstream : create, reads and writes to file.
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    /*Creat and write to the files.*/
    ofstream MyFile("MyFile.java");

    /*Write to the file*/
    MyFile << "This file with the name of MyFile.java" << "\n";


    MyFile.close();
    return 0;
}
