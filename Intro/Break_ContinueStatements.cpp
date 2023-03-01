//******C++ BREAK & CONTINUE STATEMENT IN LOOPS******
#include <iostream>
using namespace std;
int main()
{

//****************************""""""""""****
//BREAK STATEMENT IN FOR LOOPS
//SYNTAX
/*
if(condition)
break;
*/
//program to break the loop if a specified condition is fulfilled
for (int i =0; i<10; ++i){
if (i==6){
    break;
}
cout<<i<<endl;
}



//BREAK STATEMENT IN WHILE LOOP
//program to add only positive numbers and break if negative number is entered
int num, sum=0;
cout<<"\n\nPlease Enter a Number: "<<endl;
cin>>num;
while (num>=0){
if (num<0){
break;
}
sum += num;
cout<<"\nEnter a Number: "<<endl;
cin>>num;
}
cout<<"The sum of the numbers is: "<<sum<<endl;



//BREAK STATEMENT IN NESTED LOOP
//Program to print numbers in nested loop
for(int x=1; x<5; x++){
for(int z=1; z<3; z++){
if (x==2){
    break;
    }
cout<<"X: "<<x<<"Z:"<<z<<endl;
    }


}



//****************************************
//CONTINUE STATEMENT IN FOR LOOP
//this statement skips the current iteration that fulfils the condition and moves to the next.
for (int z=1; z<6; z++){
if(z==3){
continue;//skips 3
}
cout<<z<<endl;
}


//CONTINUE STATEMENT IN WHILE LOOP
int digit, total=0;
cout<<"\n\nPlease Enter a Digit: "<<endl;
cin>digit;
while(digit>0){
total = total + digit;
cout<<"Enter a digit: "<<endl;
cin>>digit;
    if(digit<0)
    {continue;}

}
cout<<"Sum of your numbers is: "<< total <<endl;


return 0;
}