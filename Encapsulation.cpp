/**
 * Encapsulation in c++.
 * The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
 */

#include <iostream>
#include <string>
using namespace std;

/*Access private attribute, use public "get" and "set" Method.*/

class Student
{
private:
    string firstName;
    string lastName;
    long registerNumber;

public:
    void setValue(string firstName, string lastName, long registerNumber)
    {
        this->firstName = firstName;
        this->lastName = lastName;
        this->registerNumber = registerNumber;
    }

public:
    void getValue()
    {
        cout << "The first name of the student is : " << firstName << "\n";
        cout << "The last name of the student is : " << lastName << "\n";
        cout << "The registration number is : " << registerNumber << "\n";
    }
};

int main()
{
    Student st;
    st.setValue("mohammad", "tofik", 190905514);
    st.getValue();
}

/**
 * Token
 * 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
 * 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
*/