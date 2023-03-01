//**CALL BY REFERENCE**  
//In the function definition, we call the parameters by reference
#include <iostream>
using namespace std ;
void swap(int &x,int &y);
int main()
{
    int a,b;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b; "<<endl;
    cin>>b;
    cout<<"Before Swapping: "<<a<<"----"<<b<<endl;
    swap(a,b);
    cout<<"After Swapping: "<<a<<"----"<<b<<endl;
}
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x=y;
    y=temp;
}


void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
