//**C++ CONTROL IF STATEMENTS**  
#include <iostream>
#include <cmath>//necessary for math operations
using namespace std;
//IF STATEMENT
//Syntax of IF STATEMENT ----> if (condition){body of if statement to be executed when condition evaluates to True}
//code to accept positive integer from user
int main()
{
int num;
cout<<"Checking for positive numbers. Enter a number:"<<endl;
cin>>num;
if(num>0){
cout<<"You entered a positive number "<<num<<endl;
}
cout<<"This line is always gonna be executed when it's outside the body of the if, whether the condition evaluates to True or False, so we're gonna say THANK YOU!"<<endl;

//IF...ELSE STATEMENT
//Syntax of STATEMENT
/*
if (condition)
{body of if statement to be executed when condition evaluates to True}
else
{body of if statement to be executed when condition evaluates to False}
*/
//code to check even number by user

int num2;
cout<<"\n\nChecking for odd & even numbers. Enter a number:"<<endl;
cin>>num2;
if(num2 % 2 == 0){
cout<<"You entered an even number "<<num<<endl;
}
else
{
cout<<"You entered an odd number "<<num<<endl;
}
cout<<"This line is always gonna be executed when it's outside the body of the if, whether the condition evaluates to True or False, so we're gonna say THANK YOU!"<<endl;



//IF...ELSEIF.... ELSE STATEMENT
//Syntax of STATEMENT
/*
if (condition1) 
{ // code block 1 } 
else if (condition2)
{ // code block 2 } 
else { // code block 3 }
*/
// Program to check whether an integer is positive, negative or zero
int num3;
cout<<"\n\nChecking for positive, negative or zero numbers. Enter a number: "<<endl;
cin>>num3;
if(num3<0){
cout<<"You have printed a entered negative number."<<endl;
}
else if(num3>0){
cout<<"You have printed a entered positive number."<<endl;
}
else{
cout<<"You have entered a zero."<<endl;
}
cout<<"Thank you! #always printed"<<endl;
return 0;
}


//NESTED IF...STATEMENT
//Syntax of STATEMENT
// outer if statement if (condition1){ 
// statements 
// inner if statement if (condition2) { 
// statements } }


//Program to check whether an integer is positive, negative or zero
//using nested if
int num4;
cout<<"\n\nChecking for positive, negative or zero numbers. Enter a number: "<<endl;
cin>>num4;
if(num4 !=0){
    if(num4 < 0)
    {
    cout<<"Number is a negative number"<<endl;
    }
    else
    {
    cout<<"Number is a positive number"<<endl;
    }
else
{
cout<<"Number is a zero"<<endl;
}























}