//**C++ OPERATORS**  
//In the function definition, we call the parameters by reference
#include <iostream>
using namespace std;
int myOperationFunc(){
int x;
//while (x<100){
cin>>x;
//x&=5;
//x|=5;
//x^=3;
//x>>=3;
x<<=3;
cout<<x;
//}
return x;
}

int main()
{
int newInt = myOperationFunc();
return newInt;
}

