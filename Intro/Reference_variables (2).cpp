#include <iostream>
using namespace std ;
int main()
{
int a=40, b=50;
//declaration and initialization of reference variable must be done in one line
int &ref = a;
ref=b;
//below shows us that both variables have same value because they are pointing to the same memory location
cout<<a<<"--"<< &a<<endl;
cout<<ref<<"--"<<&ref<<endl;
cout<<b<<"--"<<&b;
return 0;
}