//******C++ FUNCTIONS---> DEFAULT PARAMETERS!!!!******
// Program to compute absolute value
// Works for both int and float

#include <iostream> 
using namespace std;
//function#1
void ageFunc(int age=21){
cout<<"Your age is: "<<age;
}

//function#2
void display(char = '*', int =3);





int main() { 

ageFunc(25);//calling function#1


//function#2
int count=5;
cout<<"\nNo argument passed:"<<endl;
display();

cout<<"\nFirst argument passed:"<<endl;
display('x');

cout<<"\nBoth arguments passed:"<<endl;
display('y',count);


return 0; 
}


void display(char c, int count ){
for(int i = 1; i <= count; ++i) { 
cout << c;
 } cout << endl; 
}










