#include <iostream>
using namespace std;

//NOTES!!!!!!!!!
//Here, the addresses of the actual parameters are the ones passed into the function 
//This is different from pass by value which copies the value of the actual parameter to the function
//So, the function has to be set up to accept pointers as formal parameters. 
//EXAMPLE

void numSwap(int *a, int *b);

int main(){
    int x = 34;
    int y = 98;
    numSwap(&x, &y);
    cout<<"Value of x is: "<<x<<" AND value of y is: "<<y<<endl;

}

void numSwap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}