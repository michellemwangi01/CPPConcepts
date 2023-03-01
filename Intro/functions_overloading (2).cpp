//**CALL BY REFERENCE**  
//In the function definition, we call the parameters by reference
#include <iostream>
using namespace std;
int myAdditionFunc(int x, int y)
{
return x+y;
}

double myAdditionFunc(double x, double y)
{
return x+y;
}

int main()
{
int mynum1 = myAdditionFunc(8,5);
int mynum2 = myAdditionFunc (4.6, 5.4);
cout<<"Int: "<<mynum1<<endl;
cout<<"Float: "<<mynum2;

}