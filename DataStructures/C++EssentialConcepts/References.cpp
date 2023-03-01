#include <iostream>
using namespace std;

int main(){

//a reference is basically an allias for a variable. It is important because it is used in parameter passing.
int a = 20; //data variable
int &b = a; //reference variable

b = 23; //'b' is basically an alias of 'a', so when we reassign the value of reference variable b, we are changing also a


cout<<"Value of 'a': "<<a<<endl;
cout<<"Value of '&b': "<<&b<<endl;
cout<<"Value of 'b': "<<b<<endl;



}