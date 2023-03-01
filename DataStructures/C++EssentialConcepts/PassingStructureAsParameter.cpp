#include <iostream>
using namespace std;


struct Rectangle{
    int length;
    int breadth;
};

void changeLength(Rectangle *r1, int newlength){//passing by address
    r1->length = newlength;
    cout<<r1->length;

}

int main(){
    Rectangle mynewRect;
    mynewRect.length = 67;
    changeLength(&mynewRect, 45);

}