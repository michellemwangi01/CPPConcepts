#include <iostream>
using namespace std;
//NOTES!!!
//REMEMBER that a reference variable is basically an ALIAS to a specific variable. 
//A reference variable gives direct access to the variable that it is referencing without needing to use a pointer or creating a copy of the data variable
//for references int &x is an alias of num1. It points to the exact same memory address.
//with call by reference the code within the fucntion is actually copied into the main method so as to be executed. This forms a monolithinc method of operation as opposed to stuctured / modular method which is always preferable.
void swapNum(int &x, int &y);

int main(){
    int num1 = 45;
    int num2 = 900;
    swapNum (num1, num2);
    cout<<"New value of num1 is: "<<num1<<" AND new value of num2 is: "<<num2<<endl;

}

void swapNum (int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}