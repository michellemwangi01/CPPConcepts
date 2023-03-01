//**CALL BY VALUE**
#include <iostream>
using namespace std ;
int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b; "<<endl;
    cin>>b;
    swap(a,b);
    cout<<"Before Swapping: "<<a<<"----"<<b<<endl;
    cout<<"After Swapping: "<<a<<"----"<<b<<endl;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}