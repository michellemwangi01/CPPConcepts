#include <iostream>
#include <string>
using namespace std;


//void myFunc(int x)//passing by value
void myFunc(int &x)//passing by reference
{
x=900;
cout<<"Value of X from myFunc: "<<x<<endl;
}


int main()
{
int y=800;
myFunc(y);
cout<<"Value of X from main is: "<<y<<endl;
return 0;
}


int sum(int num1, int num2){
int s= num1+num2;
return s;
}