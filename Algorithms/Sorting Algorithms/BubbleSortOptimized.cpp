//-------------------BUBBLE SORT ALGORITHM!!---------------------
#include <iostream>
using namespace std;

void bubbleSortAlgorithm(int *myArray, int n){ 
    for (int i = 0; i < n-1 ; i ++){
        int flag = 0;
        for (int j = 0; j < n-1-i; j++){
            if (myArray[j]> myArray[j+1]){
            swap (myArray[j], myArray[j+1]);
            flag = 1;
            }  
        }
        if (flag = 0){
        break;
    }
    }
    cout<<"\nSorted Array - After"<<endl;
    for (int k = 0; k< n; k++){
        cout<<"index "<< k <<" | value : "<< myArray[k]<<endl;
    }
    
 }

int main(){
 int myNewArray []= {12,34,9,76,56,32,45,1};
 int n = (sizeof(myNewArray)/sizeof(myNewArray[0]));
 bubbleSortAlgorithm(myNewArray, n);
}