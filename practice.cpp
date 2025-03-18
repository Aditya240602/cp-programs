#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int data;
    node* next;
    
    node(int val){
        data=val;
        next=nullptr;
    }
};

class LinkedList{
    public:
    node* head;
    LinkedList() {head=nullptr;}

    // Insert at end
    void insert(int value) {
        node* newNode = new node(value);
        if (!head) {
            head = newNode;
            return;
        }
        node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }
    // Print linked list
    void display() {
        node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
