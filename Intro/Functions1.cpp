//#include <iostream>
//using namespace std;
////method one of declaring, defining & calling a function
//
//void myPrintFunction()
//{
//    cout<<"I just got executed!";
//}
//
//int main()
//{
//    myPrintFunction();
//    return 0;
//}


//Method#2 - Function prototyping
#include <iostream>
using namespace std;
void myPrintFunction();

int main()
{
    myPrintFunction();
    return 0;
}

void myPrintFunction()
{
    cout<<"I just got executed!";
}




