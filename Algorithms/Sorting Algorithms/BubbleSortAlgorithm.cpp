#include <iostream>
using namespace std;

int myArray[] = {97,89,98, 76,53,23,45,56,67,78};

int main(){
    int flag = 0;
    for (int b: myArray){
        if (myArray[0] > myArray[1]){
        swap(myArray[0], myArray[1]);
        flag = flag + 1;
    }
    }

    for (int a: myArray){
        cout <<a<<endl;
    }
    
    
}