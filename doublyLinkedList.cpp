#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data =d;
        this->prev = NULL;
        this->next = NULL;
    }

    
};

void print(Node* &head){
    Node *temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int length = 0;
    Node *temp = head ;
    while(temp!=NULL){
        length++ ;
        temp = temp -> next;
    }
    return length;
}

void insertAtHead(Node* &head,int d){
    Node *temp = new Node(d);

    temp->next = head ;
    head->prev = temp;
    head = temp ;

}

void insertAtTail(Node* &tail ,int d){

    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node* &head ,int position ,int d){
    if(position==1){
        insertAtHead(head,d);
        return ;
    }
    else{
        Node* temp = head;
        int cnt=1;
        
        while(cnt < position -1){
            temp = temp -> next;
            cnt++;
        }

        Node* nodetoinsert = new Node(d);
        nodetoinsert->next = temp->next;
        temp->next = nodetoinsert;
        nodetoinsert->prev = temp;
    }
}

void deleteNode(Node* &head,int position){
    Node* temp = head;

    if(position==1){
        
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    else{
        int cnt=1;
        Node* current = head ;
        Node* nextNode = NULL;
        Node* prev = NULL;


        while(cnt<position){
            prev = current;
            current = current->next;
            nextNode = current->next;
            cnt++;
        }

        
        prev->next= current->next;
        current->prev=NULL;
        nextNode->prev=prev;
        
        delete current;

    }

    
}


int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<"Lenght of doubly linked list is : "<<getLength(head)<<endl;
    // insertAtHead(head,11);
    // print(head);

    // insertAtHead(head,12);
    // print(head);

    // insertAtHead(head,13);
    // print(head);

    // insertAtHead(head,14);
    // print(head);

    insertAtTail(tail,11);
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,13);
    print(head);

    insertAtTail(tail,14);
    print(head);

    // insertAtPosition(head,6,15);
    // print(head);

    deleteNode(head,2);
    print(head);

    return 0;
}