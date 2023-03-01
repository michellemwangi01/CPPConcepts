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
//TYPE#2: Function with no argument and a return value
int primeNoArgYesReturn();//Function#2: no arguments passed with a returntype: thus the function returns a value value



int main(){
int i, num, flag = 0;
num = primeNoArgYesReturn(); //calling function and assigning return value to a variable

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



return 0;
}

//function#2 definition
int primeNoArgYesReturn() { 
int n; 
printf("Enter a positive integer to check: "); 
cin >> n; 
return n; 
}





    