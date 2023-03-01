#include <iostream>
using namespace std;

struct Rectangle{
    int len, wid, height;
};

void fun (int a){

    if (a == 0){
        return;
        a = a+1;
        cout<<a<<endl;
        fun(a);
    }
}

int main(){
int a = 5;
fun(a);
//_------------------------------------------------------------------------
//Stack declaration & initialization of primitive datatypes
int stack_age = 5;

//vs heap (must use pointer)
int* heap_age = new int;
*heap_age = 5;

//_------------------------------------------------------------------------

//Stack declaration & initialization of arrays
int stack_ages[5];
stack_ages[0]= 1;
stack_ages[1]= 2;
stack_ages[2]= 3;
stack_ages[3]= 4;
stack_ages[4]= 5;

//vs heap (must use pointer)
int* heap_ages = new int[5];
heap_ages[0]= 1;
heap_ages[1]= 2;
heap_ages[2]= 3;
heap_ages[3]= 4;
heap_ages[4]= 5;


//_------------------------------------------------------------------------
//Structures stack
Rectangle r;
r = {12,23,34};


//Structures heap
Rectangle *r2 = new Rectangle;
*r2 = {23,45,67};



//when deallocating memory, heap memory has to be manually deallocated
delete heap_age;
delete []heap_ages;
delete r2;

cout<<"End of code"<<endl;


//allocating stack memory is easier, faster and quicker to delete and works great for primitive datatypes (stores static data - stack memory does niot grow  )
//allocating heap memory is much harder and slower but better for comples data types and you are given a pointer to point to the memory location on the heap (stores dynamic data)




}