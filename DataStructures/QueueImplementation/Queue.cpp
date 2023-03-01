#include <iostream>
using namespace std;

int front = -1;
int rear = -1;
int userValue;
int sizeOfQueue = 5;
int * queue = new int[sizeOfQueue];


void enqueue(){
    cout<<"Enter values to add to queue"<<endl;
    cin>>userValue;
     if (rear == sizeOfQueue-1){
        cout<<"Queue overflow"<<endl;
    }
    else if (rear == -1 && front == -1){
        front = 0;
        rear = 0;
        queue[rear] = userValue; 
        
    }
    else {
      
        rear++;
        queue[rear] = userValue;
    }  
   
}
 
    


void dequeue(){
    if (rear == -1 && front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else if(rear == front){
        rear = -1;
        front = -1;
    }
    else{
        int temp = queue[front];
        cout<<"Value to be dequeued is "<<temp<<endl;
        front++;
        
    }
}

void peek(){
    if(rear == front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Top value peeked is "<< queue[front] <<endl;
    }

}
void display(){
    cout<<"\nList of value in queue are below"<<endl;
    if(rear == -1 && front == -1){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int k = 0;
        do{
            cout<<queue[front]<<endl;
            front++;
            k++;
        }
        while(k < sizeOfQueue - 1 );
    }

}

int main(){
    for (int i = 0; i < sizeOfQueue; i++){
        enqueue();
    }

    dequeue();
    peek();
    display();
}
