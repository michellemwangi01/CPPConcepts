//**CALL BY REFERENCE**  
//In the function definition, we call the parameters by reference
#include <iostream>
using namespace std ;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b; "<<endl;
    cin>>b;
    cout<<"Before Swapping: "<<a<<"----"<<b<<endl;
    swap(a,b);
    cout<<"After Swapping: "<<a<<"----"<<b<<endl;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}