#include<iostream>
using namespace std;

//MERGE FUNCTION 
void m(int a[], int low,  int high, int mid )
{
//declare 3 index variables 
int i, j, k;
int b[10] ;

i = low;
j = mid +1;
k = low;

//put the limits 
while (i<=mid && j<=high ){

//start comparing 
if (a[i] < a[j]){
//if i < than j, put in b[k]
//we putting the 1st element in i inside b[0]
b[k] = a[i];
 i++;//k++
} 
else {
    b[k] = a[j];
    j++;//k++
}

k++;
}

/*if one of them is not emptied or if one of them 
(i or j) finishs before the other, we neex to empty
 the rest of its elements into array b[k]*/

while (i <= mid ){
b[k] = a[i];
i++; k++;

}
while (j <= high ){
b[k] = a[j];
j++; k++;

} 

// empty whatever we have in array b[] to array a[]
for (i = low; i < k; i++) { 
    a[i] = b[i]; }
} 


void mergeSort (int arr[], int low, int high ) 
{
//create mid variable 
int mid ;
//condition to find the mid 
if (low < high) {
    mid= (low +high) /2;
    //cout <<mid<<endl;
    
   
    
    //merge sort first half of the array 
   mergeSort (arr, low, mid) ;
   mergeSort (arr, mid +1, high) ;
   m(arr, low,high,mid);

 }

} 

int main(){


int arr[]={4,9,2,10,8,3,7,5,1,6};
int size = sizeof(arr) / sizeof(arr[0]);

mergeSort (arr, 0,size-1);








}