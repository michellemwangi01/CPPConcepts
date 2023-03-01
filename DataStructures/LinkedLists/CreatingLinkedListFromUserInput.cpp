#include <iostream>
using namespace std;
struct Node{
    public:
     int mydata;
    struct Node *next;
    } *newNode, *head, *tail, *temp;

//function to dynamically creat a linked list from user input
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
        if (userDecision == 'Y' || userDecision == 'N'){
            continue;
        }
        else{
            cout<<"Please enter a valid response Y or N"<<endl;
            cin>>userDecision;
        }
    
    
} while (userDecision == 'Y') ;
//Display full linked list
temp = head;
int count = 1;
while (head != NULL){
    cout<<"value "<<count<< " - "<<temp->mydata<<endl;
    temp = temp->next;
    count++;
}

}

//function to insert element at beginining of linked list
void insertElementatBeginning(Node *myhead, int value){
    Node *newFirstNode = new Node();
    newFirstNode->mydata = value;
    newFirstNode->next = myhead;
    myhead->next = newFirstNode;
    newFirstNode->next = NULL;
    cout<<"Your new head is: "<<myhead->mydata<<endl;
    cout<<myhead->next<<endl;
    cout<<"The 2nd element is: "<<newFirstNode->mydata;
    cout<<newFirstNode->next<<endl;

      //View the new linked list
    temp = myhead;
    int count = 1;
    while (myhead != NULL){
    cout<<"value "<<count<< " - "<<temp->mydata<<endl;
    temp = temp->next;
    count++;
}

  

    }

int main(){
    
    
    cout<<"Enter a value to be added at front of List: "<<endl;
    int newUserValue;
    cin>>newUserValue;
    Node *myInitialNodeHead;
    myInitialNodeHead = new Node();
    myInitialNodeHead->mydata = newUserValue;
    myInitialNodeHead->next = NULL;
    cout<<"Your initial node head value is: "<<myInitialNodeHead->mydata<<endl;
    insertElementatBeginning(myInitialNodeHead, 87);


    myLinkedListCreator();
    
    
    
    

}