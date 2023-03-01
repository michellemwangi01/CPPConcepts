//******C++ FUNCTIONS!!!!******
#include <iostream>
#include <cmath> //header file to call library where allow math functions are contained
using namespace std;

//****************************""""""""""****
//C++ LIBRARY FUNCTIONS
//Built-in functions in c++ programming e.g sqrt(), abs(), main()
//In order to use these library functions, we need to include the header file in which those library functions are defined 
//example: to use math functions mentioned above, we need to include <cmath> header file at the beginning of our code


//FUNCTION TYPES
//TYPE#3: Function with arguments and no return value
void primeYesArgNoReturn(int n); //Function#3: yes arguments passed with no return type



int main(){
int n;
cout<<"Enter a number to check: "<<endl;
cin>>n;
primeYesArgNoReturn(n);


return 0;
}

//function#2 definition
void primeYesArgNoReturn(int n) { 
int i, flag = 0;

for (i=2; i<=n/2; ++i)
{
    if (n%i==0)
    {
    flag=1;
    break;
    }
}       
    if (flag ==1)
    {
    cout<<n<<": The number is not a prime number"<<endl;
    }
    else
    {
    cout<<n<<": The number is a prime number"<<endl;
    } 

}





    