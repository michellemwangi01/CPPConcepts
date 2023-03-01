#include <iostream>
#include <string>
using namespace std;
/*
*******C++ ARRAYS!!!*********
An array is a variable that can store multiple objects of the same type
The name and type of Array cannot be changed after it is declared
SYNTAX: datatype ArrayName[size_of_array];
Example int grade[27];
Each element in an array is assigned a number, referred to as an index. 
And so the elements can be accessed through these indices.

*/
int main(){

char grades[4]={'A','B','C','D'}; //can initialize an array during declaration
int numbers[]={1,2,3,4,5}; //not a must to enter the size of the array when declaring it, it can pick & adjust automatically depending on the number of elements in the array
cout<<grades[0]<<endl; //can access an element using its index

string animals[4]={"Cat","Dog","Cow"}; //in the scenario where there's less elements than those initialized, the empty elements are assigned a zero value
cout<<"Animals: "<<animals[2];//index 3

numbers[4]=10;//update array element

cout<<"Enter a number: "<<endl;
cin>>numbers[3];//updating an array element from user input on 

//printing all elements of an array
int i;
for ( i=0, i<=5, ++i){
cout<<numbers[i];
}


return 0;
}