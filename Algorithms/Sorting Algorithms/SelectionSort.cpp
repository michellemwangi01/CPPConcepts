#include <iostream>
using namespace std;


int main(){
int arr[] = {5,4,3,2,1};
int size= sizeof(arr)/ sizeof(arr[0]);

for(int i=0; i<size-1; i++ ){
//recod the lement in arr[0]
int min = i;

//loop that starts from arr[1]
for(int j= i+1; j<size; j++){
    //compare the elemetns
    if(arr[j] < arr[i]){
        //update min for me 
        min = j;
    }

    if(min != i){
        swap(arr[i], arr[min]);
    }
}

}

//diplaying the sorted array

for(int i=0; i<size; i++ ){
    cout<<arr[i];
}

}