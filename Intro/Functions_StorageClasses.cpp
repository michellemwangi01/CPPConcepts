//******C++ FUNCTIONS---> STORAGE CLASSES!!!!******
#include <iostream>
using namespace std;
//every c++ variable has two features. type and storage class. 
//type defines the data type that can be stored in the variable.
//storage class defines: 
//(1)lifetime of a variable i.e. how long the variable can exist
//(2)what parts of the program can access the variable
/*Depending upon the storage class of a variable, it can be divided into 4 major types:

Local variable: it exists and is accessible only inside the function itself. it is created when the function is called and once the function is excited, the variable is destroyed

Global variable: a variable declared outside all Functions is a global variable and can be accessed and changed by any part of the program. even within other functions. lifetime: exists as long as the program is running

Static local variable

Register Variable

Thread Local Storage
*/
int globalvar = 5; //GLOBAL VARIABLE declared outside any Function
const float pi = 3.14;//CONSTANT VARIABLE
void test();

void teststaticvar(){
static int staticvar = 0;//STATIC VARIABLE
++staticvar;
cout<<"Static Variable Value: "<<staticvar<<endl;
}


int main() { 

int var=9;//LOCAL VARIABLE to main function

test();
teststaticvar();//call it the first time, returns 1. 
teststaticvar();//call it the second time, returns 2. so the value of a staticvar is maintained at the end of Function call. doesn't go back to zero.
teststaticvar();//call the third time, returns 3
//++pi;//won't work coz pi is a constant and cannot be changed
cout<<"Constant variable pi: "<<pi<<endl;

++globalvar;
cout<<"Globalvar accessed from main func: "<<globalvar<<endl;

//var1=10;//won't work because var1 is local to the test func
return 0; 
}


void test(){
++globalvar;
int var1 = 9;//local variable to test function
cout<<"\nLocal var1 accessible only inside the test function: "<<var1<<endl;
cout<<"\nGlobal var also accessible from test function: "<<globalvar<<endl;

}













