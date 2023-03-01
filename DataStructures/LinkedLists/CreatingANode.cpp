#include <iostream>
using namespace std;

struct Node{
    public:
     int mydata;
    struct Node *next;
    } *newNode, *head, *tail;


//function to dynamically creat a linked list
void myLinkedListCreator(){
    int userValue;
    char userDecision;
    
    do {
    newNode = new Node();
    cout<<"Enter a new value (int)"<<endl;
    cin>>userValue;
    newNode->mydata = userValue;
    newNode->next = NULL;
    if (head == NULL){
        head = newNode;
        tail = newNode;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
    cout<<"Would you like to continue? Y = yes, N = no"<<endl;
    cin>>userDecision;
     
    
}while (userDecision == 'Y') ;
}

int main(){

myLinkedListCreator();

/*Node *p1, *p2, *p3;
p1 = new Node();
 p1-> mydata = 24;
 p1-> next = p2;
p2 -> mydata = 34;
p2 ->next = p3;

cout<<p1<<endl;
cout<<p1->mydata<<endl;
cout<<p1->next<<endl;
cout<<p2<<endl;

p1 = p2;
p2 = p1->next;
p2 = p2->next;
//****************************************TRAVERSING A LINKED LIST***************
Node *L1, *L2, *L3, *L4, *L5, *L6;

L1->mydata = 11;
L1->next = L2;

L2->mydata = 12;
L2->next = L3;

L3->mydata = 13;
L3->next = L4;

L4->mydata = 14;
L4->next = L5; 

L5->mydata = 15;
L5->next = L6;

L6->mydata = 16;
L6->next = NULL;


while(L1 != NULL){
    cout<<L1->mydata<<endl;
    L1 = L1->next;
    
}*/
}