//******C++ FUNCTIONS!!!!******
#include <iostream>
using namespace std;


//****************************""""""""""****
// USER DEFINED FUNCTIONS
//SYNTAX
/*returnType functionName (parameter1, parameter2,...)
 { function body }
*/
//sample simple function
//user defined functions are defined outside the main function


//Function#1
void greet() //return type = void. function identifier = greet & no parameters
{ 
cout << "Hello World"; //block of code to be executed by function
}


//Function#2
void printText(int num1, double num2){
cout<<"\n\nThe int number is: "<<num1<<endl;
cout<<"The double number is: "<<num2<<endl;
}


//Function#3 
//return type defines the type of return data type to be used by the return statement
int add(int x, int y){
return (x+y);
}


//Function#4 using Function Prototype
//allows definition of the Function to be done after function is called
int numberSum (int, int); 


int main(){

greet();//calling function#1

printText (3,4.8272);//calling function#2

int sum = add(8272,8162);//calling function#3 the sum variable has to be int because the return type of this function is int.
cout<<"\nFunction#3 result: " <<sum<<endl;


int sumofNums = numberSum(10,20);//calling Function #4
cout<< "\nFunction#4 result: " <<sumofNums<<endl;

int sumofNums2 = numberSum(670,20);//calling Function #4 again. coz functions can be called as many times as possible
cout<< "\nFunction#4 result2: " <<sumofNums2<<endl;























 
return 0;
}


//Function#4 when using function Prototype, define the Function after the main
int numberSum (int a, int b) {
return (a+b);
}