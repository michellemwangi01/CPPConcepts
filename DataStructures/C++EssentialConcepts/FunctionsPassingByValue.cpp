#include <iostream>
using namespace std;

//NOTES!!!!!!!!!
//Pass by value is used when we do not want to alter the actual parameters, but we want to alter the formal parameters and returning a value
//A function to add 2 numbers would use pass by value but a function to swap 2 numbers could not use pass by value. Example below

int numAdd(int x, int y);
void numSwap(int a, int b);

int main(){
    int c = 23;
    int d = 90;
    numSwap(c, d);//passing by value here doesn't work because the actual parameters are not affected when passing by value because we copy the actual values to the formal parameters
    cout<<"Value of c is: "<<c<<" AND value of d is: "<<d<<endl;
    
    
    numAdd(c, d);//this works because we are not modifying the values of the actual parameters but returning a value basedon their calculation


}

int numAdd(int x, int y){
    int z = x + y;
    cout<<"Sum of numbers is: "<<z<<endl;
    return z;
}

void numSwap (int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}