/**
 * Construtor Parameter
*/

/*Constructor can also take the parameters (just like regular function) , which can be useful for setting initial values for attributes.*/

#include<iostream>
#include<string>
using namespace std;
#define newLine "\n"

class Car{
    public : 
        string brand;
        string model;
        int year;

        Car(string brand, string model, int year){
            this->brand = brand;
            this->model = model;
            this->year = year;
        }

        void display(){
            cout << "The name of the brand is : " << brand << newLine;
            cout << "The model of the car is : " << model << newLine;
            cout << "The year is : " << year << newLine;
        }
};

/*We are going to learn that how we can implement the constructor outside of the class.*/
class Student{
    public : 
        string firstName;
        string lastName;
        int regNo;
        Student(string firstName, string lastName, int regNo); /*This is constructor declaration.*/

        void display();
};

/*Constructor declaration out side of the class.*/
Student::Student(string firstName, string lastName, int regNo){
    this->firstName = firstName;
    this->lastName = lastName;
    this->regNo = regNo;
}

void Student :: display(){
    cout << "The first name of the student is : " << firstName << "\n";
    cout << "The last name of the student is : " << lastName << "\n";
    cout << "The register number is : " << regNo << "\n";
}

int main(){

    cout << "Enter the brand : " << newLine;
    string brand;
    cin >> brand;

    cout << "Enter the model : " << newLine;
    string model;
    cin >> model;

    cout << "Enter the year : " << newLine;
    int year;
    cin >> year;

    Car car(brand, model, year);
    car.display();

    cout << "Enter the first name of the student : ";
    string firstName;
    cin >> firstName;

    cout << "Enter the last name of the student : ";
    string lastName;
    cin >> lastName;

    cout << "Enter the registeration number of the stident : ";
    long regNumber;
    cin >> regNumber;

    Student st(firstName, lastName, regNumber);
    st.display();



    return 0;
    
}