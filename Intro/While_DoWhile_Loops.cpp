//******C++ LOOPS!!!!! ---> WHILE LOOPS******
#include <iostream>
using namespace std;
int main()
{
//SYNTAX
/*while (condition) 
{ // body of the loop }*/
int i = 1;
while (i<6){
cout<<i<<" "<<endl;
++i;
}

// program to find the sum of positive numbers 
// if the user enters a negative number, the loop ends 
// the negative number entered is not added to the sum 

int myNumber, sum=0;
cout<<"Please enter a number:"<<endl;
cin>>myNumber;
while(myNumber>=0){
    sum += myNumber;
    cout<<"Enter a number:"<<endl;
    cin>>myNumber;
}

cout<<"\nThe sum of the numbers is: "<<sum<<endl;






//****************************""""""""""****
//DO.... WHILE LOOP
//SYNTAX
/*do 
{ // body of loop; }
 while (condition);*/

//program to print first 5 numbers
int j=0;
do{
cout<<j<<endl;
++j;
}
while(j<6);


//Program to print Sum Of Positive Numbers Only
int myNumber2, sum2=0;
cout<<"\n\nPlease Enter a Number:"<<endl;
cin>>myNumber2;
do{
sum2 = sum2 + myNumber2;
cout<<"Enter a number:"<<endl;
cin>> myNumber2;
}
while ( myNumber2>0);
cout<<"The sum of the numbers is: "<< sum2<<endl;













return 0;
}