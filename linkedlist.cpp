#include<bits/stdc++.h>
using namespace std ;

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    
    Node(int value) {  // Constructor
        data = value;
        next = nullptr;
    }
};

// Linked List class
class LinkedList {
public:
    Node* head;
    
    LinkedList() { head = nullptr; }

    // Insert at end
    void insert(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    // Print linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    
    cout << "Linked List: ";
    list.display();
    
    return 0;
}
