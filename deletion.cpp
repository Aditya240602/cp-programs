#include <bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;

    Node(int value) { // Constructor
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
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Delete a node by value
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = nullptr;

        // **Case 1: Delete Head Node**
        if (temp != nullptr && temp->data == key) {
            head = temp->next;
            delete temp;
            cout << "Deleted " << key << " from the list.\n";
            return;
        }

        // **Case 2: Find the node to delete**
        while (temp != nullptr && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        // If key not found
        if (temp == nullptr) {
            cout << key << " not found in the list.\n";
            return;
        }

        // **Case 3: Node Found (Middle or Last)**
        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << key << " from the list.\n";
    }

    // Display the list
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
    list.insert(40);

    cout << "Original Linked List: ";
    list.display();

    list.deleteNode(20); // Deleting a middle node
    list.display();

    list.deleteNode(10); // Deleting the head node
    list.display();

    list.deleteNode(40); // Deleting the last node
    list.display();

    list.deleteNode(100); // Trying to delete a non-existing node

    return 0;
}
