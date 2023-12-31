#include<iostream>
#include<queue>
#include<stack>
#include<map>
#include<utility>

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

vector<int> verticalOrderTraversal(node* root){
    map<int,map<int,vector<int>>> nodes;
    queue<pair<node*,pair<int,int>>> q;
    vector<int> ans;

    if(root==NULL){
        return ans;
    }

    q.push(make_pair(root,make_pair(0,0)));
    
    while(!q.empty()){
        pair<node*,pair<int,int>> temp=q.front();

        node* frontNode = temp.first;
        int hd=temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].insert(frontNode->data);

        if(frontNode->left){
            q.push(make_pair(frontNode->left,make_pair(hd-1),lvl+1));

        }
        
    }

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
    
    //1 3 5 7 11 -1 -1 -1 -1 -1 -1 -1

    //verticalorder traversal
    //1 2 3 4 5 6 7 -1 -1


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