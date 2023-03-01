//**C++ CONTROL IF STATEMENTS**  
#include <iostream>
using namespace std;
//switch..case Statement
/*SYNTAX
switch (expression) 
{ 
case constant1: 
// code to be executed if 
// expression is equal to constant1; 
break; 

case constant2: 
// code to be executed if 
// expression is equal to constant2; 
break; . . .
default: 
// code to be executed if 
// expression doesn't match any constant }
*/

//Program to build a simple calculator using switch Statement

int main()
{
char myOperator;
int double1, double2;
cout<<"Enter a number to be operated on:"<<endl;
cin>> double1;
cout<<"\nEnter another number to be operated on:"<<endl;
cin>> double2 ;
cout<<"\nEnter the operation to be applied:"<<endl;
cin>>myOperator;

switch (myOperator)
{
    case '+':
        cout<< double1 <<" + "<< double2 << " = " << double1 + double2 <<endl;
        break;
    case '-':
        cout<< double1 <<" - "<< double2 << " = " << double1 - double2 <<endl;
        break;
    case '*':
        cout<< double1 <<" * "<< double2 << " = " << double1 * double2 <<endl;
        break;
    case '/':
        cout<< double1 <<" / "<< double2 << " = " << double1 / double2 <<endl;
        break;
    default:
        //if none of the specified cases are in use
        cout<<"Error! Enter a valid operation. Should be either, (+,-,/,*)";
        break;
}   





return 0;
}