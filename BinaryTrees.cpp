#include<bits/stdc++.h>
using namespace std;

// Binary Trees
class Node{
public: 
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL; 
    }
};
static int idx=-1;
Node* buildTree(vector<int> pre){
    idx++;
    if(pre[idx]==-1) return NULL;
    Node*root=new Node(pre[idx]);
    root->left=buildTree(pre);
    root->right=buildTree(pre);
    return root;
}
void preOrder(Node* root){
    if(root==NULL) return ;
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(Node* root){ 
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
void postOrder(Node* root){
    if(root==NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(q.size()>0){
        Node* curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right); 
        }
    } 
    cout<<endl;
}
int main(){
    vector<int> preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=buildTree(preorder);
    // cout<<root->data<<"\n";
    // cout<< root->left->data<<"\n";
    // cout<<root->right->data<<"\n";
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    cout<<endl;
    levelOrder(root);
    return 0;
}
