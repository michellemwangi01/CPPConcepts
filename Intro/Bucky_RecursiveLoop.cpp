#include <iostream>
#include <string>
using namespace std;

//FUNCTION RECURSION
//Calling a Function within itself
/*
void bucky()
{
cout<<"Testing Recursion"<<endl;
bucky();}*/
int factorialFinder(int x){
if (x==1){
return 1;
}
else{
return x * factorialFinder(x-1);
}

}


int main(){
int y;
cout<<"Enter a number: "<<endl;
cin>>y;
cout<<"The factorial of your number is: " <<factorialFinder(y);

return 0;
}