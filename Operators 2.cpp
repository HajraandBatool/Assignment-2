#include<iostream>
using namespace std;

int main()
{ 
     int a=40;
     int b=20;
    //Arithmetic Operators 
    cout << "Results of Arithmetic Operators are" << endl;
    cout << "Addition of a and b is " << a+b << endl;
    cout << "Substraction of a and b is " << a-b << endl;
    cout << "Multiplication of a and b s " << a*b << endl;
    cout << "Division of a over b is " << a/b << endl;
    cout << "Modulus of a over b is " << a%b << endl;
    cout << "********************" << endl;
    //Assignment Operator
    int marks=40;
    cout << "The marks are " << marks << endl;
    cout << "********************" << endl;
    //Increment Operator
    cout << "The results of Increment Operators are" << endl;
    cout << "Increase in the value of variable by using post increment " << marks++ << endl;
    cout << "Increase in the value of variable by using pre increment " << ++marks<< endl;
    cout << "***************" << endl;
    //Decrement Operator
    cout << "The results of decrement operators are" << endl;
    cout << "Decrease in the value of variable by using post decrement " << marks-- << endl;
    cout << "Decrease in the value of variable by using pre decrement " << --marks << endl;
    cout << "***************" << endl;
    //Comparison Operators
    cout << "The results of comparison Operators are" << endl;
    cout << " " << (a>b) << endl;
    cout << " " << (a<b) << endl;
    cout << " " << (a==b) << endl;
    cout << " " << (a!=b) << endl;
    cout << " " << (a<=b) << endl;
    cout << " " << (a>=b) << endl;
    cout << "***************" << endl;
    //Compound Assignment Operators
    cout << "The results of compound assignment operators are" << endl;
    cout <<  marks+10 << endl;
    cout <<  marks-10 << endl;
    cout <<  marks/2 << endl;
    cout <<  marks*2 << endl;
    cout <<  marks%2 << endl;
    cout << "***************" << endl;
    //Logical Operators
    cout << "The results of logical operators are" << endl;
    cout << ((a>10) && (b>20)) << endl;
    cout << ((a>10) || (b>20)) << endl;
    cout << !(a>10) << endl;
    cout << "***************" << endl;
   return 0;
}