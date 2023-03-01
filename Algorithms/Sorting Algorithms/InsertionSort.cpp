#include <iostream>
using namespace std;

void selectionSort(int * myArray, int numofElements){
    int i, temp, j;  
    for ( i = 1; i < numofElements; i++){
        temp = myArray[i];
        j = i-1;
        while (j >= 0 && myArray[j] > temp){
            myArray[j+1] = myArray[j];
            j--;
        }
        myArray[j+1] = temp;
        cout<<temp<<endl;
    }
    cout<<"Sorted array below"<<endl;
    for (int k = 0; k< numofElements; k++){
        cout<<myArray[k]<<endl;
    }
    
}


int main(){
   int myNewArray[]  = {76,87,98,23,34,45,56,67};
   int numberofArrayElements = sizeof(myNewArray)/sizeof(myNewArray[0]);
selectionSort(myNewArray, numberofArrayElements);

}