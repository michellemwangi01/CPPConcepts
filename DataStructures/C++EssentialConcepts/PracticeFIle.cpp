#include <iostream>
using namespace std;

int numSwapperUsingTemp(int x, int y);//Function Prototypes
int numSwapperUsingAdditionandSubtraction(int x, int y);

int main(){
    
  numSwapperUsingTemp(12,23);

  int n1 = 5;
  int n2 = 6;

  n2 = n2 - 1;
  n1 = n1 + 1;

  cout<<n1<<endl;
  cout<<n2<<endl;

}//end of Main Function


//Using pointers to swap variables
int numSwapperUsingTemp(int x, int y){
    cout<<"Value of x before swap: "<<x<<endl;
    cout<<"Value of y before swap: "<<y<<endl;
 
int z = x;
    cout<<"Value of Z is: "<<z<<endl;

int *px = &x;
    *px = y;
    cout<<"Value of x after swap: "<<x<<endl;
    
int *py = &y;
    *py = z;
    cout<<"Value of y after swap: "<<y<<endl;

}

int numSwapperUsingAdditionandSubtraction(int x, int y){
    cout<<"Value of x before swap: "<<x<<endl;
    cout<<"Value of y before swap: "<<y<<endl;

    

}


