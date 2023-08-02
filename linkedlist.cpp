#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    //constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data "<< value <<endl;
    }

    
};

Node* swapInPairs(Node* &head){
        //base case
        if(head == NULL || head -> next == NULL){
            return NULL;
        }

        Node* current = head;
        Node* forward = current -> next;
        while(current != NULL && forward != NULL){
            
            Node* temp = forward -> next ;
            forward -> next = current ;
            current -> next = temp;
            
        }
        head = head -> next ;
        return head;
    }

void insertathead(Node* &head,int d){

    //new node creation;
    Node *temp = new Node(d);
    temp-> next = head;
    head = temp;
}

void insertatTail(Node* &tail,int d){

    Node *temp = new Node(d);
    temp-> next = tail -> next;
    tail -> next = temp;
    tail = temp ;
}

void insertAtPositiion(Node* &head,int position , int d){

    Node* temp = head;
    int cnt= 1;

    while(cnt < position -1){
        temp = temp -> next;
        cnt++;
    }

    //creating a node for d
    Node *nodetoinsert = new Node(d);
    nodetoinsert -> next = temp -> next ;
    temp -> next =  nodetoinsert ;

}

void print(Node* &head){
    Node *temp = head;
    while(temp!=NULL){
        cout<< temp ->data << " ";
        temp = temp-> next ;
    }
    cout<<endl;
}

void deleteNode(int position , Node* &head,Node* &tail){
    //deleting first postion
    if(position==1){
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        //deleting any midddle or last node
        Node* current = head ;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position){
            prev = current ; 
            current = current->next;
            
            cnt++;
        }
        
        prev->next = current -> next ;
        current->next=NULL;
        if((prev->next)==NULL){
            tail = prev ;
        }
        delete current ;
        // if(prev->next = NULL){
        //     tail = prev;
        // }

    }
}

int main()
{
    // cout << node1 -> data <<endl;
    // cout << node1 -> next <<endl;


    // insertathead(head,12);
    // print(head);

    // insertathead(head,15);
    // print(head);

    // print(head);

    // print(head);

    // print(head);

    // insertAtPositiion(head , 3 , 55);
    // print(head);

    // deleteNode(5,head,tail);

    // cout<<"Head "<<head -> data <<endl;
    // cout<<"Tail "<<tail -> data <<endl;
    Node *node1 = new Node(1);
    Node* head = node1;
    Node *tail = node1;

    insertatTail(tail,2);
    insertatTail(tail,3);
    insertatTail(tail,4);
    print(head);

    swapInPairs(head);
    print(head);


    return 0;
}
