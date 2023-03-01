#include <iostream>
#include <string>
using namespace std;
//NOTES!!!
//A STRUCTURE is a group of related data members while a FUNCTION is a group of related Instructions to accomplish a specific task

struct Rectangle{
    int length;
    int width;
};

struct Student{
    char *stuName;
    int stuAge;
    char *stuCourseName;
    char stuDepartment[10];
};

struct playingCards{
    //structure to hold each card
    int cardFaceValue;
    int cardShape;
    int cardColor;
};


int main(){
//Rectangle object
Rectangle r{12,23};
cout<<r.length<<endl;
cout<<r.width<<endl;
cout<<"Area of rectangle r iss: "<< r.length * r.width<<endl;

//student object
Student s1;
s1.stuAge = 24;
s1.stuCourseName = "Computer Science";
s1.stuName = "Anne Kamau";
cout<<s1.stuAge<<endl;
cout<<s1.stuCourseName<<endl;
cout<<s1.stuName<<endl;

//card object
playingCards c1;
c1.cardFaceValue = 1;
c1.cardColor = 1;
c1.cardShape = 2;
playingCards c2 = {2,3,4};
cout<<"Card Color: "<<c2.cardColor<<endl;


//declare and initialize structure object to hold an array of playing card structures
playingCards deck[52] = {
{2,1,1}, {3,1,1}, {4,1,1}, {5,1,1}, {6,1,1}, {7,1,1}, {8,1,1}, {9,1,1}, {10,1,1}, {11,1,1}, {12,1,1}, {13,1,1}, {1,1,1},
{2,2,2}, {3,2,2}, {4,2,2}, {5,2,2}, {6,2,2}, {7,2,2}, {8,2,2}, {9,2,2}, {10,2,2}, {11,2,2}, {12,2,2}, {13,2,2}, {1,2,2},
{2,3,1}, {3,3,1}, {4,3,1}, {5,3,1}, {6,3,1}, {7,3,1}, {8,3,1}, {9,3,1}, {10,3,1}, {11,3,1}, {12,3,1}, {13,3,1}, {1,3,1},
{2,4,2}, {3,4,2}, {4,4,2}, {5,4,2}, {6,4,2}, {7,4,2}, {8,4,2}, {9,4,2}, {10,4,2}, {11,4,2}, {12,4,2}, {13,4,2}, {1,4,2},
};



if (deck[1].cardFaceValue == 2){
    if (deck [1].cardShape == 1){
        if (deck[1].cardColor == 1){
            cout<<"2 Red of Hearts";
        }
    }
}else
cout<<"Not your card"<<endl;
//cout<<"Face Value: "<<deck[0].cardFaceValue<<endl;
//cout<<"Card Shape: "<< deck[0].cardShape;
};


