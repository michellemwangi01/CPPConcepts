#include <iostream>
using namespace std;


void myStudentsGrades(int a[], int y );

int main(){

    int myArray[] = {12,23,34,45,56};
    myStudentsGrades(myArray, 5);

    int *p;
    p = returnArr(3);
    for (int i = 0; i <3; i++ ){
        
    }

}

//PASSING AN ARRAY INTO A FUNCTION
void myStudentsGrades(int a[], int y ){
cout<<"Replace Student Grades below:"<<endl;
for (int i = 0; i < y; i++){
     cin>>a[i];
}
}

//RETURNING AN ARRAY FROM A FUNCTION
int * returnArr(int a){
  static int p[5];
  cout<<"Insert values for your array:"<<endl;
    for (int i = 0; i < a; i++){
        cin>>p[i];
    }
    return p;
}


