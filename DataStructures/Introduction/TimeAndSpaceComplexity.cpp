#include <iostream>
using namespace std;
/*TIME COMPLEXITY - THis is a measure of the amount of time it takes to work on a problem. It is usuallu calcualated by the chacking the time of the worst case.
It is calculated using the function O(n), read as Order of n, n being the number of elements to be worked on, say in a list.
And also by analying the code to know exactly what is being done by the code. 
Example:
 1. when using for loop to print every single element of an array with 5 elements, the time to be taken is O(5)
 2. when when using for loop to compare every element of the array in order to sort the elemnts, the time to be taken is O(5^2)
 3. When searching to find a particular element by dividing the elements into half each time, the tike taken will be O(log (base 2) of n). Log is used to calculate time every time a number is divided until we reach 1
comment TC = 0
assignment statement = 1
loop statement = n + 1
body of loop = n
condition = 1


SPACE COMPLEXITY
HOw much space is consumed in the main memory during the execution of a program. This is also dependent on the 'n'. The number of elements in the data structure
Space complecxity of an array = O(n). n being the length of the array.
space complexity of linked list = o(2n). 2 because each linked list holds the element as well as the link to the next element, thus 2 memory spaces
S(p) = Constant (C) + variablePart
comment s
*/

//Program to print every elememnt of an array
void printArrayElements(int * myPrintArray, int a){
    for (int i = 0; i < a; i++ ){
        cout<<myPrintArray[i]<<endl;
    }
}

//Program to sort the elememnts of an array
int * sortArrayElements(int  mySortArray[]){
    int lenofArray = sizeof(mySortArray);
    cout<<"The length of the array is: "<<lenofArray<<endl;
    int j = 0;
    int numHolder = mySortArray [j];
    for (int k = 0; k < lenofArray; k++){
    if (numHolder <= mySortArray[k]){
        cout<<numHolder<<" is less than or equal to "<<mySortArray[j]<<endl;
        
        
    }
    j++;
        
    } 
    int  * mySortedArray;     
}

int main(){
    int myNumArray[]= {100,45,56,78,90};
    cout<<"The length of the array is in main: "<<sizeof(myNumArray)/sizeof(myNumArray[0])<<endl;
    sortArrayElements(myNumArray);

}

