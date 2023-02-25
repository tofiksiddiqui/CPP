/**Scope resolution Operator
 * 1.To access global variable when there is a local variable with the same name.
*/

/*#include<iostream>
using namespace std;

int x = 10; // global variable

int main(){

    int x = 30; // local variable

    cout << "The value of the local variable "<< x << "\n";
    cout <<"the vlaue of the global variable "<<::x;
    return 0;
}*/

/**
 * 2.To define a function outside of the class.
*/

// #include<iostream>
// using namespace std;

// class A{
//     public:
//     //Only declaration
//     void fun();
// };

// //Definition outside of the class.
//  void A :: fun(){
//     cout << "fun() called";
// }

// int main(){

//     A a;
//     a.fun();
// }

//To aceess a class's static variable.
// #include<iostream>
// using namespace std;

// class Test{
//     static int x;
//     public :
//     static int y;
//     //local parameter 'x' hides class member but we can access it using the scope operator ::

//     void fun(int x){
//         //We can access class's static variable even if there is a local variable.
//         cout << "Value os static x is " << Test :: x;
//         cout << "\n Value of local x is " << x;

//     }
// };

// //In c++ static member must be explicitly defined like this.
// int Test :: x = 1;
// int Test :: y = 2;

// int main(){

//     Test obj;
//     int x = 23;
//     obj.fun(x);

//     cout << "\n Test :: Y = " << Test :: y;
//     return 0;
// }

//4-In case of multiple inheritance  : If the same variable name exists in two ancestor classes, we can use scope resolution operator inheritance.

// #include<iostream>

// using namespace std;

// class A{
//     protected : int x;
//     public : A(){
//         x = 10;
//     }
// };

// class B{
//     protected : int x;
//     public : B(){
//         x = 120;
//     }
// };

// class C : public A, public B{
//     public : void fun(){

//         cout << " A's x is = " << A :: x;
//         cout << "\n B's x is = " << B :: x;
       
//     }
// };

// int main(void){
//     C c;
//     c.fun();
//     return 0;
// }

/**
 * 5-For the namespace if a class having the same name exists inside the two namespaces we can use the namespace name with the scope resolution operator to refer that class without any confilicts.
*/

// #include<bits/stdc++.h>
// #include<iostream>
// #define nline "\n"


// using namespace std;

// string name1 = "GFG";
// string favLanguage = "python";
// string companyName = "Western Digital";

// class Developer{
//     public : 
//         string name = "Mohammad Tofik";
//         string favLanguage = "Java";
//         string company = "Western Digital";

//         Developer(string favlanguage, string companyName) : favLanguage(favlanguage), company(companyName){}
// };

// int main(void){
//     Developer dObj = Developer("Python", "Tofik");
//     cout << "Favaourite Language = " << dObj.favLanguage << endl;
//     cout << "company name : " << dObj.company << nline;
// }


/**
 * 6-Refer to a class inside another class : If a class exists inside another class we can use the nesting class to refer the nested class using the scope resolution operator.
*/

#include<iostream>
using namespace std;

class Outside{
    public :
        int x;
        class Inside{
            public : 
                int x;
                static int y;
                int foo();
        };
};

int Outside :: Inside :: y = 234;

int main(){
    Outside outsideOb;
    Outside :: Inside insideOb;

}

