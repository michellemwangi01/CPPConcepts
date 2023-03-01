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

cout<<"\n\nEnter a number: "<<endl;
cin>>numbers[3];//updating an array element from user input on 
cout<<numbers[3]<<endl;


//printing all elements of an array
int i;
for ( i=0; i<=5; ++i){
cout<<numbers[i];
}

//printing all array elements using range based loop 
//also using passing by value
for (int element : numbers){
cout<<"\nFor range based loop | Element of array: \n"<< element <<endl;
}

//printing all array elements using range based loop 
//passing by reference which is more memory efficient because it doesn't copy the value of the variable
for (int &element : numbers){
cout<<"\nFor range based loop | Element of array: \n"<< element <<endl;
}

//Insert elements into an array from user input
cout<<"\n\n\nInsert numbers for the array: "<<endl;
int insertFromUserArr[5];
for (i=0; i<5; ++i){
cin>>insertFromUserArr[i];
}


//Display Sum and Average of Array Elements Using for Loop
int sumofArray[5] = {9,8,7,6,5};
int summofNums = 0;
int count = 0;
for (int &n : sumofArray){
summofNums = summofNums + n;
++count;
}
double numaverage;
numaverage = summofNums / count;
cout<<"\n\nSum of array numbers is: "<<summofNums<<endl;
cout<<count<<" elements in the array"<<endl;
cout<< "The average of array elements is: "<< numaverage <<endl;





return 0;
}