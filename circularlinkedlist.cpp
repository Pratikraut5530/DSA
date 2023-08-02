#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data; 
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL ;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }

};

void insertNode(Node* &tail,int element,int d){
    //assuming that the element is present in the list

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        Node* current = tail;
        Node* temp = NULL;
        while(current->data!=element){
            current= current->next;
        }
        Node* newNode = new Node(d);
        newNode->next = current->next;
        current -> next = newNode;
    }
}

void deleteNode(Node* &tail , int value){
    
    Node* current = tail;
    Node* prev = NULL ;

    while(current->data ==  value){
        prev = current ;
        current = current -> next ;
    }

    prev->next = current->next ;
    current -> next  = NULL;

    delete current;


}

void print(Node* &tail){
    Node *temp = tail ;
    do{
        cout<<tail -> data <<" ";
        tail = tail->next ;
    }while(tail!=temp);
    cout<<endl;
}

int main()
{
    Node* tail = NULL;
    insertNode(tail , 5 ,3);
    print(tail);
    
    insertNode(tail,3,5);
    print(tail);

    insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    deleteNode(tail ,7);
    print(tail);

    // insertNode(tail,9,10);
    // print(tail);
    
    // insertNode(tail,5,6);
    // print(tail);

    // insertNode(tail,3,4);
    // print(tail);

    return 0;
}