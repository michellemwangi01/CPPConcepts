//******C++ FUNCTIONS!!!!******
#include <iostream>
#include <cmath> //header file to call library where allow math functions are contained
using namespace std;

//****************************""""""""""****
//C++ LIBRARY FUNCTIONS
//Built-in functions in c++ programming e.g sqrt(), abs(), main()
//In order to use these library functions, we need to include the header file in which those library functions are defined 
//example: to use math functions mentioned above, we need to include <cmath> header file at the beginning of our code




//Function with argument but no return value
//Function with argument and return value



//FUNCTION TYPES
//TYPE#1: Function with no argument and no return value
void primeNoArgNoReturn();//Function#1: no arguments passed & void returntype: thus no return value



int main(){

//program to find square root of a number.
double num, numroot;
cout<<"Enter a number to find it's Squareroot:"<<endl;
cin>>num;
numroot = sqrt(num);
cout<<"The root of the number is: "<<numroot<<endl;


primeNoArgNoReturn(); //calling function#1



return 0;
}

//function#1 definition
void primeNoArgNoReturn() {
int i, num, flag = 0;
cout<<"\n\nEnter a number to check: "<<endl;
cin>>num;

for (i=2; i<=num/2; ++i)
{
    if (num%i==0)
    {
    flag=1;
    break;
    }
}       
    if (flag ==1)
    {
    cout<<num<<": The number is not a prime number"<<endl;
    }
    else
    {
    cout<<num<<": The number is a prime number"<<endl;
    }

}



    