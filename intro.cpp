#include <bits/stdc++.h>
using namespace std;


class Node{
    // it is basically creation of a single node
public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
  // To join multiple nodes, we need to create a LL class  
};
class LL{
    // if public is not used default is private
    Node* head;
    Node* tail;
public: 
    LL(){
        head=tail=NULL;
    }
    void push_front(int val){
        Node* newNode= new Node(val);// creates a dynamic object persists after func gets overed
        //Node newNode(val);
        // this basically creates a static list
        // which means if we move out of this class the item gets removed automatically 
        if(head==NULL){
            head=tail=newNode;
            return;
        }else{
            newNode->next=head;
            head=newNode;
        }
    }
    void print(){
        Node* temp=head;
        while(temp != NULL){
            cout<< temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<"\n";
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==NULL){
            tail=head=newNode;
            return;
        }else{
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    void pop_front(){
        if(head==NULL){
            cout<<"Invalid";
            return;
        }
        Node* temp=head;
        head=head-> next;
        temp->next=NULL;
        delete temp;
    }
    void pop_back(){
        if(head==NULL){
            cout<<"invalid";
            return;
        }
        Node* temp=head;
        while(temp-> next!=tail){
            temp=temp->next;
        }
        
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
    void insert(int val,int posn){
        if(head==NULL) push_front(val);
        Node* newNode=new Node(val);
        while(newNode->next!=NULL){
            next
        }
    }
};
int main(){
    LL list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_back(4);
    list.pop_front();
    list.pop_back();
    list.print();
    return 0;
}
