//------------------LINEAR SEARCH-----------------------
#include <iostream>
using namespace std;


void linearSearch(int * myAarr, int data, int sizeofArray){
    int i;

        for (i = 0; i < sizeofArray; i++){
            if(myAarr[i] == data){
                cout<<"Data found at index: "<< i<<endl;
                break;
            }
            else{
                cout<<"Next index "<<i<<endl;
            }
            }

            if(i == sizeofArray){
                cout<<"Data not found"<<endl;
            }

        }


int main(){

    int myArr[] = {12,32,34,45,23,56};
    int sizeofArray = sizeof(myArr) / sizeof(myArr[0]);
    linearSearch(myArr, 23, sizeofArray);

}



