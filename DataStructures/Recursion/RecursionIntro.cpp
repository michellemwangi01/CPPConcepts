#include <iostream>
using namespace std;


void printFunc (int x){
    if ( x > 0){//compulsory base condition
        cout <<x<<endl;
        printFunc(x-1);
    }
}

int  printFunc2(int n){
    if( n > 0){
        cout<<n<<endl;
        return printFunc2(n-1) + n;
    }
}
int main(){
//printFunc(7);
cout<< printFunc2(5)<<endl;

}