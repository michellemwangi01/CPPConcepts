#include <iostream>
using namespace std;

int num = 4;
int * stack = new int [num];
int top = -1;

void push(){
    for(int i = 0; i < num; i++){
    int value;
    cout<<"\nEnter a value to add to the array"<<endl;
    cin>>value;
    if(top == num-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        stack[top] = value;
        
    }

    }
}

void pop(){
    int temp;
    if (top == -1){
        cout<<"Stack underflow"<<endl;
    }
    else{
        temp = stack[top];
        top--;
        cout<<temp<<endl;

    }
    
}

void peek(){
        if (top ==-1){
            cout<<"Stack empty"<<endl;
        }
        else{
            cout<<stack[top];
        }
}

void display(){
    if (top >=0){
    while (top >= 0){
            cout<<stack[top]<<endl;
        }
    }
    else{
        cout<<"Stack empty"<<endl;
    }
    
}

int main(){
    int choice;
    cout<<"Pick a choice between 1 and 4"<<endl;
    cout<<"1 -push | 2 -pop | 3 -peek | 4 -display"<<endl;
    cin>>choice;
    switch (choice){
        case 1: push();
               cout<<"Do you want to exit or continue? Press Y to continue"<<endl;
               char answer;
               cin>>answer;
               if (answer == 'Y'){
                cout<<"Pick a choice between 1 and 4"<<endl;
                cout<<"1 -push | 2 -pop | 3 -peek | 4 -display"<<endl;
                cin>>choice;
               }
               else
                break;

        case 2: pop();
                //display();
        break;

        case 3: peek();
        break;

        case 4: display();
        break;


    } 
    
}