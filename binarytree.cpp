#include<iostream>
#include<queue>
#include<stack>

using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL; 
    }
};

node* buildTree(node* root){

    cout << "Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for insering in left of "<<data<<endl;
    root -> left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<< data <<endl;
    root -> right = buildTree(root -> right);

    return root;
}

void levelOrderTravesal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp =q.front();
        q.pop();

        if(temp==NULL){
            //purana level complete ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}

void reverseLevelOrderTraversal(node* root){
    queue<node*> q;
    stack<node*> s;
    q.push(root);

    while(!q.empty()){

        root = q.front();
        q.pop();
        s.push(root);

        //traversing the tree and enttering first the right node of the tree
        if(root -> right){
            q.push(root->right);
        }

        if(root->left){
            q.push(root->left);
        }
    }

    while(!s.empty()){
        root = s.top();
        cout<<root->data<<" ";
        s.pop();
    }    
}

void inorder(node* root){
    ///base casee
    if(root == NULL){
        return ;
    }

    inorder( root -> left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root"<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left Node for: "<< temp -> data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp->left);
        } 

        cout<<"Enter right node for: "<< temp -> data <<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
}

int main()
{
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTravesal(root);
    //1 3 5 7 11 -1 -1 -1 -1 -1 -1 -1


    // root = buildTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    // cout<<"Printing the level order traversal of tree"<<endl;
    // levelOrderTravesal(root);

    // cout<<"Printing the Reverse level order traversal of tree"<<endl;
    // reverseLevelOrderTraversal(root);

    // cout<<endl;
    // cout<<"preorder traversal is:"<<endl;
    // preorder(root);

    // cout<<endl;
    // cout<<"inorder traversal is:"<<endl;
    // inorder(root);

    // cout<<endl;
    // cout<<"postorder traversal is:"<<endl;
    // postorder(root);
    
    return 0;
}