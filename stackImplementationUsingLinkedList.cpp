#include<iostream>
using namespace std;

class Node{
    
    public:
    int data;
    Node *next;

    Node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }

};

void push(Node* &top ,int data){
        Node *temp = new Node(data);
        temp -> next = top ;
        top =  temp ;
    }

void pop(Node* &top){
    
    if(top  == NULL){
        cout<<"Stack underflow "<<endl;
    }

    Node* temp = top -> next ;
    top -> next = NULL;
    top = temp;
}    

void peek(Node* top){
    if(top == NULL ){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Element at top is : "<<top->data<<endl;
    }
     
}

bool isEmpty(Node* &top){
    if(top == NULL){
        return true;
    }
    else{
        return false;
    }
}

int main()
{   
    Node* node1 = new Node(10);

    Node* top = node1;
    peek(top);

    push(top,12);
    peek(top);

    push(top,14);
    peek(top);

    push(top,16);
    peek(top);

    pop(top);
    peek(top);

    pop(top);
    peek(top);

    pop(top);
    peek(top);

    pop(top);
    // peek(top);

    if(isEmpty(top)){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    return 0;
}