//**C++ LOOPS!!!!! ---> FOR LOOPS**  
#include <iostream>
using namespace std;
//SYNTAX
/*
for (initialization; condition; update) 
{ body of-loop }
*/

int main()
{

//Printing number from 1 to 5
for (int i=0 ; i<6 ; ++i){
cout<<i<<endl;
}

//C++ Program to display a text 5 times
for(int j=1; j<=6; ++j){
cout<<"Shawarma is yummyyy!!"<<endl;
}


//C++ program to Find the sum of first n Natural Numbers
int sum, num;
sum = 0;
for(int k=1; k<10; ++k){
sum +=k;
}
cout<< "\n\nsum of first n numbers = "<< sum<<"\n\n";



//RANGE BASED FOR LOOP
//used mainly for arrays and loops
//Syntax
/*for (variable : collection) 
{ // body of loop }*/
int num_array[] = {1,2,3,4,5,6,7};
for(int x:num_array){
    int newvar = x*2;
    cout<<newvar<<endl;
}


//C++ INFINITE FOR LOOP
/*infinite for loop 
for(int i = 1; i > 0; i++) 
{ // block of code }*/
//if the condition specified in the for loop is never False, the loop will run infinitely till the memory is full















return 0;
}