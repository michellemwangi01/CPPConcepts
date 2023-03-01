#include <iostream>
using namespace std;

int binarySearch (int *a, int n, int data){
    int left = 0;  int right = n -1; 
        while (left < right){
            int mid = (left + right)/2;
            if (data == a[mid]){
                cout<<"Found "<< data << " at index "<< mid <<" which is position "<< mid + 1<<endl;
                break;
            }
            else if (data < a[mid]){
                right = mid -1;
            }
            else if (data > a[mid])
            {
                left = mid + 1;
            }
            else{
                cout<<"Data not found"<<endl;
            }
        
        }
}

int main(){
    int a[] = {12,13,24,45,56,67,68,78,90};
    int data = 67;
    int n = (sizeof(a)/sizeof(a[0]));
    binarySearch(a, n, data);

}