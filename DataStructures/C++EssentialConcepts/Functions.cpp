#include <iostream>
using namespace std;
//NOTES!!!
//A STRUCTURE is a group of related data members while a FUNCTION is a group of related Instructions to accomplish a specific task
//Having all our code inside the main function (not good practice) is called Monolithic programming
//Use of functions however and calling the functions inside the main is called Modular / Procedural Programming

int numSum(int a, int b); //function prototype of function to add 2 numbers


int main(){
numSum(2334,34545);

}

int numSum(int a, int b){//fucntion definition
    int c = a + b;
    cout<<"Sum of numbers is: "<< c<<endl;
    return c;

}