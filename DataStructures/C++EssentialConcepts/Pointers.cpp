#include <iostream>
using namespace std;
//NOTES!!!
//A pointer is an address variable, so it stores the address of a data variable
//a program will typically have direct access to ONLY the stack and the code section of memory only
//so to access anything else, that is, anything external to the program, it needs to use pointers.
//Items external to a program include, heap memory, files or anything in hard disk, hardware resources such as keyboard, monitor etc.
//and why do we need heap? because heap offers dynamic data allocation, so when creating arrays which are of indeterminate size, we need to use heap memory
//so when a array for example is created in heap memory, the program will need a pointer to allow it to access the array in that heap


//---------------------DECLARING & PASSING AN ARRAY INTO A FUNCTION
int myFunc(int a[], int len); //both can be used to pass an array to a function. In this one, the array is turned into apointer anyway so might as well so this 2nd one
int  myFunc2 (int *a, int len); //here, the array is passed as a pointer holding the starting address of the array
//-------------------------------------

//MAIN FUNCTION
int main(){
int a = 10;
cout<<a<<endl;

int *b = &a;
cout<<"address of variable 'a' that is stored in pointer variable *b: "<<b<<endl;
cout<<"Dereferencing the pointer to give the value stored in data variable a: "<<*b<<endl;

int d = 56;
int *c;
c = &d;
cout<<""<<endl;

//-------------------------POINTERS TO ARRAYS----------------------------
int myArray[5] = {1,2,3,4,5};
int *pmyArray = myArray; //this sets the pointer array to point at the starting index of the array i.e a[0]. Arrays always decay into pointers
cout<<"The address of a[0]: "<<pmyArray<<endl;
cout<<"The address of a[1]: "<<++pmyArray<<endl;
cout<<"The value of a[2] by dereferencing the pointer: "<<*++pmyArray<<endl;


//CALLING A FUNCTION WITH ARRAY PARAMETERS
int arrayFunction[]={1,2,3};
myFunc(arrayFunction,3);

int arrayFunction2[] = {3,2,1};
myFunc2(arrayFunction2, 3);


}//END OF MAIN FUNCTION


//FUNCTION DEFINITION
int myFunc(int a[], int len){
    cout<<"Passing the array as an array"<<endl;
    for ( int i = 0 ; i<len; i++){
        cout<<"Memory Address of index "<< i <<" is "<< a <<" --> value of that memory address: "<<a[i]<<endl;
 }

}


int myFunc2(int *a, int len){
    cout<<"Passing the array as a pointer"<<endl;
    for (int k = 0; k < len; k++)
    {
        cout<<"Memory Address of index "<<k <<" is "<<a<<" --> value of that memory address: "<<*a<<endl; //we can then use pointer arithmetic to access and print out each value of the array
        a++;
    }
}


